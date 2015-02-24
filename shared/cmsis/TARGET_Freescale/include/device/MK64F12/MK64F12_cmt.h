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
#ifndef __HW_CMT_REGISTERS_H__
#define __HW_CMT_REGISTERS_H__

#include "MK64F12.h"
#include "fsl_bitband.h"

/*
 * MK64F12 CMT
 *
 * Carrier Modulator Transmitter
 *
 * Registers defined in this header file:
 * - HW_CMT_CGH1 - CMT Carrier Generator High Data Register 1
 * - HW_CMT_CGL1 - CMT Carrier Generator Low Data Register 1
 * - HW_CMT_CGH2 - CMT Carrier Generator High Data Register 2
 * - HW_CMT_CGL2 - CMT Carrier Generator Low Data Register 2
 * - HW_CMT_OC - CMT Output Control Register
 * - HW_CMT_MSC - CMT Modulator Status and Control Register
 * - HW_CMT_CMD1 - CMT Modulator Data Register Mark High
 * - HW_CMT_CMD2 - CMT Modulator Data Register Mark Low
 * - HW_CMT_CMD3 - CMT Modulator Data Register Space High
 * - HW_CMT_CMD4 - CMT Modulator Data Register Space Low
 * - HW_CMT_PPS - CMT Primary Prescaler Register
 * - HW_CMT_DMA - CMT Direct Memory Access Register
 *
 * - hw_cmt_t - Struct containing all module registers.
 */

#define HW_CMT_INSTANCE_COUNT (1U) /*!< Number of instances of the CMT module. */

/*******************************************************************************
 * HW_CMT_CGH1 - CMT Carrier Generator High Data Register 1
 ******************************************************************************/

/*!
 * @brief HW_CMT_CGH1 - CMT Carrier Generator High Data Register 1 (RW)
 *
 * Reset value: 0x00U
 *
 * This data register contains the primary high value for generating the carrier
 * output.
 */
typedef union _hw_cmt_cgh1
{
    uint8_t U;
    struct _hw_cmt_cgh1_bitfields
    {
        uint8_t PH : 8;                /*!< [7:0] Primary Carrier High Time Data Value */
    } B;
} hw_cmt_cgh1_t;

/*!
 * @name Constants and macros for entire CMT_CGH1 register
 */
/*@{*/
#define HW_CMT_CGH1_ADDR(x)      ((x) + 0x0U)

#define HW_CMT_CGH1(x)           (*(__IO hw_cmt_cgh1_t *) HW_CMT_CGH1_ADDR(x))
#define HW_CMT_CGH1_RD(x)        (HW_CMT_CGH1(x).U)
#define HW_CMT_CGH1_WR(x, v)     (HW_CMT_CGH1(x).U = (v))
#define HW_CMT_CGH1_SET(x, v)    (HW_CMT_CGH1_WR(x, HW_CMT_CGH1_RD(x) |  (v)))
#define HW_CMT_CGH1_CLR(x, v)    (HW_CMT_CGH1_WR(x, HW_CMT_CGH1_RD(x) & ~(v)))
#define HW_CMT_CGH1_TOG(x, v)    (HW_CMT_CGH1_WR(x, HW_CMT_CGH1_RD(x) ^  (v)))
/*@}*/

/*
 * Constants & macros for individual CMT_CGH1 bitfields
 */

/*!
 * @name Register CMT_CGH1, field PH[7:0] (RW)
 *
 * Contains the number of input clocks required to generate the carrier high
 * time period. When operating in Time mode, this register is always selected. When
 * operating in FSK mode, this register and the secondary register pair are
 * alternately selected under the control of the modulator. The primary carrier high
 * time value is undefined out of reset. This register must be written to nonzero
 * values before the carrier generator is enabled to avoid spurious results.
 */
/*@{*/
#define BP_CMT_CGH1_PH       (0U)          /*!< Bit position for CMT_CGH1_PH. */
#define BM_CMT_CGH1_PH       (0xFFU)       /*!< Bit mask for CMT_CGH1_PH. */
#define BS_CMT_CGH1_PH       (8U)          /*!< Bit field size in bits for CMT_CGH1_PH. */

/*! @brief Read current value of the CMT_CGH1_PH field. */
#define BR_CMT_CGH1_PH(x)    (HW_CMT_CGH1(x).U)

/*! @brief Format value for bitfield CMT_CGH1_PH. */
#define BF_CMT_CGH1_PH(v)    ((uint8_t)((uint8_t)(v) << BP_CMT_CGH1_PH) & BM_CMT_CGH1_PH)

/*! @brief Set the PH field to a new value. */
#define BW_CMT_CGH1_PH(x, v) (HW_CMT_CGH1_WR(x, v))
/*@}*/

/*******************************************************************************
 * HW_CMT_CGL1 - CMT Carrier Generator Low Data Register 1
 ******************************************************************************/

/*!
 * @brief HW_CMT_CGL1 - CMT Carrier Generator Low Data Register 1 (RW)
 *
 * Reset value: 0x00U
 *
 * This data register contains the primary low value for generating the carrier
 * output.
 */
typedef union _hw_cmt_cgl1
{
    uint8_t U;
    struct _hw_cmt_cgl1_bitfields
    {
        uint8_t PL : 8;                /*!< [7:0] Primary Carrier Low Time Data Value */
    } B;
} hw_cmt_cgl1_t;

/*!
 * @name Constants and macros for entire CMT_CGL1 register
 */
/*@{*/
#define HW_CMT_CGL1_ADDR(x)      ((x) + 0x1U)

#define HW_CMT_CGL1(x)           (*(__IO hw_cmt_cgl1_t *) HW_CMT_CGL1_ADDR(x))
#define HW_CMT_CGL1_RD(x)        (HW_CMT_CGL1(x).U)
#define HW_CMT_CGL1_WR(x, v)     (HW_CMT_CGL1(x).U = (v))
#define HW_CMT_CGL1_SET(x, v)    (HW_CMT_CGL1_WR(x, HW_CMT_CGL1_RD(x) |  (v)))
#define HW_CMT_CGL1_CLR(x, v)    (HW_CMT_CGL1_WR(x, HW_CMT_CGL1_RD(x) & ~(v)))
#define HW_CMT_CGL1_TOG(x, v)    (HW_CMT_CGL1_WR(x, HW_CMT_CGL1_RD(x) ^  (v)))
/*@}*/

/*
 * Constants & macros for individual CMT_CGL1 bitfields
 */

/*!
 * @name Register CMT_CGL1, field PL[7:0] (RW)
 *
 * Contains the number of input clocks required to generate the carrier low time
 * period. When operating in Time mode, this register is always selected. When
 * operating in FSK mode, this register and the secondary register pair are
 * alternately selected under the control of the modulator. The primary carrier low
 * time value is undefined out of reset. This register must be written to nonzero
 * values before the carrier generator is enabled to avoid spurious results.
 */
/*@{*/
#define BP_CMT_CGL1_PL       (0U)          /*!< Bit position for CMT_CGL1_PL. */
#define BM_CMT_CGL1_PL       (0xFFU)       /*!< Bit mask for CMT_CGL1_PL. */
#define BS_CMT_CGL1_PL       (8U)          /*!< Bit field size in bits for CMT_CGL1_PL. */

/*! @brief Read current value of the CMT_CGL1_PL field. */
#define BR_CMT_CGL1_PL(x)    (HW_CMT_CGL1(x).U)

/*! @brief Format value for bitfield CMT_CGL1_PL. */
#define BF_CMT_CGL1_PL(v)    ((uint8_t)((uint8_t)(v) << BP_CMT_CGL1_PL) & BM_CMT_CGL1_PL)

/*! @brief Set the PL field to a new value. */
#define BW_CMT_CGL1_PL(x, v) (HW_CMT_CGL1_WR(x, v))
/*@}*/

/*******************************************************************************
 * HW_CMT_CGH2 - CMT Carrier Generator High Data Register 2
 ******************************************************************************/

/*!
 * @brief HW_CMT_CGH2 - CMT Carrier Generator High Data Register 2 (RW)
 *
 * Reset value: 0x00U
 *
 * This data register contains the secondary high value for generating the
 * carrier output.
 */
typedef union _hw_cmt_cgh2
{
    uint8_t U;
    struct _hw_cmt_cgh2_bitfields
    {
        uint8_t SH : 8;                /*!< [7:0] Secondary Carrier High Time Data Value */
    } B;
} hw_cmt_cgh2_t;

/*!
 * @name Constants and macros for entire CMT_CGH2 register
 */
/*@{*/
#define HW_CMT_CGH2_ADDR(x)      ((x) + 0x2U)

#define HW_CMT_CGH2(x)           (*(__IO hw_cmt_cgh2_t *) HW_CMT_CGH2_ADDR(x))
#define HW_CMT_CGH2_RD(x)        (HW_CMT_CGH2(x).U)
#define HW_CMT_CGH2_WR(x, v)     (HW_CMT_CGH2(x).U = (v))
#define HW_CMT_CGH2_SET(x, v)    (HW_CMT_CGH2_WR(x, HW_CMT_CGH2_RD(x) |  (v)))
#define HW_CMT_CGH2_CLR(x, v)    (HW_CMT_CGH2_WR(x, HW_CMT_CGH2_RD(x) & ~(v)))
#define HW_CMT_CGH2_TOG(x, v)    (HW_CMT_CGH2_WR(x, HW_CMT_CGH2_RD(x) ^  (v)))
/*@}*/

/*
 * Constants & macros for individual CMT_CGH2 bitfields
 */

/*!
 * @name Register CMT_CGH2, field SH[7:0] (RW)
 *
 * Contains the number of input clocks required to generate the carrier high
 * time period. When operating in Time mode, this register is never selected. When
 * operating in FSK mode, this register and the primary register pair are
 * alternately selected under control of the modulator. The secondary carrier high time
 * value is undefined out of reset. This register must be written to nonzero
 * values before the carrier generator is enabled when operating in FSK mode.
 */
/*@{*/
#define BP_CMT_CGH2_SH       (0U)          /*!< Bit position for CMT_CGH2_SH. */
#define BM_CMT_CGH2_SH       (0xFFU)       /*!< Bit mask for CMT_CGH2_SH. */
#define BS_CMT_CGH2_SH       (8U)          /*!< Bit field size in bits for CMT_CGH2_SH. */

/*! @brief Read current value of the CMT_CGH2_SH field. */
#define BR_CMT_CGH2_SH(x)    (HW_CMT_CGH2(x).U)

/*! @brief Format value for bitfield CMT_CGH2_SH. */
#define BF_CMT_CGH2_SH(v)    ((uint8_t)((uint8_t)(v) << BP_CMT_CGH2_SH) & BM_CMT_CGH2_SH)

/*! @brief Set the SH field to a new value. */
#define BW_CMT_CGH2_SH(x, v) (HW_CMT_CGH2_WR(x, v))
/*@}*/

/*******************************************************************************
 * HW_CMT_CGL2 - CMT Carrier Generator Low Data Register 2
 ******************************************************************************/

/*!
 * @brief HW_CMT_CGL2 - CMT Carrier Generator Low Data Register 2 (RW)
 *
 * Reset value: 0x00U
 *
 * This data register contains the secondary low value for generating the
 * carrier output.
 */
typedef union _hw_cmt_cgl2
{
    uint8_t U;
    struct _hw_cmt_cgl2_bitfields
    {
        uint8_t SL : 8;                /*!< [7:0] Secondary Carrier Low Time Data Value */
    } B;
} hw_cmt_cgl2_t;

/*!
 * @name Constants and macros for entire CMT_CGL2 register
 */
/*@{*/
#define HW_CMT_CGL2_ADDR(x)      ((x) + 0x3U)

#define HW_CMT_CGL2(x)           (*(__IO hw_cmt_cgl2_t *) HW_CMT_CGL2_ADDR(x))
#define HW_CMT_CGL2_RD(x)        (HW_CMT_CGL2(x).U)
#define HW_CMT_CGL2_WR(x, v)     (HW_CMT_CGL2(x).U = (v))
#define HW_CMT_CGL2_SET(x, v)    (HW_CMT_CGL2_WR(x, HW_CMT_CGL2_RD(x) |  (v)))
#define HW_CMT_CGL2_CLR(x, v)    (HW_CMT_CGL2_WR(x, HW_CMT_CGL2_RD(x) & ~(v)))
#define HW_CMT_CGL2_TOG(x, v)    (HW_CMT_CGL2_WR(x, HW_CMT_CGL2_RD(x) ^  (v)))
/*@}*/

/*
 * Constants & macros for individual CMT_CGL2 bitfields
 */

/*!
 * @name Register CMT_CGL2, field SL[7:0] (RW)
 *
 * Contains the number of input clocks required to generate the carrier low time
 * period. When operating in Time mode, this register is never selected. When
 * operating in FSK mode, this register and the primary register pair are
 * alternately selected under the control of the modulator. The secondary carrier low time
 * value is undefined out of reset. This register must be written to nonzero
 * values before the carrier generator is enabled when operating in FSK mode.
 */
/*@{*/
#define BP_CMT_CGL2_SL       (0U)          /*!< Bit position for CMT_CGL2_SL. */
#define BM_CMT_CGL2_SL       (0xFFU)       /*!< Bit mask for CMT_CGL2_SL. */
#define BS_CMT_CGL2_SL       (8U)          /*!< Bit field size in bits for CMT_CGL2_SL. */

/*! @brief Read current value of the CMT_CGL2_SL field. */
#define BR_CMT_CGL2_SL(x)    (HW_CMT_CGL2(x).U)

/*! @brief Format value for bitfield CMT_CGL2_SL. */
#define BF_CMT_CGL2_SL(v)    ((uint8_t)((uint8_t)(v) << BP_CMT_CGL2_SL) & BM_CMT_CGL2_SL)

/*! @brief Set the SL field to a new value. */
#define BW_CMT_CGL2_SL(x, v) (HW_CMT_CGL2_WR(x, v))
/*@}*/

/*******************************************************************************
 * HW_CMT_OC - CMT Output Control Register
 ******************************************************************************/

/*!
 * @brief HW_CMT_OC - CMT Output Control Register (RW)
 *
 * Reset value: 0x00U
 *
 * This register is used to control the IRO signal of the CMT module.
 */
typedef union _hw_cmt_oc
{
    uint8_t U;
    struct _hw_cmt_oc_bitfields
    {
        uint8_t RESERVED0 : 5;         /*!< [4:0]  */
        uint8_t IROPEN : 1;            /*!< [5] IRO Pin Enable */
        uint8_t CMTPOL : 1;            /*!< [6] CMT Output Polarity */
        uint8_t IROL : 1;              /*!< [7] IRO Latch Control */
    } B;
} hw_cmt_oc_t;

/*!
 * @name Constants and macros for entire CMT_OC register
 */
/*@{*/
#define HW_CMT_OC_ADDR(x)        ((x) + 0x4U)

#define HW_CMT_OC(x)             (*(__IO hw_cmt_oc_t *) HW_CMT_OC_ADDR(x))
#define HW_CMT_OC_RD(x)          (HW_CMT_OC(x).U)
#define HW_CMT_OC_WR(x, v)       (HW_CMT_OC(x).U = (v))
#define HW_CMT_OC_SET(x, v)      (HW_CMT_OC_WR(x, HW_CMT_OC_RD(x) |  (v)))
#define HW_CMT_OC_CLR(x, v)      (HW_CMT_OC_WR(x, HW_CMT_OC_RD(x) & ~(v)))
#define HW_CMT_OC_TOG(x, v)      (HW_CMT_OC_WR(x, HW_CMT_OC_RD(x) ^  (v)))
/*@}*/

/*
 * Constants & macros for individual CMT_OC bitfields
 */

/*!
 * @name Register CMT_OC, field IROPEN[5] (RW)
 *
 * Enables and disables the IRO signal. When the IRO signal is enabled, it is an
 * output that drives out either the CMT transmitter output or the state of IROL
 * depending on whether MSC[MCGEN] is set or not. Also, the state of output is
 * either inverted or non-inverted, depending on the state of CMTPOL. When the IRO
 * signal is disabled, it is in a high-impedance state and is unable to draw any
 * current. This signal is disabled during reset.
 *
 * Values:
 * - 0 - The IRO signal is disabled.
 * - 1 - The IRO signal is enabled as output.
 */
/*@{*/
#define BP_CMT_OC_IROPEN     (5U)          /*!< Bit position for CMT_OC_IROPEN. */
#define BM_CMT_OC_IROPEN     (0x20U)       /*!< Bit mask for CMT_OC_IROPEN. */
#define BS_CMT_OC_IROPEN     (1U)          /*!< Bit field size in bits for CMT_OC_IROPEN. */

/*! @brief Read current value of the CMT_OC_IROPEN field. */
#define BR_CMT_OC_IROPEN(x)  (BITBAND_ACCESS8(HW_CMT_OC_ADDR(x), BP_CMT_OC_IROPEN))

/*! @brief Format value for bitfield CMT_OC_IROPEN. */
#define BF_CMT_OC_IROPEN(v)  ((uint8_t)((uint8_t)(v) << BP_CMT_OC_IROPEN) & BM_CMT_OC_IROPEN)

/*! @brief Set the IROPEN field to a new value. */
#define BW_CMT_OC_IROPEN(x, v) (BITBAND_ACCESS8(HW_CMT_OC_ADDR(x), BP_CMT_OC_IROPEN) = (v))
/*@}*/

/*!
 * @name Register CMT_OC, field CMTPOL[6] (RW)
 *
 * Controls the polarity of the IRO signal.
 *
 * Values:
 * - 0 - The IRO signal is active-low.
 * - 1 - The IRO signal is active-high.
 */
/*@{*/
#define BP_CMT_OC_CMTPOL     (6U)          /*!< Bit position for CMT_OC_CMTPOL. */
#define BM_CMT_OC_CMTPOL     (0x40U)       /*!< Bit mask for CMT_OC_CMTPOL. */
#define BS_CMT_OC_CMTPOL     (1U)          /*!< Bit field size in bits for CMT_OC_CMTPOL. */

/*! @brief Read current value of the CMT_OC_CMTPOL field. */
#define BR_CMT_OC_CMTPOL(x)  (BITBAND_ACCESS8(HW_CMT_OC_ADDR(x), BP_CMT_OC_CMTPOL))

/*! @brief Format value for bitfield CMT_OC_CMTPOL. */
#define BF_CMT_OC_CMTPOL(v)  ((uint8_t)((uint8_t)(v) << BP_CMT_OC_CMTPOL) & BM_CMT_OC_CMTPOL)

/*! @brief Set the CMTPOL field to a new value. */
#define BW_CMT_OC_CMTPOL(x, v) (BITBAND_ACCESS8(HW_CMT_OC_ADDR(x), BP_CMT_OC_CMTPOL) = (v))
/*@}*/

/*!
 * @name Register CMT_OC, field IROL[7] (RW)
 *
 * Reads the state of the IRO latch. Writing to IROL changes the state of the
 * IRO signal when MSC[MCGEN] is cleared and IROPEN is set.
 */
/*@{*/
#define BP_CMT_OC_IROL       (7U)          /*!< Bit position for CMT_OC_IROL. */
#define BM_CMT_OC_IROL       (0x80U)       /*!< Bit mask for CMT_OC_IROL. */
#define BS_CMT_OC_IROL       (1U)          /*!< Bit field size in bits for CMT_OC_IROL. */

/*! @brief Read current value of the CMT_OC_IROL field. */
#define BR_CMT_OC_IROL(x)    (BITBAND_ACCESS8(HW_CMT_OC_ADDR(x), BP_CMT_OC_IROL))

/*! @brief Format value for bitfield CMT_OC_IROL. */
#define BF_CMT_OC_IROL(v)    ((uint8_t)((uint8_t)(v) << BP_CMT_OC_IROL) & BM_CMT_OC_IROL)

/*! @brief Set the IROL field to a new value. */
#define BW_CMT_OC_IROL(x, v) (BITBAND_ACCESS8(HW_CMT_OC_ADDR(x), BP_CMT_OC_IROL) = (v))
/*@}*/

/*******************************************************************************
 * HW_CMT_MSC - CMT Modulator Status and Control Register
 ******************************************************************************/

/*!
 * @brief HW_CMT_MSC - CMT Modulator Status and Control Register (RW)
 *
 * Reset value: 0x00U
 *
 * This register contains the modulator and carrier generator enable (MCGEN),
 * end of cycle interrupt enable (EOCIE), FSK mode select (FSK), baseband enable
 * (BASE), extended space (EXSPC), prescaler (CMTDIV) bits, and the end of cycle
 * (EOCF) status bit.
 */
typedef union _hw_cmt_msc
{
    uint8_t U;
    struct _hw_cmt_msc_bitfields
    {
        uint8_t MCGEN : 1;             /*!< [0] Modulator and Carrier Generator Enable */
        uint8_t EOCIE : 1;             /*!< [1] End of Cycle Interrupt Enable */
        uint8_t FSK : 1;               /*!< [2] FSK Mode Select */
        uint8_t BASE : 1;              /*!< [3] Baseband Enable */
        uint8_t EXSPC : 1;             /*!< [4] Extended Space Enable */
        uint8_t CMTDIV : 2;            /*!< [6:5] CMT Clock Divide Prescaler */
        uint8_t EOCF : 1;              /*!< [7] End Of Cycle Status Flag */
    } B;
} hw_cmt_msc_t;

/*!
 * @name Constants and macros for entire CMT_MSC register
 */
/*@{*/
#define HW_CMT_MSC_ADDR(x)       ((x) + 0x5U)

#define HW_CMT_MSC(x)            (*(__IO hw_cmt_msc_t *) HW_CMT_MSC_ADDR(x))
#define HW_CMT_MSC_RD(x)         (HW_CMT_MSC(x).U)
#define HW_CMT_MSC_WR(x, v)      (HW_CMT_MSC(x).U = (v))
#define HW_CMT_MSC_SET(x, v)     (HW_CMT_MSC_WR(x, HW_CMT_MSC_RD(x) |  (v)))
#define HW_CMT_MSC_CLR(x, v)     (HW_CMT_MSC_WR(x, HW_CMT_MSC_RD(x) & ~(v)))
#define HW_CMT_MSC_TOG(x, v)     (HW_CMT_MSC_WR(x, HW_CMT_MSC_RD(x) ^  (v)))
/*@}*/

/*
 * Constants & macros for individual CMT_MSC bitfields
 */

/*!
 * @name Register CMT_MSC, field MCGEN[0] (RW)
 *
 * Setting MCGEN will initialize the carrier generator and modulator and will
 * enable all clocks. When enabled, the carrier generator and modulator will
 * function continuously. When MCGEN is cleared, the current modulator cycle will be
 * allowed to expire before all carrier and modulator clocks are disabled to save
 * power and the modulator output is forced low. To prevent spurious operation,
 * the user should initialize all data and control registers before enabling the
 * system.
 *
 * Values:
 * - 0 - Modulator and carrier generator disabled
 * - 1 - Modulator and carrier generator enabled
 */
/*@{*/
#define BP_CMT_MSC_MCGEN     (0U)          /*!< Bit position for CMT_MSC_MCGEN. */
#define BM_CMT_MSC_MCGEN     (0x01U)       /*!< Bit mask for CMT_MSC_MCGEN. */
#define BS_CMT_MSC_MCGEN     (1U)          /*!< Bit field size in bits for CMT_MSC_MCGEN. */

/*! @brief Read current value of the CMT_MSC_MCGEN field. */
#define BR_CMT_MSC_MCGEN(x)  (BITBAND_ACCESS8(HW_CMT_MSC_ADDR(x), BP_CMT_MSC_MCGEN))

/*! @brief Format value for bitfield CMT_MSC_MCGEN. */
#define BF_CMT_MSC_MCGEN(v)  ((uint8_t)((uint8_t)(v) << BP_CMT_MSC_MCGEN) & BM_CMT_MSC_MCGEN)

/*! @brief Set the MCGEN field to a new value. */
#define BW_CMT_MSC_MCGEN(x, v) (BITBAND_ACCESS8(HW_CMT_MSC_ADDR(x), BP_CMT_MSC_MCGEN) = (v))
/*@}*/

/*!
 * @name Register CMT_MSC, field EOCIE[1] (RW)
 *
 * Requests to enable a CPU interrupt when EOCF is set if EOCIE is high.
 *
 * Values:
 * - 0 - CPU interrupt is disabled.
 * - 1 - CPU interrupt is enabled.
 */
/*@{*/
#define BP_CMT_MSC_EOCIE     (1U)          /*!< Bit position for CMT_MSC_EOCIE. */
#define BM_CMT_MSC_EOCIE     (0x02U)       /*!< Bit mask for CMT_MSC_EOCIE. */
#define BS_CMT_MSC_EOCIE     (1U)          /*!< Bit field size in bits for CMT_MSC_EOCIE. */

/*! @brief Read current value of the CMT_MSC_EOCIE field. */
#define BR_CMT_MSC_EOCIE(x)  (BITBAND_ACCESS8(HW_CMT_MSC_ADDR(x), BP_CMT_MSC_EOCIE))

/*! @brief Format value for bitfield CMT_MSC_EOCIE. */
#define BF_CMT_MSC_EOCIE(v)  ((uint8_t)((uint8_t)(v) << BP_CMT_MSC_EOCIE) & BM_CMT_MSC_EOCIE)

/*! @brief Set the EOCIE field to a new value. */
#define BW_CMT_MSC_EOCIE(x, v) (BITBAND_ACCESS8(HW_CMT_MSC_ADDR(x), BP_CMT_MSC_EOCIE) = (v))
/*@}*/

/*!
 * @name Register CMT_MSC, field FSK[2] (RW)
 *
 * Enables FSK operation.
 *
 * Values:
 * - 0 - The CMT operates in Time or Baseband mode.
 * - 1 - The CMT operates in FSK mode.
 */
/*@{*/
#define BP_CMT_MSC_FSK       (2U)          /*!< Bit position for CMT_MSC_FSK. */
#define BM_CMT_MSC_FSK       (0x04U)       /*!< Bit mask for CMT_MSC_FSK. */
#define BS_CMT_MSC_FSK       (1U)          /*!< Bit field size in bits for CMT_MSC_FSK. */

/*! @brief Read current value of the CMT_MSC_FSK field. */
#define BR_CMT_MSC_FSK(x)    (BITBAND_ACCESS8(HW_CMT_MSC_ADDR(x), BP_CMT_MSC_FSK))

/*! @brief Format value for bitfield CMT_MSC_FSK. */
#define BF_CMT_MSC_FSK(v)    ((uint8_t)((uint8_t)(v) << BP_CMT_MSC_FSK) & BM_CMT_MSC_FSK)

/*! @brief Set the FSK field to a new value. */
#define BW_CMT_MSC_FSK(x, v) (BITBAND_ACCESS8(HW_CMT_MSC_ADDR(x), BP_CMT_MSC_FSK) = (v))
/*@}*/

/*!
 * @name Register CMT_MSC, field BASE[3] (RW)
 *
 * When set, BASE disables the carrier generator and forces the carrier output
 * high for generation of baseband protocols. When BASE is cleared, the carrier
 * generator is enabled and the carrier output toggles at the frequency determined
 * by values stored in the carrier data registers. This field is cleared by
 * reset. This field is not double-buffered and must not be written to during a
 * transmission.
 *
 * Values:
 * - 0 - Baseband mode is disabled.
 * - 1 - Baseband mode is enabled.
 */
/*@{*/
#define BP_CMT_MSC_BASE      (3U)          /*!< Bit position for CMT_MSC_BASE. */
#define BM_CMT_MSC_BASE      (0x08U)       /*!< Bit mask for CMT_MSC_BASE. */
#define BS_CMT_MSC_BASE      (1U)          /*!< Bit field size in bits for CMT_MSC_BASE. */

/*! @brief Read current value of the CMT_MSC_BASE field. */
#define BR_CMT_MSC_BASE(x)   (BITBAND_ACCESS8(HW_CMT_MSC_ADDR(x), BP_CMT_MSC_BASE))

/*! @brief Format value for bitfield CMT_MSC_BASE. */
#define BF_CMT_MSC_BASE(v)   ((uint8_t)((uint8_t)(v) << BP_CMT_MSC_BASE) & BM_CMT_MSC_BASE)

/*! @brief Set the BASE field to a new value. */
#define BW_CMT_MSC_BASE(x, v) (BITBAND_ACCESS8(HW_CMT_MSC_ADDR(x), BP_CMT_MSC_BASE) = (v))
/*@}*/

/*!
 * @name Register CMT_MSC, field EXSPC[4] (RW)
 *
 * Enables the extended space operation.
 *
 * Values:
 * - 0 - Extended space is disabled.
 * - 1 - Extended space is enabled.
 */
/*@{*/
#define BP_CMT_MSC_EXSPC     (4U)          /*!< Bit position for CMT_MSC_EXSPC. */
#define BM_CMT_MSC_EXSPC     (0x10U)       /*!< Bit mask for CMT_MSC_EXSPC. */
#define BS_CMT_MSC_EXSPC     (1U)          /*!< Bit field size in bits for CMT_MSC_EXSPC. */

/*! @brief Read current value of the CMT_MSC_EXSPC field. */
#define BR_CMT_MSC_EXSPC(x)  (BITBAND_ACCESS8(HW_CMT_MSC_ADDR(x), BP_CMT_MSC_EXSPC))

/*! @brief Format value for bitfield CMT_MSC_EXSPC. */
#define BF_CMT_MSC_EXSPC(v)  ((uint8_t)((uint8_t)(v) << BP_CMT_MSC_EXSPC) & BM_CMT_MSC_EXSPC)

/*! @brief Set the EXSPC field to a new value. */
#define BW_CMT_MSC_EXSPC(x, v) (BITBAND_ACCESS8(HW_CMT_MSC_ADDR(x), BP_CMT_MSC_EXSPC) = (v))
/*@}*/

/*!
 * @name Register CMT_MSC, field CMTDIV[6:5] (RW)
 *
 * Causes the CMT to be clocked at the IF signal frequency, or the IF frequency
 * divided by 2 ,4, or 8 . This field must not be changed during a transmission
 * because it is not double-buffered.
 *
 * Values:
 * - 00 - IF * 1
 * - 01 - IF * 2
 * - 10 - IF * 4
 * - 11 - IF * 8
 */
/*@{*/
#define BP_CMT_MSC_CMTDIV    (5U)          /*!< Bit position for CMT_MSC_CMTDIV. */
#define BM_CMT_MSC_CMTDIV    (0x60U)       /*!< Bit mask for CMT_MSC_CMTDIV. */
#define BS_CMT_MSC_CMTDIV    (2U)          /*!< Bit field size in bits for CMT_MSC_CMTDIV. */

/*! @brief Read current value of the CMT_MSC_CMTDIV field. */
#define BR_CMT_MSC_CMTDIV(x) (HW_CMT_MSC(x).B.CMTDIV)

/*! @brief Format value for bitfield CMT_MSC_CMTDIV. */
#define BF_CMT_MSC_CMTDIV(v) ((uint8_t)((uint8_t)(v) << BP_CMT_MSC_CMTDIV) & BM_CMT_MSC_CMTDIV)

/*! @brief Set the CMTDIV field to a new value. */
#define BW_CMT_MSC_CMTDIV(x, v) (HW_CMT_MSC_WR(x, (HW_CMT_MSC_RD(x) & ~BM_CMT_MSC_CMTDIV) | BF_CMT_MSC_CMTDIV(v)))
/*@}*/

/*!
 * @name Register CMT_MSC, field EOCF[7] (RO)
 *
 * Sets when: The modulator is not currently active and MCGEN is set to begin
 * the initial CMT transmission. At the end of each modulation cycle while MCGEN is
 * set. This is recognized when a match occurs between the contents of the space
 * period register and the down counter. At this time, the counter is
 * initialized with, possibly new contents of the mark period buffer, CMD1 and CMD2, and
 * the space period register is loaded with, possibly new contents of the space
 * period buffer, CMD3 and CMD4. This flag is cleared by reading MSC followed by an
 * access of CMD2 or CMD4, or by the DMA transfer.
 *
 * Values:
 * - 0 - End of modulation cycle has not occured since the flag last cleared.
 * - 1 - End of modulator cycle has occurred.
 */
/*@{*/
#define BP_CMT_MSC_EOCF      (7U)          /*!< Bit position for CMT_MSC_EOCF. */
#define BM_CMT_MSC_EOCF      (0x80U)       /*!< Bit mask for CMT_MSC_EOCF. */
#define BS_CMT_MSC_EOCF      (1U)          /*!< Bit field size in bits for CMT_MSC_EOCF. */

/*! @brief Read current value of the CMT_MSC_EOCF field. */
#define BR_CMT_MSC_EOCF(x)   (BITBAND_ACCESS8(HW_CMT_MSC_ADDR(x), BP_CMT_MSC_EOCF))
/*@}*/

/*******************************************************************************
 * HW_CMT_CMD1 - CMT Modulator Data Register Mark High
 ******************************************************************************/

/*!
 * @brief HW_CMT_CMD1 - CMT Modulator Data Register Mark High (RW)
 *
 * Reset value: 0x00U
 *
 * The contents of this register are transferred to the modulator down counter
 * upon the completion of a modulation period.
 */
typedef union _hw_cmt_cmd1
{
    uint8_t U;
    struct _hw_cmt_cmd1_bitfields
    {
        uint8_t MB : 8;                /*!< [7:0]  */
    } B;
} hw_cmt_cmd1_t;

/*!
 * @name Constants and macros for entire CMT_CMD1 register
 */
/*@{*/
#define HW_CMT_CMD1_ADDR(x)      ((x) + 0x6U)

#define HW_CMT_CMD1(x)           (*(__IO hw_cmt_cmd1_t *) HW_CMT_CMD1_ADDR(x))
#define HW_CMT_CMD1_RD(x)        (HW_CMT_CMD1(x).U)
#define HW_CMT_CMD1_WR(x, v)     (HW_CMT_CMD1(x).U = (v))
#define HW_CMT_CMD1_SET(x, v)    (HW_CMT_CMD1_WR(x, HW_CMT_CMD1_RD(x) |  (v)))
#define HW_CMT_CMD1_CLR(x, v)    (HW_CMT_CMD1_WR(x, HW_CMT_CMD1_RD(x) & ~(v)))
#define HW_CMT_CMD1_TOG(x, v)    (HW_CMT_CMD1_WR(x, HW_CMT_CMD1_RD(x) ^  (v)))
/*@}*/

/*
 * Constants & macros for individual CMT_CMD1 bitfields
 */

/*!
 * @name Register CMT_CMD1, field MB[7:0] (RW)
 *
 * Controls the upper mark periods of the modulator for all modes.
 */
/*@{*/
#define BP_CMT_CMD1_MB       (0U)          /*!< Bit position for CMT_CMD1_MB. */
#define BM_CMT_CMD1_MB       (0xFFU)       /*!< Bit mask for CMT_CMD1_MB. */
#define BS_CMT_CMD1_MB       (8U)          /*!< Bit field size in bits for CMT_CMD1_MB. */

/*! @brief Read current value of the CMT_CMD1_MB field. */
#define BR_CMT_CMD1_MB(x)    (HW_CMT_CMD1(x).U)

/*! @brief Format value for bitfield CMT_CMD1_MB. */
#define BF_CMT_CMD1_MB(v)    ((uint8_t)((uint8_t)(v) << BP_CMT_CMD1_MB) & BM_CMT_CMD1_MB)

/*! @brief Set the MB field to a new value. */
#define BW_CMT_CMD1_MB(x, v) (HW_CMT_CMD1_WR(x, v))
/*@}*/

/*******************************************************************************
 * HW_CMT_CMD2 - CMT Modulator Data Register Mark Low
 ******************************************************************************/

/*!
 * @brief HW_CMT_CMD2 - CMT Modulator Data Register Mark Low (RW)
 *
 * Reset value: 0x00U
 *
 * The contents of this register are transferred to the modulator down counter
 * upon the completion of a modulation period.
 */
typedef union _hw_cmt_cmd2
{
    uint8_t U;
    struct _hw_cmt_cmd2_bitfields
    {
        uint8_t MB : 8;                /*!< [7:0]  */
    } B;
} hw_cmt_cmd2_t;

/*!
 * @name Constants and macros for entire CMT_CMD2 register
 */
/*@{*/
#define HW_CMT_CMD2_ADDR(x)      ((x) + 0x7U)

#define HW_CMT_CMD2(x)           (*(__IO hw_cmt_cmd2_t *) HW_CMT_CMD2_ADDR(x))
#define HW_CMT_CMD2_RD(x)        (HW_CMT_CMD2(x).U)
#define HW_CMT_CMD2_WR(x, v)     (HW_CMT_CMD2(x).U = (v))
#define HW_CMT_CMD2_SET(x, v)    (HW_CMT_CMD2_WR(x, HW_CMT_CMD2_RD(x) |  (v)))
#define HW_CMT_CMD2_CLR(x, v)    (HW_CMT_CMD2_WR(x, HW_CMT_CMD2_RD(x) & ~(v)))
#define HW_CMT_CMD2_TOG(x, v)    (HW_CMT_CMD2_WR(x, HW_CMT_CMD2_RD(x) ^  (v)))
/*@}*/

/*
 * Constants & macros for individual CMT_CMD2 bitfields
 */

/*!
 * @name Register CMT_CMD2, field MB[7:0] (RW)
 *
 * Controls the lower mark periods of the modulator for all modes.
 */
/*@{*/
#define BP_CMT_CMD2_MB       (0U)          /*!< Bit position for CMT_CMD2_MB. */
#define BM_CMT_CMD2_MB       (0xFFU)       /*!< Bit mask for CMT_CMD2_MB. */
#define BS_CMT_CMD2_MB       (8U)          /*!< Bit field size in bits for CMT_CMD2_MB. */

/*! @brief Read current value of the CMT_CMD2_MB field. */
#define BR_CMT_CMD2_MB(x)    (HW_CMT_CMD2(x).U)

/*! @brief Format value for bitfield CMT_CMD2_MB. */
#define BF_CMT_CMD2_MB(v)    ((uint8_t)((uint8_t)(v) << BP_CMT_CMD2_MB) & BM_CMT_CMD2_MB)

/*! @brief Set the MB field to a new value. */
#define BW_CMT_CMD2_MB(x, v) (HW_CMT_CMD2_WR(x, v))
/*@}*/

/*******************************************************************************
 * HW_CMT_CMD3 - CMT Modulator Data Register Space High
 ******************************************************************************/

/*!
 * @brief HW_CMT_CMD3 - CMT Modulator Data Register Space High (RW)
 *
 * Reset value: 0x00U
 *
 * The contents of this register are transferred to the space period register
 * upon the completion of a modulation period.
 */
typedef union _hw_cmt_cmd3
{
    uint8_t U;
    struct _hw_cmt_cmd3_bitfields
    {
        uint8_t SB : 8;                /*!< [7:0]  */
    } B;
} hw_cmt_cmd3_t;

/*!
 * @name Constants and macros for entire CMT_CMD3 register
 */
/*@{*/
#define HW_CMT_CMD3_ADDR(x)      ((x) + 0x8U)

#define HW_CMT_CMD3(x)           (*(__IO hw_cmt_cmd3_t *) HW_CMT_CMD3_ADDR(x))
#define HW_CMT_CMD3_RD(x)        (HW_CMT_CMD3(x).U)
#define HW_CMT_CMD3_WR(x, v)     (HW_CMT_CMD3(x).U = (v))
#define HW_CMT_CMD3_SET(x, v)    (HW_CMT_CMD3_WR(x, HW_CMT_CMD3_RD(x) |  (v)))
#define HW_CMT_CMD3_CLR(x, v)    (HW_CMT_CMD3_WR(x, HW_CMT_CMD3_RD(x) & ~(v)))
#define HW_CMT_CMD3_TOG(x, v)    (HW_CMT_CMD3_WR(x, HW_CMT_CMD3_RD(x) ^  (v)))
/*@}*/

/*
 * Constants & macros for individual CMT_CMD3 bitfields
 */

/*!
 * @name Register CMT_CMD3, field SB[7:0] (RW)
 *
 * Controls the upper space periods of the modulator for all modes.
 */
/*@{*/
#define BP_CMT_CMD3_SB       (0U)          /*!< Bit position for CMT_CMD3_SB. */
#define BM_CMT_CMD3_SB       (0xFFU)       /*!< Bit mask for CMT_CMD3_SB. */
#define BS_CMT_CMD3_SB       (8U)          /*!< Bit field size in bits for CMT_CMD3_SB. */

/*! @brief Read current value of the CMT_CMD3_SB field. */
#define BR_CMT_CMD3_SB(x)    (HW_CMT_CMD3(x).U)

/*! @brief Format value for bitfield CMT_CMD3_SB. */
#define BF_CMT_CMD3_SB(v)    ((uint8_t)((uint8_t)(v) << BP_CMT_CMD3_SB) & BM_CMT_CMD3_SB)

/*! @brief Set the SB field to a new value. */
#define BW_CMT_CMD3_SB(x, v) (HW_CMT_CMD3_WR(x, v))
/*@}*/

/*******************************************************************************
 * HW_CMT_CMD4 - CMT Modulator Data Register Space Low
 ******************************************************************************/

/*!
 * @brief HW_CMT_CMD4 - CMT Modulator Data Register Space Low (RW)
 *
 * Reset value: 0x00U
 *
 * The contents of this register are transferred to the space period register
 * upon the completion of a modulation period.
 */
typedef union _hw_cmt_cmd4
{
    uint8_t U;
    struct _hw_cmt_cmd4_bitfields
    {
        uint8_t SB : 8;                /*!< [7:0]  */
    } B;
} hw_cmt_cmd4_t;

/*!
 * @name Constants and macros for entire CMT_CMD4 register
 */
/*@{*/
#define HW_CMT_CMD4_ADDR(x)      ((x) + 0x9U)

#define HW_CMT_CMD4(x)           (*(__IO hw_cmt_cmd4_t *) HW_CMT_CMD4_ADDR(x))
#define HW_CMT_CMD4_RD(x)        (HW_CMT_CMD4(x).U)
#define HW_CMT_CMD4_WR(x, v)     (HW_CMT_CMD4(x).U = (v))
#define HW_CMT_CMD4_SET(x, v)    (HW_CMT_CMD4_WR(x, HW_CMT_CMD4_RD(x) |  (v)))
#define HW_CMT_CMD4_CLR(x, v)    (HW_CMT_CMD4_WR(x, HW_CMT_CMD4_RD(x) & ~(v)))
#define HW_CMT_CMD4_TOG(x, v)    (HW_CMT_CMD4_WR(x, HW_CMT_CMD4_RD(x) ^  (v)))
/*@}*/

/*
 * Constants & macros for individual CMT_CMD4 bitfields
 */

/*!
 * @name Register CMT_CMD4, field SB[7:0] (RW)
 *
 * Controls the lower space periods of the modulator for all modes.
 */
/*@{*/
#define BP_CMT_CMD4_SB       (0U)          /*!< Bit position for CMT_CMD4_SB. */
#define BM_CMT_CMD4_SB       (0xFFU)       /*!< Bit mask for CMT_CMD4_SB. */
#define BS_CMT_CMD4_SB       (8U)          /*!< Bit field size in bits for CMT_CMD4_SB. */

/*! @brief Read current value of the CMT_CMD4_SB field. */
#define BR_CMT_CMD4_SB(x)    (HW_CMT_CMD4(x).U)

/*! @brief Format value for bitfield CMT_CMD4_SB. */
#define BF_CMT_CMD4_SB(v)    ((uint8_t)((uint8_t)(v) << BP_CMT_CMD4_SB) & BM_CMT_CMD4_SB)

/*! @brief Set the SB field to a new value. */
#define BW_CMT_CMD4_SB(x, v) (HW_CMT_CMD4_WR(x, v))
/*@}*/

/*******************************************************************************
 * HW_CMT_PPS - CMT Primary Prescaler Register
 ******************************************************************************/

/*!
 * @brief HW_CMT_PPS - CMT Primary Prescaler Register (RW)
 *
 * Reset value: 0x00U
 *
 * This register is used to set the Primary Prescaler Divider field (PPSDIV).
 */
typedef union _hw_cmt_pps
{
    uint8_t U;
    struct _hw_cmt_pps_bitfields
    {
        uint8_t PPSDIV : 4;            /*!< [3:0] Primary Prescaler Divider */
        uint8_t RESERVED0 : 4;         /*!< [7:4]  */
    } B;
} hw_cmt_pps_t;

/*!
 * @name Constants and macros for entire CMT_PPS register
 */
/*@{*/
#define HW_CMT_PPS_ADDR(x)       ((x) + 0xAU)

#define HW_CMT_PPS(x)            (*(__IO hw_cmt_pps_t *) HW_CMT_PPS_ADDR(x))
#define HW_CMT_PPS_RD(x)         (HW_CMT_PPS(x).U)
#define HW_CMT_PPS_WR(x, v)      (HW_CMT_PPS(x).U = (v))
#define HW_CMT_PPS_SET(x, v)     (HW_CMT_PPS_WR(x, HW_CMT_PPS_RD(x) |  (v)))
#define HW_CMT_PPS_CLR(x, v)     (HW_CMT_PPS_WR(x, HW_CMT_PPS_RD(x) & ~(v)))
#define HW_CMT_PPS_TOG(x, v)     (HW_CMT_PPS_WR(x, HW_CMT_PPS_RD(x) ^  (v)))
/*@}*/

/*
 * Constants & macros for individual CMT_PPS bitfields
 */

/*!
 * @name Register CMT_PPS, field PPSDIV[3:0] (RW)
 *
 * Divides the CMT clock to generate the Intermediate Frequency clock enable to
 * the secondary prescaler.
 *
 * Values:
 * - 0000 - Bus clock * 1
 * - 0001 - Bus clock * 2
 * - 0010 - Bus clock * 3
 * - 0011 - Bus clock * 4
 * - 0100 - Bus clock * 5
 * - 0101 - Bus clock * 6
 * - 0110 - Bus clock * 7
 * - 0111 - Bus clock * 8
 * - 1000 - Bus clock * 9
 * - 1001 - Bus clock * 10
 * - 1010 - Bus clock * 11
 * - 1011 - Bus clock * 12
 * - 1100 - Bus clock * 13
 * - 1101 - Bus clock * 14
 * - 1110 - Bus clock * 15
 * - 1111 - Bus clock * 16
 */
/*@{*/
#define BP_CMT_PPS_PPSDIV    (0U)          /*!< Bit position for CMT_PPS_PPSDIV. */
#define BM_CMT_PPS_PPSDIV    (0x0FU)       /*!< Bit mask for CMT_PPS_PPSDIV. */
#define BS_CMT_PPS_PPSDIV    (4U)          /*!< Bit field size in bits for CMT_PPS_PPSDIV. */

/*! @brief Read current value of the CMT_PPS_PPSDIV field. */
#define BR_CMT_PPS_PPSDIV(x) (HW_CMT_PPS(x).B.PPSDIV)

/*! @brief Format value for bitfield CMT_PPS_PPSDIV. */
#define BF_CMT_PPS_PPSDIV(v) ((uint8_t)((uint8_t)(v) << BP_CMT_PPS_PPSDIV) & BM_CMT_PPS_PPSDIV)

/*! @brief Set the PPSDIV field to a new value. */
#define BW_CMT_PPS_PPSDIV(x, v) (HW_CMT_PPS_WR(x, (HW_CMT_PPS_RD(x) & ~BM_CMT_PPS_PPSDIV) | BF_CMT_PPS_PPSDIV(v)))
/*@}*/

/*******************************************************************************
 * HW_CMT_DMA - CMT Direct Memory Access Register
 ******************************************************************************/

/*!
 * @brief HW_CMT_DMA - CMT Direct Memory Access Register (RW)
 *
 * Reset value: 0x00U
 *
 * This register is used to enable/disable direct memory access (DMA).
 */
typedef union _hw_cmt_dma
{
    uint8_t U;
    struct _hw_cmt_dma_bitfields
    {
        uint8_t DMA : 1;               /*!< [0] DMA Enable */
        uint8_t RESERVED0 : 7;         /*!< [7:1]  */
    } B;
} hw_cmt_dma_t;

/*!
 * @name Constants and macros for entire CMT_DMA register
 */
/*@{*/
#define HW_CMT_DMA_ADDR(x)       ((x) + 0xBU)

#define HW_CMT_DMA(x)            (*(__IO hw_cmt_dma_t *) HW_CMT_DMA_ADDR(x))
#define HW_CMT_DMA_RD(x)         (HW_CMT_DMA(x).U)
#define HW_CMT_DMA_WR(x, v)      (HW_CMT_DMA(x).U = (v))
#define HW_CMT_DMA_SET(x, v)     (HW_CMT_DMA_WR(x, HW_CMT_DMA_RD(x) |  (v)))
#define HW_CMT_DMA_CLR(x, v)     (HW_CMT_DMA_WR(x, HW_CMT_DMA_RD(x) & ~(v)))
#define HW_CMT_DMA_TOG(x, v)     (HW_CMT_DMA_WR(x, HW_CMT_DMA_RD(x) ^  (v)))
/*@}*/

/*
 * Constants & macros for individual CMT_DMA bitfields
 */

/*!
 * @name Register CMT_DMA, field DMA[0] (RW)
 *
 * Enables the DMA protocol.
 *
 * Values:
 * - 0 - DMA transfer request and done are disabled.
 * - 1 - DMA transfer request and done are enabled.
 */
/*@{*/
#define BP_CMT_DMA_DMA       (0U)          /*!< Bit position for CMT_DMA_DMA. */
#define BM_CMT_DMA_DMA       (0x01U)       /*!< Bit mask for CMT_DMA_DMA. */
#define BS_CMT_DMA_DMA       (1U)          /*!< Bit field size in bits for CMT_DMA_DMA. */

/*! @brief Read current value of the CMT_DMA_DMA field. */
#define BR_CMT_DMA_DMA(x)    (BITBAND_ACCESS8(HW_CMT_DMA_ADDR(x), BP_CMT_DMA_DMA))

/*! @brief Format value for bitfield CMT_DMA_DMA. */
#define BF_CMT_DMA_DMA(v)    ((uint8_t)((uint8_t)(v) << BP_CMT_DMA_DMA) & BM_CMT_DMA_DMA)

/*! @brief Set the DMA field to a new value. */
#define BW_CMT_DMA_DMA(x, v) (BITBAND_ACCESS8(HW_CMT_DMA_ADDR(x), BP_CMT_DMA_DMA) = (v))
/*@}*/

/*******************************************************************************
 * hw_cmt_t - module struct
 ******************************************************************************/
/*!
 * @brief All CMT module registers.
 */
#pragma pack(1)
typedef struct _hw_cmt
{
    __IO hw_cmt_cgh1_t CGH1;               /*!< [0x0] CMT Carrier Generator High Data Register 1 */
    __IO hw_cmt_cgl1_t CGL1;               /*!< [0x1] CMT Carrier Generator Low Data Register 1 */
    __IO hw_cmt_cgh2_t CGH2;               /*!< [0x2] CMT Carrier Generator High Data Register 2 */
    __IO hw_cmt_cgl2_t CGL2;               /*!< [0x3] CMT Carrier Generator Low Data Register 2 */
    __IO hw_cmt_oc_t OC;                   /*!< [0x4] CMT Output Control Register */
    __IO hw_cmt_msc_t MSC;                 /*!< [0x5] CMT Modulator Status and Control Register */
    __IO hw_cmt_cmd1_t CMD1;               /*!< [0x6] CMT Modulator Data Register Mark High */
    __IO hw_cmt_cmd2_t CMD2;               /*!< [0x7] CMT Modulator Data Register Mark Low */
    __IO hw_cmt_cmd3_t CMD3;               /*!< [0x8] CMT Modulator Data Register Space High */
    __IO hw_cmt_cmd4_t CMD4;               /*!< [0x9] CMT Modulator Data Register Space Low */
    __IO hw_cmt_pps_t PPS;                 /*!< [0xA] CMT Primary Prescaler Register */
    __IO hw_cmt_dma_t DMA;                 /*!< [0xB] CMT Direct Memory Access Register */
} hw_cmt_t;
#pragma pack()

/*! @brief Macro to access all CMT registers. */
/*! @param x CMT module instance base address. */
/*! @return Reference (not a pointer) to the registers struct. To get a pointer to the struct,
 *     use the '&' operator, like <code>&HW_CMT(CMT_BASE)</code>. */
#define HW_CMT(x)      (*(hw_cmt_t *)(x))

#endif /* __HW_CMT_REGISTERS_H__ */
/* v33/140401/2.1.0 */
/* EOF */
