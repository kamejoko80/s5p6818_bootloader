/*
 * Copyright (C) 2017
 * Author: metro94 <flattiles@gmail.com>
 *
 * Version: v1.0
 * --- Update time: 02/07/2017
 * --- Description: First build; header of driver for X-Powers AXP228
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __AXP228_H__
#define __AXP228_H__

#define AXP228_I2C_ADDR				0x34

#define AXP228_REG_POWER_STATUS			0x00
#define AXP228_REG_POWRE_MODE			0x01
#define AXP228_REG_DATA_CACHE_0			0x02
#define AXP228_REG_DATA_CACHE_1			0x03
#define AXP228_REG_DATA_CACHE_2			0x04
#define AXP228_REG_DATA_CACHE_3			0x05
#define AXP228_REG_DATA_CACHE_4			0x06
#define AXP228_REG_DATA_CACHE_5			0x07
#define AXP228_REG_DATA_CACHE_6			0x08
#define AXP228_REG_DATA_CACHE_7			0x09
#define AXP228_REG_DATA_CACHE_8			0x0A
#define AXP228_REG_DATA_CACHE_9			0x0B
#define AXP228_REG_DATA_CACHE_10		0x0C
#define AXP228_REG_DATA_CACHE_11		0x0D
#define AXP228_REG_DATA_CACHE_12		0x0E
#define AXP228_REG_DATA_CACHE_13		0x0F
#define AXP228_REG_POWER_SET_0			0x10
#define AXP228_REG_POWER_SET_1			0x12
#define AXP228_REG_POWER_SET_2			0x13
#define AXP228_REG_VOLTAGE_SET_DLDO1		0x15
#define AXP228_REG_VOLTAGE_SET_DLDO2		0x16
#define AXP228_REG_VOLTAGE_SET_DLDO3		0x17
#define AXP228_REG_VOLTAGE_SET_DLDO4		0x18
#define AXP228_REG_VOLTAGE_SET_ELDO1		0x19
#define AXP228_REG_VOLTAGE_SET_ELDO2		0x1A
#define AXP228_REG_VOLTAGE_SET_ELDO3		0x1B
#define AXP228_REG_VOLTAGE_SET_DC5LDO		0x1C
#define AXP228_REG_VOLTAGE_SET_DCDC1		0x21
#define AXP228_REG_VOLTAGE_SET_DCDC2		0x22
#define AXP228_REG_VOLTAGE_SET_DCDC3		0x23
#define AXP228_REG_VOLTAGE_SET_DCDC4		0x24
#define AXP228_REG_VOLTAGE_SET_DCDC5		0x25
#define AXP228_REG_VRC_SET_DCDC23		0x27
#define AXP228_REG_VOLTAGE_SET_ALDO1		0x28
#define AXP228_REG_VOLTAGE_SET_ALDO2		0x29
#define AXP228_REG_VOLTAGE_SET_ALDO3		0x2A
#define AXP228_REG_IPSOUT_CHANNEL_SET		0x30
#define AXP228_REG_WAKEUP_SET			0x31
#define AXP228_REG_SHUTDOWN_SET			0x32
#define AXP228_REG_CHARGE_CONTROL_1		0x33
#define AXP228_REG_CHARGE_CONTROL_2		0x34
#define AXP228_REG_CHARGE_CONTROL_3		0x35
#define AXP228_REG_PEK_PARAMETER_SET		0x36
#define AXP228_REG_DCDC_CONVERTOR_FREQ		0x37
#define AXP228_REG_BAT_CHARGE_LOW_TEMP_WARN	0x38
#define AXP228_REG_BAT_CHARGE_HIGH_TEMP_WARN	0x39
#define AXP228_REG_BAT_DISCHARGE_LOW_TEMP_WARN	0x3C
#define AXP228_REG_BAT_DISCHARGE_HIGH_TEMP_WARN	0x3D
#define AXP228_REG_DCDC_MODE			0x80
#define AXP228_REG_ADC_ENABLE			0x82
#define AXP228_REG_ADC_CONTROL			0x84
#define AXP228_REG_TS_ADC_CONTROL		0x85
#define AXP228_REG_TIMER_CONTROL		0x8A
#define AXP228_REG_PWREN_CONTROL_0		0x8C
#define AXP228_REG_PWREN_CONTROL_1		0x8D
#define AXP228_REG_OVER_TEMPERATURE_SHUTDOWN	0x8F

#define AXP228_REG_GPIO0_CONTROL		0x90
#define AXP228_REG_GPIO0_VOLTAGE_SET		0x91
#define AXP228_REG_GPIO1_CONTROL		0x92
#define AXP228_REG_GPIO1_VOLTAGE_SET		0x93
#define AXP228_REG_GPIO_SIGNAL_STATUS		0x94
#define AXP228_REG_GPIO_PULL_LOW_CONTROL	0x97

#define AXP228_REG_IRQ_ENABLE_CONTROL_1		0x40
#define AXP228_REG_IRQ_ENABLE_CONTROL_2		0x41
#define AXP228_REG_IRQ_ENABLE_CONTROL_3		0x42
#define AXP228_REG_IRQ_ENABLE_CONTROL_4		0x43
#define AXP228_REG_IRQ_ENABLE_CONTROL_5		0x44
#define AXP228_REG_IRQ_STATUS_1			0x48
#define AXP228_REG_IRQ_STATUS_2			0x49
#define AXP228_REG_IRQ_STATUS_3			0x4A
#define AXP228_REG_IRQ_STATUS_4			0x4B
#define AXP228_REG_IRQ_STATUS_5			0x4C

#define AXP228_REG_TEMPERATURE_HIGH		0x56
#define AXP228_REG_TEMPERATURE_LOW		0x57
#define AXP228_REG_TS_ADC_HIGH			0x58
#define AXP228_REG_TS_ADC_LOW			0x59
#define AXP228_REG_BAT_VOLTAGE_HIGH		0x78
#define AXP228_REG_BAT_VOLTAGE_LOW		0x79
#define AXP228_REG_BAT_CHARGE_CURRENT_HIGH	0x7A
#define AXP228_REG_BAT_CHARGE_CURRENT_LOW	0x7B
#define AXP228_REG_BAT_DISCHARGE_CURRENT_HIGH	0x7C
#define AXP228_REG_BAT_DISCHARGE_CURRENT_LOW	0x7D

#define AXP228_REG_GAUGE_CONTROL		0xB8
#define AXP228_REG_GAUGE_RESULT			0xB9
#define AXP228_REG_BAT_CAPACITY_SET_0		0xE0
#define AXP228_REG_BAT_CAPACITY_SET_1		0xE1
#define AXP228_REG_BAT_LOW_POWER_THRESHOLD	0xE6

#endif

