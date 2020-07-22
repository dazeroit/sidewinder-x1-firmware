/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once
/**
 * Configuration_tmc.h
 * Created by Dazero.it
 */
#define CONFIGURATION_TMC2209_H_VERSION 020005

//===========================================================================
//=============================     CURRENTS     ============================
//===========================================================================

//Artillery Sidewinder X1
//TMC2100 Original Irms
#define ORIGINAL_IRMS_X     700
#define ORIGINAL_IRMS_Y     700
#define ORIGINAL_IRMS_Z     700
#define ORIGINAL_IRMS_Z2    700
#define ORIGINAL_IRMS_E0    700

//TMC2209
#define TMC2209_IRMS_X      841
#define TMC2209_IRMS_Y      841
#define TMC2209_IRMS_Z      841
#define TMC2209_IRMS_Z2     841
#define TMC2209_IRMS_E0     700

//TMC2208
#define TMC2208_IRMS_X      700
#define TMC2208_IRMS_Y      700
#define TMC2208_IRMS_Z      700
#define TMC2208_IRMS_Z2     700
#define TMC2208_IRMS_E0     700

//Current
#define IRMS_X      ORIGINAL_IRMS_X
#define IRMS_Y      ORIGINAL_IRMS_Y
#define IRMS_Z      ORIGINAL_IRMS_Z
#define IRMS_Z2     ORIGINAL_IRMS_Z2
#define IRMS_E0     ORIGINAL_IRMS_E0