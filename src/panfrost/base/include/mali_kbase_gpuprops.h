/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */
/*
 *
 * (C) COPYRIGHT 2017-2022 ARM Limited. All rights reserved.
 *
 * This program is free software and is provided to you under the terms of the
 * GNU General Public License version 2 as published by the Free Software
 * Foundation, and any use by you of this program is subject to the terms
 * of such GNU license.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, you can access it online at
 * http://www.gnu.org/licenses/gpl-2.0.html.
 *
 */

#ifndef _UAPI_KBASE_GPUPROP_H_
#define _UAPI_KBASE_GPUPROP_H_

/**********************************
 * Definitions for GPU properties *
 **********************************/
#define KBASE_GPUPROP_VALUE_SIZE_U8	(0x0)
#define KBASE_GPUPROP_VALUE_SIZE_U16	(0x1)
#define KBASE_GPUPROP_VALUE_SIZE_U32	(0x2)
#define KBASE_GPUPROP_VALUE_SIZE_U64	(0x3)

#define KBASE_GPUPROP_PRODUCT_ID			1
#define KBASE_GPUPROP_VERSION_STATUS			2
#define KBASE_GPUPROP_MINOR_REVISION			3
#define KBASE_GPUPROP_MAJOR_REVISION			4
/* 5 previously used for GPU speed */
#define KBASE_GPUPROP_GPU_FREQ_KHZ_MAX			6
/* 7 previously used for minimum GPU speed */
#define KBASE_GPUPROP_LOG2_PROGRAM_COUNTER_SIZE		8
#define KBASE_GPUPROP_TEXTURE_FEATURES_0		9
#define KBASE_GPUPROP_TEXTURE_FEATURES_1		10
#define KBASE_GPUPROP_TEXTURE_FEATURES_2		11
#define KBASE_GPUPROP_GPU_AVAILABLE_MEMORY_SIZE		12

#define KBASE_GPUPROP_L2_LOG2_LINE_SIZE			13
#define KBASE_GPUPROP_L2_LOG2_CACHE_SIZE		14
#define KBASE_GPUPROP_L2_NUM_L2_SLICES			15

#define KBASE_GPUPROP_TILER_BIN_SIZE_BYTES		16
#define KBASE_GPUPROP_TILER_MAX_ACTIVE_LEVELS		17

#define KBASE_GPUPROP_MAX_THREADS			18
#define KBASE_GPUPROP_MAX_WORKGROUP_SIZE		19
#define KBASE_GPUPROP_MAX_BARRIER_SIZE			20
#define KBASE_GPUPROP_MAX_REGISTERS			21
#define KBASE_GPUPROP_MAX_TASK_QUEUE			22
#define KBASE_GPUPROP_MAX_THREAD_GROUP_SPLIT		23
#define KBASE_GPUPROP_IMPL_TECH				24

#define KBASE_GPUPROP_RAW_SHADER_PRESENT		25
#define KBASE_GPUPROP_RAW_TILER_PRESENT			26
#define KBASE_GPUPROP_RAW_L2_PRESENT			27
#define KBASE_GPUPROP_RAW_STACK_PRESENT			28
#define KBASE_GPUPROP_RAW_L2_FEATURES			29
#define KBASE_GPUPROP_RAW_CORE_FEATURES			30
#define KBASE_GPUPROP_RAW_MEM_FEATURES			31
#define KBASE_GPUPROP_RAW_MMU_FEATURES			32
#define KBASE_GPUPROP_RAW_AS_PRESENT			33
#define KBASE_GPUPROP_RAW_JS_PRESENT			34
#define KBASE_GPUPROP_RAW_JS_FEATURES_0			35
#define KBASE_GPUPROP_RAW_JS_FEATURES_1			36
#define KBASE_GPUPROP_RAW_JS_FEATURES_2			37
#define KBASE_GPUPROP_RAW_JS_FEATURES_3			38
#define KBASE_GPUPROP_RAW_JS_FEATURES_4			39
#define KBASE_GPUPROP_RAW_JS_FEATURES_5			40
#define KBASE_GPUPROP_RAW_JS_FEATURES_6			41
#define KBASE_GPUPROP_RAW_JS_FEATURES_7			42
#define KBASE_GPUPROP_RAW_JS_FEATURES_8			43
#define KBASE_GPUPROP_RAW_JS_FEATURES_9			44
#define KBASE_GPUPROP_RAW_JS_FEATURES_10		45
#define KBASE_GPUPROP_RAW_JS_FEATURES_11		46
#define KBASE_GPUPROP_RAW_JS_FEATURES_12		47
#define KBASE_GPUPROP_RAW_JS_FEATURES_13		48
#define KBASE_GPUPROP_RAW_JS_FEATURES_14		49
#define KBASE_GPUPROP_RAW_JS_FEATURES_15		50
#define KBASE_GPUPROP_RAW_TILER_FEATURES		51
#define KBASE_GPUPROP_RAW_TEXTURE_FEATURES_0		52
#define KBASE_GPUPROP_RAW_TEXTURE_FEATURES_1		53
#define KBASE_GPUPROP_RAW_TEXTURE_FEATURES_2		54
#define KBASE_GPUPROP_RAW_GPU_ID			55
#define KBASE_GPUPROP_RAW_THREAD_MAX_THREADS		56
#define KBASE_GPUPROP_RAW_THREAD_MAX_WORKGROUP_SIZE	57
#define KBASE_GPUPROP_RAW_THREAD_MAX_BARRIER_SIZE	58
#define KBASE_GPUPROP_RAW_THREAD_FEATURES		59
#define KBASE_GPUPROP_RAW_COHERENCY_MODE		60

#define KBASE_GPUPROP_COHERENCY_NUM_GROUPS		61
#define KBASE_GPUPROP_COHERENCY_NUM_CORE_GROUPS		62
#define KBASE_GPUPROP_COHERENCY_COHERENCY		63
#define KBASE_GPUPROP_COHERENCY_GROUP_0			64
#define KBASE_GPUPROP_COHERENCY_GROUP_1			65
#define KBASE_GPUPROP_COHERENCY_GROUP_2			66
#define KBASE_GPUPROP_COHERENCY_GROUP_3			67
#define KBASE_GPUPROP_COHERENCY_GROUP_4			68
#define KBASE_GPUPROP_COHERENCY_GROUP_5			69
#define KBASE_GPUPROP_COHERENCY_GROUP_6			70
#define KBASE_GPUPROP_COHERENCY_GROUP_7			71
#define KBASE_GPUPROP_COHERENCY_GROUP_8			72
#define KBASE_GPUPROP_COHERENCY_GROUP_9			73
#define KBASE_GPUPROP_COHERENCY_GROUP_10		74
#define KBASE_GPUPROP_COHERENCY_GROUP_11		75
#define KBASE_GPUPROP_COHERENCY_GROUP_12		76
#define KBASE_GPUPROP_COHERENCY_GROUP_13		77
#define KBASE_GPUPROP_COHERENCY_GROUP_14		78
#define KBASE_GPUPROP_COHERENCY_GROUP_15		79

#define KBASE_GPUPROP_TEXTURE_FEATURES_3		80
#define KBASE_GPUPROP_RAW_TEXTURE_FEATURES_3		81

#define KBASE_GPUPROP_NUM_EXEC_ENGINES			82

#define KBASE_GPUPROP_RAW_THREAD_TLS_ALLOC		83
#define KBASE_GPUPROP_TLS_ALLOC				84
#define KBASE_GPUPROP_RAW_GPU_FEATURES			85

#endif
