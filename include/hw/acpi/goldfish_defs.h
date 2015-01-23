/*
** Copyright (c) 2015, Intel Corporation
**
** This software is licensed under the terms of the GNU General Public
** License version 2, as published by the Free Software Foundation, and
** may be copied, distributed, and modified under those terms.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
*/

/* Defines I/O resources (memory regions, interrupts, etc.) required by Android-
 * specific virtual hardware for x86/x86_64 emulation. Shared between ASL and C
 * code.
 *
 * For I/O memory, we use 0xff001000 and above.
 * For interrupts, we use lines 16 through 23.
 */

#ifndef ACPI_GOLDFISH_DEFS_H
#define ACPI_GOLDFISH_DEFS_H

/* goldfish battery */
#define GF_BATTERY_IOMEM_BASE   0xff010000
#define GF_BATTERY_IOMEM_SIZE   0x00001000
#define GF_BATTERY_IRQ          16

#endif  /* !ACPI_GOLDFISH_DEFS_H */
