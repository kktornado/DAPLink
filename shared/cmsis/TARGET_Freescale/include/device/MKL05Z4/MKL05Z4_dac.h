/*
 * Copyright (c) 2014, Freescale Semiconductor, Inc.
 * All rights reserved.
 *
 * THIS SOFTWARE IS PROVIDED BY FREESCALE "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT
 * SHALL FREESCALE BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT
 * OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
 * IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY
 * OF SUCH DAMAGE.
 */
/*
 * WARNING! DO NOT EDIT THIS FILE DIRECTLY!
 *
 * This file was generated automatically and any changes may be lost.
 */
#ifndef __HW_DAC_REGISTERS_H__
#define __HW_DAC_REGISTERS_H__

#include "MKL05Z4.h"
#include "fsl_bitband.h"

/*
 * MKL05Z4 DAC
 *
 * 12-Bit Digital-to-Analog Converter
 *
 * Registers defined in this header file:
 * - HW_DAC_DATnL - DAC Data Low Register
 * - HW_DAC_DATnH - DAC Data High Register
 * - HW_DAC_SR - DAC Status Register
 * - HW_DAC_C0 - DAC Control Register
 * - HW_DAC_C1 - DAC Control Register 1
 * - HW_DAC_C2 - DAC Control Register 2
 *
 * - hw_dac_t - Struct containing all module registers.
 */

#define HW_DAC_INSTANCE_COUNT (1U) /*!< Number of instances of the DAC module. */

/*******************************************************************************
 * HW_DAC_DATnL - DAC Data Low Register
 ******************************************************************************/

/*!
 * @brief HW_DAC_DATnL - DAC Data Low Register (RW)
 *
 * Reset value: 0x00U
 */
typedef union _hw_dac_datnl
{
    uint8_t U;
    struct _hw_dac_datnl_bitfields
    {
        uint8_t DATA0 : 8;             /*!< [7:0]  */
    } B;
} hw_dac_datnl_t;

/*!
 * @name Constants and macros for entire DAC_DATnL register
 */
/*@{*/
#define HW_DAC_DATnL_COUNT (2U)

#define HW_DAC_DATnL_ADDR(x, n)  ((x) + 0x0U + (0x2U * (n)))

#define HW_DAC_DATnL(x, n)       (*(__IO hw_dac_datnl_t *) HW_DAC_DATnL_ADDR(x, n))
#define HW_DAC_DATnL_RD(x, n)    (HW_DAC_DATnL(x, n).U)
#define HW_DAC_DATnL_WR(x, n, v) (HW_DAC_DATnL(x, n).U = (v))
#define HW_DAC_DATnL_SET(x, n, v) (BME_OR8(HW_DAC_DATnL_ADDR(x, n), (uint8_t)(v)))
#define HW_DAC_DATnL_CLR(x, n, v) (BME_AND8(HW_DAC_DATnL_ADDR(x, n), (uint8_t)(~(v))))
#define HW_DAC_DATnL_TOG(x, n, v) (BME_XOR8(HW_DAC_DATnL_ADDR(x, n), (uint8_t)(v)))
/*@}*/

/*
 * Constants & macros for individual DAC_DATnL bitfields
 */

/*!
 * @name Register DAC_DATnL, field DATA0[7:0] (RW)
 *
 * When the DAC buffer is not enabled, DATA[11:0] controls the output voltage
 * based on the following formula: V out = V in * (1 + DACDAT0[11:0])/4096 When the
 * DAC buffer is enabled, DATA is mapped to the 16-word buffer.
 */
/*@{*/
#define BP_DAC_DATnL_DATA0   (0U)          /*!< Bit position for DAC_DATnL_DATA0. */
#define BM_DAC_DATnL_DATA0   (0xFFU)       /*!< Bit mask for DAC_DATnL_DATA0. */
#define BS_DAC_DATnL_DATA0   (8U)          /*!< Bit field size in bits for DAC_DATnL_DATA0. */

/*! @brief Read current value of the DAC_DATnL_DATA0 field. */
#define BR_DAC_DATnL_DATA0(x, n) (HW_DAC_DATnL(x, n).U)

/*! @brief Format value for bitfield DAC_DATnL_DATA0. */
#define BF_DAC_DATnL_DATA0(v) ((uint8_t)((uint8_t)(v) << BP_DAC_DATnL_DATA0) & BM_DAC_DATnL_DATA0)

/*! @brief Set the DATA0 field to a new value. */
#define BW_DAC_DATnL_DATA0(x, n, v) (HW_DAC_DATnL_WR(x, n, v))
/*@}*/
/*******************************************************************************
 * HW_DAC_DATnH - DAC Data High Register
 ******************************************************************************/

/*!
 * @brief HW_DAC_DATnH - DAC Data High Register (RW)
 *
 * Reset value: 0x00U
 */
typedef union _hw_dac_datnh
{
    uint8_t U;
    struct _hw_dac_datnh_bitfields
    {
        uint8_t DATA1 : 4;             /*!< [3:0]  */
        uint8_t RESERVED0 : 4;         /*!< [7:4]  */
    } B;
} hw_dac_datnh_t;

/*!
 * @name Constants and macros for entire DAC_DATnH register
 */
/*@{*/
#define HW_DAC_DATnH_COUNT (2U)

#define HW_DAC_DATnH_ADDR(x, n)  ((x) + 0x1U + (0x2U * (n)))

#define HW_DAC_DATnH(x, n)       (*(__IO hw_dac_datnh_t *) HW_DAC_DATnH_ADDR(x, n))
#define HW_DAC_DATnH_RD(x, n)    (HW_DAC_DATnH(x, n).U)
#define HW_DAC_DATnH_WR(x, n, v) (HW_DAC_DATnH(x, n).U = (v))
#define HW_DAC_DATnH_SET(x, n, v) (BME_OR8(HW_DAC_DATnH_ADDR(x, n), (uint8_t)(v)))
#define HW_DAC_DATnH_CLR(x, n, v) (BME_AND8(HW_DAC_DATnH_ADDR(x, n), (uint8_t)(~(v))))
#define HW_DAC_DATnH_TOG(x, n, v) (BME_XOR8(HW_DAC_DATnH_ADDR(x, n), (uint8_t)(v)))
/*@}*/

/*
 * Constants & macros for individual DAC_DATnH bitfields
 */

/*!
 * @name Register DAC_DATnH, field DATA1[3:0] (RW)
 *
 * When the DAC Buffer is not enabled, DATA[11:0] controls the output voltage
 * based on the following formula. V out = V in * (1 + DACDAT0[11:0])/4096 When the
 * DAC buffer is enabled, DATA[11:0] is mapped to the 16-word buffer.
 */
/*@{*/
#define BP_DAC_DATnH_DATA1   (0U)          /*!< Bit position for DAC_DATnH_DATA1. */
#define BM_DAC_DATnH_DATA1   (0x0FU)       /*!< Bit mask for DAC_DATnH_DATA1. */
#define BS_DAC_DATnH_DATA1   (4U)          /*!< Bit field size in bits for DAC_DATnH_DATA1. */

/*! @brief Read current value of the DAC_DATnH_DATA1 field. */
#define BR_DAC_DATnH_DATA1(x, n) (BME_UBFX8(HW_DAC_DATnH_ADDR(x, n), BP_DAC_DATnH_DATA1, BS_DAC_DATnH_DATA1))

/*! @brief Format value for bitfield DAC_DATnH_DATA1. */
#define BF_DAC_DATnH_DATA1(v) ((uint8_t)((uint8_t)(v) << BP_DAC_DATnH_DATA1) & BM_DAC_DATnH_DATA1)

/*! @brief Set the DATA1 field to a new value. */
#define BW_DAC_DATnH_DATA1(x, n, v) (BME_BFI8(HW_DAC_DATnH_ADDR(x, n), ((uint8_t)(v) << BP_DAC_DATnH_DATA1), BP_DAC_DATnH_DATA1, 4))
/*@}*/

/*******************************************************************************
 * HW_DAC_SR - DAC Status Register
 ******************************************************************************/

/*!
 * @brief HW_DAC_SR - DAC Status Register (RW)
 *
 * Reset value: 0x02U
 *
 * If DMA is enabled, the flags can be cleared automatically by DMA when the DMA
 * request is done. Writing 0 to a field clears it whereas writing 1 has no
 * effect. After reset, DACBFRPTF is set and can be cleared by software, if needed.
 * The flags are set only when the data buffer status is changed. Do not use
 * 32/16-bit accesses to this register.
 */
typedef union _hw_dac_sr
{
    uint8_t U;
    struct _hw_dac_sr_bitfields
    {
        uint8_t DACBFRPBF : 1;         /*!< [0] DAC Buffer Read Pointer Bottom
                                        * Position Flag */
        uint8_t DACBFRPTF : 1;         /*!< [1] DAC Buffer Read Pointer Top Position
                                        * Flag */
        uint8_t RESERVED0 : 6;         /*!< [7:2]  */
    } B;
} hw_dac_sr_t;

/*!
 * @name Constants and macros for entire DAC_SR register
 */
/*@{*/
#define HW_DAC_SR_ADDR(x)        ((x) + 0x20U)

#define HW_DAC_SR(x)             (*(__IO hw_dac_sr_t *) HW_DAC_SR_ADDR(x))
#define HW_DAC_SR_RD(x)          (HW_DAC_SR(x).U)
#define HW_DAC_SR_WR(x, v)       (HW_DAC_SR(x).U = (v))
#define HW_DAC_SR_SET(x, v)      (BME_OR8(HW_DAC_SR_ADDR(x), (uint8_t)(v)))
#define HW_DAC_SR_CLR(x, v)      (BME_AND8(HW_DAC_SR_ADDR(x), (uint8_t)(~(v))))
#define HW_DAC_SR_TOG(x, v)      (BME_XOR8(HW_DAC_SR_ADDR(x), (uint8_t)(v)))
/*@}*/

/*
 * Constants & macros for individual DAC_SR bitfields
 */

/*!
 * @name Register DAC_SR, field DACBFRPBF[0] (RW)
 *
 * Values:
 * - 0 - The DAC buffer read pointer is not equal to C2[DACBFUP].
 * - 1 - The DAC buffer read pointer is equal to C2[DACBFUP].
 */
/*@{*/
#define BP_DAC_SR_DACBFRPBF  (0U)          /*!< Bit position for DAC_SR_DACBFRPBF. */
#define BM_DAC_SR_DACBFRPBF  (0x01U)       /*!< Bit mask for DAC_SR_DACBFRPBF. */
#define BS_DAC_SR_DACBFRPBF  (1U)          /*!< Bit field size in bits for DAC_SR_DACBFRPBF. */

/*! @brief Read current value of the DAC_SR_DACBFRPBF field. */
#define BR_DAC_SR_DACBFRPBF(x) (BME_UBFX8(HW_DAC_SR_ADDR(x), BP_DAC_SR_DACBFRPBF, BS_DAC_SR_DACBFRPBF))

/*! @brief Format value for bitfield DAC_SR_DACBFRPBF. */
#define BF_DAC_SR_DACBFRPBF(v) ((uint8_t)((uint8_t)(v) << BP_DAC_SR_DACBFRPBF) & BM_DAC_SR_DACBFRPBF)

/*! @brief Set the DACBFRPBF field to a new value. */
#define BW_DAC_SR_DACBFRPBF(x, v) (BME_BFI8(HW_DAC_SR_ADDR(x), ((uint8_t)(v) << BP_DAC_SR_DACBFRPBF), BP_DAC_SR_DACBFRPBF, 1))
/*@}*/

/*!
 * @name Register DAC_SR, field DACBFRPTF[1] (RW)
 *
 * Values:
 * - 0 - The DAC buffer read pointer is not zero.
 * - 1 - The DAC buffer read pointer is zero.
 */
/*@{*/
#define BP_DAC_SR_DACBFRPTF  (1U)          /*!< Bit position for DAC_SR_DACBFRPTF. */
#define BM_DAC_SR_DACBFRPTF  (0x02U)       /*!< Bit mask for DAC_SR_DACBFRPTF. */
#define BS_DAC_SR_DACBFRPTF  (1U)          /*!< Bit field size in bits for DAC_SR_DACBFRPTF. */

/*! @brief Read current value of the DAC_SR_DACBFRPTF field. */
#define BR_DAC_SR_DACBFRPTF(x) (BME_UBFX8(HW_DAC_SR_ADDR(x), BP_DAC_SR_DACBFRPTF, BS_DAC_SR_DACBFRPTF))

/*! @brief Format value for bitfield DAC_SR_DACBFRPTF. */
#define BF_DAC_SR_DACBFRPTF(v) ((uint8_t)((uint8_t)(v) << BP_DAC_SR_DACBFRPTF) & BM_DAC_SR_DACBFRPTF)

/*! @brief Set the DACBFRPTF field to a new value. */
#define BW_DAC_SR_DACBFRPTF(x, v) (BME_BFI8(HW_DAC_SR_ADDR(x), ((uint8_t)(v) << BP_DAC_SR_DACBFRPTF), BP_DAC_SR_DACBFRPTF, 1))
/*@}*/

/*******************************************************************************
 * HW_DAC_C0 - DAC Control Register
 ******************************************************************************/

/*!
 * @brief HW_DAC_C0 - DAC Control Register (RW)
 *
 * Reset value: 0x00U
 *
 * Do not use 32- or 16-bit accesses to this register.
 */
typedef union _hw_dac_c0
{
    uint8_t U;
    struct _hw_dac_c0_bitfields
    {
        uint8_t DACBBIEN : 1;          /*!< [0] DAC Buffer Read Pointer Bottom Flag
                                        * Interrupt Enable */
        uint8_t DACBTIEN : 1;          /*!< [1] DAC Buffer Read Pointer Top Flag
                                        * Interrupt Enable */
        uint8_t RESERVED0 : 1;         /*!< [2]  */
        uint8_t LPEN : 1;              /*!< [3] DAC Low Power Control */
        uint8_t DACSWTRG : 1;          /*!< [4] DAC Software Trigger */
        uint8_t DACTRGSEL : 1;         /*!< [5] DAC Trigger Select */
        uint8_t DACRFS : 1;            /*!< [6] DAC Reference Select */
        uint8_t DACEN : 1;             /*!< [7] DAC Enable */
    } B;
} hw_dac_c0_t;

/*!
 * @name Constants and macros for entire DAC_C0 register
 */
/*@{*/
#define HW_DAC_C0_ADDR(x)        ((x) + 0x21U)

#define HW_DAC_C0(x)             (*(__IO hw_dac_c0_t *) HW_DAC_C0_ADDR(x))
#define HW_DAC_C0_RD(x)          (HW_DAC_C0(x).U)
#define HW_DAC_C0_WR(x, v)       (HW_DAC_C0(x).U = (v))
#define HW_DAC_C0_SET(x, v)      (BME_OR8(HW_DAC_C0_ADDR(x), (uint8_t)(v)))
#define HW_DAC_C0_CLR(x, v)      (BME_AND8(HW_DAC_C0_ADDR(x), (uint8_t)(~(v))))
#define HW_DAC_C0_TOG(x, v)      (BME_XOR8(HW_DAC_C0_ADDR(x), (uint8_t)(v)))
/*@}*/

/*
 * Constants & macros for individual DAC_C0 bitfields
 */

/*!
 * @name Register DAC_C0, field DACBBIEN[0] (RW)
 *
 * Values:
 * - 0 - The DAC buffer read pointer bottom flag interrupt is disabled.
 * - 1 - The DAC buffer read pointer bottom flag interrupt is enabled.
 */
/*@{*/
#define BP_DAC_C0_DACBBIEN   (0U)          /*!< Bit position for DAC_C0_DACBBIEN. */
#define BM_DAC_C0_DACBBIEN   (0x01U)       /*!< Bit mask for DAC_C0_DACBBIEN. */
#define BS_DAC_C0_DACBBIEN   (1U)          /*!< Bit field size in bits for DAC_C0_DACBBIEN. */

/*! @brief Read current value of the DAC_C0_DACBBIEN field. */
#define BR_DAC_C0_DACBBIEN(x) (BME_UBFX8(HW_DAC_C0_ADDR(x), BP_DAC_C0_DACBBIEN, BS_DAC_C0_DACBBIEN))

/*! @brief Format value for bitfield DAC_C0_DACBBIEN. */
#define BF_DAC_C0_DACBBIEN(v) ((uint8_t)((uint8_t)(v) << BP_DAC_C0_DACBBIEN) & BM_DAC_C0_DACBBIEN)

/*! @brief Set the DACBBIEN field to a new value. */
#define BW_DAC_C0_DACBBIEN(x, v) (BME_BFI8(HW_DAC_C0_ADDR(x), ((uint8_t)(v) << BP_DAC_C0_DACBBIEN), BP_DAC_C0_DACBBIEN, 1))
/*@}*/

/*!
 * @name Register DAC_C0, field DACBTIEN[1] (RW)
 *
 * Values:
 * - 0 - The DAC buffer read pointer top flag interrupt is disabled.
 * - 1 - The DAC buffer read pointer top flag interrupt is enabled.
 */
/*@{*/
#define BP_DAC_C0_DACBTIEN   (1U)          /*!< Bit position for DAC_C0_DACBTIEN. */
#define BM_DAC_C0_DACBTIEN   (0x02U)       /*!< Bit mask for DAC_C0_DACBTIEN. */
#define BS_DAC_C0_DACBTIEN   (1U)          /*!< Bit field size in bits for DAC_C0_DACBTIEN. */

/*! @brief Read current value of the DAC_C0_DACBTIEN field. */
#define BR_DAC_C0_DACBTIEN(x) (BME_UBFX8(HW_DAC_C0_ADDR(x), BP_DAC_C0_DACBTIEN, BS_DAC_C0_DACBTIEN))

/*! @brief Format value for bitfield DAC_C0_DACBTIEN. */
#define BF_DAC_C0_DACBTIEN(v) ((uint8_t)((uint8_t)(v) << BP_DAC_C0_DACBTIEN) & BM_DAC_C0_DACBTIEN)

/*! @brief Set the DACBTIEN field to a new value. */
#define BW_DAC_C0_DACBTIEN(x, v) (BME_BFI8(HW_DAC_C0_ADDR(x), ((uint8_t)(v) << BP_DAC_C0_DACBTIEN), BP_DAC_C0_DACBTIEN, 1))
/*@}*/

/*!
 * @name Register DAC_C0, field LPEN[3] (RW)
 *
 * See the 12-bit DAC electrical characteristics of the device data sheet for
 * details on the impact of the modes below.
 *
 * Values:
 * - 0 - High-Power mode
 * - 1 - Low-Power mode
 */
/*@{*/
#define BP_DAC_C0_LPEN       (3U)          /*!< Bit position for DAC_C0_LPEN. */
#define BM_DAC_C0_LPEN       (0x08U)       /*!< Bit mask for DAC_C0_LPEN. */
#define BS_DAC_C0_LPEN       (1U)          /*!< Bit field size in bits for DAC_C0_LPEN. */

/*! @brief Read current value of the DAC_C0_LPEN field. */
#define BR_DAC_C0_LPEN(x)    (BME_UBFX8(HW_DAC_C0_ADDR(x), BP_DAC_C0_LPEN, BS_DAC_C0_LPEN))

/*! @brief Format value for bitfield DAC_C0_LPEN. */
#define BF_DAC_C0_LPEN(v)    ((uint8_t)((uint8_t)(v) << BP_DAC_C0_LPEN) & BM_DAC_C0_LPEN)

/*! @brief Set the LPEN field to a new value. */
#define BW_DAC_C0_LPEN(x, v) (BME_BFI8(HW_DAC_C0_ADDR(x), ((uint8_t)(v) << BP_DAC_C0_LPEN), BP_DAC_C0_LPEN, 1))
/*@}*/

/*!
 * @name Register DAC_C0, field DACSWTRG[4] (WORZ)
 *
 * Active high. This is a write-only field, which always reads 0. If DAC
 * software trigger is selected and buffer is enabled, writing 1 to this field will
 * advance the buffer read pointer once.
 *
 * Values:
 * - 0 - The DAC soft trigger is not valid.
 * - 1 - The DAC soft trigger is valid.
 */
/*@{*/
#define BP_DAC_C0_DACSWTRG   (4U)          /*!< Bit position for DAC_C0_DACSWTRG. */
#define BM_DAC_C0_DACSWTRG   (0x10U)       /*!< Bit mask for DAC_C0_DACSWTRG. */
#define BS_DAC_C0_DACSWTRG   (1U)          /*!< Bit field size in bits for DAC_C0_DACSWTRG. */

/*! @brief Format value for bitfield DAC_C0_DACSWTRG. */
#define BF_DAC_C0_DACSWTRG(v) ((uint8_t)((uint8_t)(v) << BP_DAC_C0_DACSWTRG) & BM_DAC_C0_DACSWTRG)

/*! @brief Set the DACSWTRG field to a new value. */
#define BW_DAC_C0_DACSWTRG(x, v) (BME_BFI8(HW_DAC_C0_ADDR(x), ((uint8_t)(v) << BP_DAC_C0_DACSWTRG), BP_DAC_C0_DACSWTRG, 1))
/*@}*/

/*!
 * @name Register DAC_C0, field DACTRGSEL[5] (RW)
 *
 * Values:
 * - 0 - The DAC hardware trigger is selected.
 * - 1 - The DAC software trigger is selected.
 */
/*@{*/
#define BP_DAC_C0_DACTRGSEL  (5U)          /*!< Bit position for DAC_C0_DACTRGSEL. */
#define BM_DAC_C0_DACTRGSEL  (0x20U)       /*!< Bit mask for DAC_C0_DACTRGSEL. */
#define BS_DAC_C0_DACTRGSEL  (1U)          /*!< Bit field size in bits for DAC_C0_DACTRGSEL. */

/*! @brief Read current value of the DAC_C0_DACTRGSEL field. */
#define BR_DAC_C0_DACTRGSEL(x) (BME_UBFX8(HW_DAC_C0_ADDR(x), BP_DAC_C0_DACTRGSEL, BS_DAC_C0_DACTRGSEL))

/*! @brief Format value for bitfield DAC_C0_DACTRGSEL. */
#define BF_DAC_C0_DACTRGSEL(v) ((uint8_t)((uint8_t)(v) << BP_DAC_C0_DACTRGSEL) & BM_DAC_C0_DACTRGSEL)

/*! @brief Set the DACTRGSEL field to a new value. */
#define BW_DAC_C0_DACTRGSEL(x, v) (BME_BFI8(HW_DAC_C0_ADDR(x), ((uint8_t)(v) << BP_DAC_C0_DACTRGSEL), BP_DAC_C0_DACTRGSEL, 1))
/*@}*/

/*!
 * @name Register DAC_C0, field DACRFS[6] (RW)
 *
 * Values:
 * - 0 - The DAC selects DACREF_1 as the reference voltage.
 * - 1 - The DAC selects DACREF_2 as the reference voltage.
 */
/*@{*/
#define BP_DAC_C0_DACRFS     (6U)          /*!< Bit position for DAC_C0_DACRFS. */
#define BM_DAC_C0_DACRFS     (0x40U)       /*!< Bit mask for DAC_C0_DACRFS. */
#define BS_DAC_C0_DACRFS     (1U)          /*!< Bit field size in bits for DAC_C0_DACRFS. */

/*! @brief Read current value of the DAC_C0_DACRFS field. */
#define BR_DAC_C0_DACRFS(x)  (BME_UBFX8(HW_DAC_C0_ADDR(x), BP_DAC_C0_DACRFS, BS_DAC_C0_DACRFS))

/*! @brief Format value for bitfield DAC_C0_DACRFS. */
#define BF_DAC_C0_DACRFS(v)  ((uint8_t)((uint8_t)(v) << BP_DAC_C0_DACRFS) & BM_DAC_C0_DACRFS)

/*! @brief Set the DACRFS field to a new value. */
#define BW_DAC_C0_DACRFS(x, v) (BME_BFI8(HW_DAC_C0_ADDR(x), ((uint8_t)(v) << BP_DAC_C0_DACRFS), BP_DAC_C0_DACRFS, 1))
/*@}*/

/*!
 * @name Register DAC_C0, field DACEN[7] (RW)
 *
 * Starts the Programmable Reference Generator operation.
 *
 * Values:
 * - 0 - The DAC system is disabled.
 * - 1 - The DAC system is enabled.
 */
/*@{*/
#define BP_DAC_C0_DACEN      (7U)          /*!< Bit position for DAC_C0_DACEN. */
#define BM_DAC_C0_DACEN      (0x80U)       /*!< Bit mask for DAC_C0_DACEN. */
#define BS_DAC_C0_DACEN      (1U)          /*!< Bit field size in bits for DAC_C0_DACEN. */

/*! @brief Read current value of the DAC_C0_DACEN field. */
#define BR_DAC_C0_DACEN(x)   (BME_UBFX8(HW_DAC_C0_ADDR(x), BP_DAC_C0_DACEN, BS_DAC_C0_DACEN))

/*! @brief Format value for bitfield DAC_C0_DACEN. */
#define BF_DAC_C0_DACEN(v)   ((uint8_t)((uint8_t)(v) << BP_DAC_C0_DACEN) & BM_DAC_C0_DACEN)

/*! @brief Set the DACEN field to a new value. */
#define BW_DAC_C0_DACEN(x, v) (BME_BFI8(HW_DAC_C0_ADDR(x), ((uint8_t)(v) << BP_DAC_C0_DACEN), BP_DAC_C0_DACEN, 1))
/*@}*/

/*******************************************************************************
 * HW_DAC_C1 - DAC Control Register 1
 ******************************************************************************/

/*!
 * @brief HW_DAC_C1 - DAC Control Register 1 (RW)
 *
 * Reset value: 0x00U
 *
 * Do not use 32- or 16-bit accesses to this register.
 */
typedef union _hw_dac_c1
{
    uint8_t U;
    struct _hw_dac_c1_bitfields
    {
        uint8_t DACBFEN : 1;           /*!< [0] DAC Buffer Enable */
        uint8_t RESERVED0 : 1;         /*!< [1]  */
        uint8_t DACBFMD : 1;           /*!< [2] DAC Buffer Work Mode Select */
        uint8_t RESERVED1 : 4;         /*!< [6:3]  */
        uint8_t DMAEN : 1;             /*!< [7] DMA Enable Select */
    } B;
} hw_dac_c1_t;

/*!
 * @name Constants and macros for entire DAC_C1 register
 */
/*@{*/
#define HW_DAC_C1_ADDR(x)        ((x) + 0x22U)

#define HW_DAC_C1(x)             (*(__IO hw_dac_c1_t *) HW_DAC_C1_ADDR(x))
#define HW_DAC_C1_RD(x)          (HW_DAC_C1(x).U)
#define HW_DAC_C1_WR(x, v)       (HW_DAC_C1(x).U = (v))
#define HW_DAC_C1_SET(x, v)      (BME_OR8(HW_DAC_C1_ADDR(x), (uint8_t)(v)))
#define HW_DAC_C1_CLR(x, v)      (BME_AND8(HW_DAC_C1_ADDR(x), (uint8_t)(~(v))))
#define HW_DAC_C1_TOG(x, v)      (BME_XOR8(HW_DAC_C1_ADDR(x), (uint8_t)(v)))
/*@}*/

/*
 * Constants & macros for individual DAC_C1 bitfields
 */

/*!
 * @name Register DAC_C1, field DACBFEN[0] (RW)
 *
 * Values:
 * - 0 - Buffer read pointer is disabled. The converted data is always the first
 *     word of the buffer.
 * - 1 - Buffer read pointer is enabled. The converted data is the word that the
 *     read pointer points to. It means converted data can be from any word of
 *     the buffer.
 */
/*@{*/
#define BP_DAC_C1_DACBFEN    (0U)          /*!< Bit position for DAC_C1_DACBFEN. */
#define BM_DAC_C1_DACBFEN    (0x01U)       /*!< Bit mask for DAC_C1_DACBFEN. */
#define BS_DAC_C1_DACBFEN    (1U)          /*!< Bit field size in bits for DAC_C1_DACBFEN. */

/*! @brief Read current value of the DAC_C1_DACBFEN field. */
#define BR_DAC_C1_DACBFEN(x) (BME_UBFX8(HW_DAC_C1_ADDR(x), BP_DAC_C1_DACBFEN, BS_DAC_C1_DACBFEN))

/*! @brief Format value for bitfield DAC_C1_DACBFEN. */
#define BF_DAC_C1_DACBFEN(v) ((uint8_t)((uint8_t)(v) << BP_DAC_C1_DACBFEN) & BM_DAC_C1_DACBFEN)

/*! @brief Set the DACBFEN field to a new value. */
#define BW_DAC_C1_DACBFEN(x, v) (BME_BFI8(HW_DAC_C1_ADDR(x), ((uint8_t)(v) << BP_DAC_C1_DACBFEN), BP_DAC_C1_DACBFEN, 1))
/*@}*/

/*!
 * @name Register DAC_C1, field DACBFMD[2] (RW)
 *
 * Values:
 * - 0 - Normal mode
 * - 1 - One-Time Scan mode
 */
/*@{*/
#define BP_DAC_C1_DACBFMD    (2U)          /*!< Bit position for DAC_C1_DACBFMD. */
#define BM_DAC_C1_DACBFMD    (0x04U)       /*!< Bit mask for DAC_C1_DACBFMD. */
#define BS_DAC_C1_DACBFMD    (1U)          /*!< Bit field size in bits for DAC_C1_DACBFMD. */

/*! @brief Read current value of the DAC_C1_DACBFMD field. */
#define BR_DAC_C1_DACBFMD(x) (BME_UBFX8(HW_DAC_C1_ADDR(x), BP_DAC_C1_DACBFMD, BS_DAC_C1_DACBFMD))

/*! @brief Format value for bitfield DAC_C1_DACBFMD. */
#define BF_DAC_C1_DACBFMD(v) ((uint8_t)((uint8_t)(v) << BP_DAC_C1_DACBFMD) & BM_DAC_C1_DACBFMD)

/*! @brief Set the DACBFMD field to a new value. */
#define BW_DAC_C1_DACBFMD(x, v) (BME_BFI8(HW_DAC_C1_ADDR(x), ((uint8_t)(v) << BP_DAC_C1_DACBFMD), BP_DAC_C1_DACBFMD, 1))
/*@}*/

/*!
 * @name Register DAC_C1, field DMAEN[7] (RW)
 *
 * Values:
 * - 0 - DMA is disabled.
 * - 1 - DMA is enabled. When DMA is enabled, the DMA request will be generated
 *     by original interrupts. The interrupts will not be presented on this
 *     module at the same time.
 */
/*@{*/
#define BP_DAC_C1_DMAEN      (7U)          /*!< Bit position for DAC_C1_DMAEN. */
#define BM_DAC_C1_DMAEN      (0x80U)       /*!< Bit mask for DAC_C1_DMAEN. */
#define BS_DAC_C1_DMAEN      (1U)          /*!< Bit field size in bits for DAC_C1_DMAEN. */

/*! @brief Read current value of the DAC_C1_DMAEN field. */
#define BR_DAC_C1_DMAEN(x)   (BME_UBFX8(HW_DAC_C1_ADDR(x), BP_DAC_C1_DMAEN, BS_DAC_C1_DMAEN))

/*! @brief Format value for bitfield DAC_C1_DMAEN. */
#define BF_DAC_C1_DMAEN(v)   ((uint8_t)((uint8_t)(v) << BP_DAC_C1_DMAEN) & BM_DAC_C1_DMAEN)

/*! @brief Set the DMAEN field to a new value. */
#define BW_DAC_C1_DMAEN(x, v) (BME_BFI8(HW_DAC_C1_ADDR(x), ((uint8_t)(v) << BP_DAC_C1_DMAEN), BP_DAC_C1_DMAEN, 1))
/*@}*/

/*******************************************************************************
 * HW_DAC_C2 - DAC Control Register 2
 ******************************************************************************/

/*!
 * @brief HW_DAC_C2 - DAC Control Register 2 (RW)
 *
 * Reset value: 0x01U
 *
 * Do not use 32- or 16-bit accesses to this register.
 */
typedef union _hw_dac_c2
{
    uint8_t U;
    struct _hw_dac_c2_bitfields
    {
        uint8_t DACBFUP : 1;           /*!< [0] DAC Buffer Upper Limit */
        uint8_t RESERVED0 : 3;         /*!< [3:1]  */
        uint8_t DACBFRP : 1;           /*!< [4] DAC Buffer Read Pointer */
        uint8_t RESERVED1 : 3;         /*!< [7:5]  */
    } B;
} hw_dac_c2_t;

/*!
 * @name Constants and macros for entire DAC_C2 register
 */
/*@{*/
#define HW_DAC_C2_ADDR(x)        ((x) + 0x23U)

#define HW_DAC_C2(x)             (*(__IO hw_dac_c2_t *) HW_DAC_C2_ADDR(x))
#define HW_DAC_C2_RD(x)          (HW_DAC_C2(x).U)
#define HW_DAC_C2_WR(x, v)       (HW_DAC_C2(x).U = (v))
#define HW_DAC_C2_SET(x, v)      (BME_OR8(HW_DAC_C2_ADDR(x), (uint8_t)(v)))
#define HW_DAC_C2_CLR(x, v)      (BME_AND8(HW_DAC_C2_ADDR(x), (uint8_t)(~(v))))
#define HW_DAC_C2_TOG(x, v)      (BME_XOR8(HW_DAC_C2_ADDR(x), (uint8_t)(v)))
/*@}*/

/*
 * Constants & macros for individual DAC_C2 bitfields
 */

/*!
 * @name Register DAC_C2, field DACBFUP[0] (RW)
 *
 * Selects the upper limit of the DAC buffer. The buffer read pointer cannot
 * exceed it.
 */
/*@{*/
#define BP_DAC_C2_DACBFUP    (0U)          /*!< Bit position for DAC_C2_DACBFUP. */
#define BM_DAC_C2_DACBFUP    (0x01U)       /*!< Bit mask for DAC_C2_DACBFUP. */
#define BS_DAC_C2_DACBFUP    (1U)          /*!< Bit field size in bits for DAC_C2_DACBFUP. */

/*! @brief Read current value of the DAC_C2_DACBFUP field. */
#define BR_DAC_C2_DACBFUP(x) (BME_UBFX8(HW_DAC_C2_ADDR(x), BP_DAC_C2_DACBFUP, BS_DAC_C2_DACBFUP))

/*! @brief Format value for bitfield DAC_C2_DACBFUP. */
#define BF_DAC_C2_DACBFUP(v) ((uint8_t)((uint8_t)(v) << BP_DAC_C2_DACBFUP) & BM_DAC_C2_DACBFUP)

/*! @brief Set the DACBFUP field to a new value. */
#define BW_DAC_C2_DACBFUP(x, v) (BME_BFI8(HW_DAC_C2_ADDR(x), ((uint8_t)(v) << BP_DAC_C2_DACBFUP), BP_DAC_C2_DACBFUP, 1))
/*@}*/

/*!
 * @name Register DAC_C2, field DACBFRP[4] (RW)
 *
 * Keeps the current value of the buffer read pointer.
 */
/*@{*/
#define BP_DAC_C2_DACBFRP    (4U)          /*!< Bit position for DAC_C2_DACBFRP. */
#define BM_DAC_C2_DACBFRP    (0x10U)       /*!< Bit mask for DAC_C2_DACBFRP. */
#define BS_DAC_C2_DACBFRP    (1U)          /*!< Bit field size in bits for DAC_C2_DACBFRP. */

/*! @brief Read current value of the DAC_C2_DACBFRP field. */
#define BR_DAC_C2_DACBFRP(x) (BME_UBFX8(HW_DAC_C2_ADDR(x), BP_DAC_C2_DACBFRP, BS_DAC_C2_DACBFRP))

/*! @brief Format value for bitfield DAC_C2_DACBFRP. */
#define BF_DAC_C2_DACBFRP(v) ((uint8_t)((uint8_t)(v) << BP_DAC_C2_DACBFRP) & BM_DAC_C2_DACBFRP)

/*! @brief Set the DACBFRP field to a new value. */
#define BW_DAC_C2_DACBFRP(x, v) (BME_BFI8(HW_DAC_C2_ADDR(x), ((uint8_t)(v) << BP_DAC_C2_DACBFRP), BP_DAC_C2_DACBFRP, 1))
/*@}*/

/*******************************************************************************
 * hw_dac_t - module struct
 ******************************************************************************/
/*!
 * @brief All DAC module registers.
 */
#pragma pack(1)
typedef struct _hw_dac
{
    struct {
        __IO hw_dac_datnl_t DATnL;         /*!< [0x0] DAC Data Low Register */
        __IO hw_dac_datnh_t DATnH;         /*!< [0x1] DAC Data High Register */
    } DAT[2];
    uint8_t _reserved0[28];
    __IO hw_dac_sr_t SR;                   /*!< [0x20] DAC Status Register */
    __IO hw_dac_c0_t C0;                   /*!< [0x21] DAC Control Register */
    __IO hw_dac_c1_t C1;                   /*!< [0x22] DAC Control Register 1 */
    __IO hw_dac_c2_t C2;                   /*!< [0x23] DAC Control Register 2 */
} hw_dac_t;
#pragma pack()

/*! @brief Macro to access all DAC registers. */
/*! @param x DAC module instance base address. */
/*! @return Reference (not a pointer) to the registers struct. To get a pointer to the struct,
 *     use the '&' operator, like <code>&HW_DAC(DAC0_BASE)</code>. */
#define HW_DAC(x)      (*(hw_dac_t *)(x))

#endif /* __HW_DAC_REGISTERS_H__ */
/* v33/140401/2.1.0 */
/* EOF */
