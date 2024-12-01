/*
 * Copyright © 2015 Intel Corporation
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 */

#ifndef ANV_NIR_H
#define ANV_NIR_H

#include "nir/nir.h"
#include "anv_private.h"

#ifdef __cplusplus
extern "C" {
#endif

bool anv_check_for_primitive_replication(struct anv_device *device,
                                         VkShaderStageFlags stages,
                                         nir_shader **shaders,
                                         uint32_t view_mask);

bool anv_nir_lower_multiview(nir_shader *shader, uint32_t view_mask,
                             bool use_primitive_replication);

bool anv_nir_lower_ycbcr_textures(nir_shader *shader,
                                  const struct anv_pipeline_layout *layout);

static inline nir_address_format
anv_nir_ssbo_addr_format(const struct anv_physical_device *pdevice,
                         bool robust_buffer_access)
{
   if (robust_buffer_access)
      return nir_address_format_64bit_bounded_global;
   else
      return nir_address_format_64bit_global_32bit_offset;
}

static inline nir_address_format
anv_nir_ubo_addr_format(const struct anv_physical_device *pdevice,
                        bool robust_buffer_access)
{
   if (robust_buffer_access)
      return nir_address_format_64bit_bounded_global;
   else
      return nir_address_format_64bit_global_32bit_offset;
}

bool anv_nir_lower_ubo_loads(nir_shader *shader);

void anv_nir_apply_pipeline_layout(nir_shader *shader,
                                   const struct anv_physical_device *pdevice,
                                   bool robust_buffer_access,
                                   const struct anv_pipeline_layout *layout,
                                   struct anv_pipeline_bind_map *map);

void anv_nir_compute_push_layout(nir_shader *nir,
                                 const struct anv_physical_device *pdevice,
                                 bool robust_buffer_access,
                                 struct brw_stage_prog_data *prog_data,
                                 struct anv_pipeline_bind_map *map,
                                 void *mem_ctx);

void anv_nir_validate_push_layout(struct brw_stage_prog_data *prog_data,
                                  struct anv_pipeline_bind_map *map);

bool anv_nir_add_base_work_group_id(nir_shader *shader);

uint32_t anv_nir_compute_used_push_descriptors(nir_shader *shader,
                                               const struct anv_pipeline_layout *layout);

bool anv_nir_loads_push_desc_buffer(nir_shader *nir,
                                    const struct anv_pipeline_layout *layout,
                                    const struct anv_pipeline_bind_map *bind_map);

uint32_t anv_nir_push_desc_ubo_fully_promoted(nir_shader *nir,
                                              const struct anv_pipeline_layout *layout,
                                              const struct anv_pipeline_bind_map *bind_map);

#ifdef __cplusplus
}
#endif

#endif /* ANV_NIR_H */