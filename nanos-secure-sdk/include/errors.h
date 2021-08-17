
/*******************************************************************************
*   Ledger Nano S - Secure firmware
*   (c) 2021 Ledger
*
*  Licensed under the Apache License, Version 2.0 (the "License");
*  you may not use this file except in compliance with the License.
*  You may obtain a copy of the License at
*
*      http://www.apache.org/licenses/LICENSE-2.0
*
*  Unless required by applicable law or agreed to in writing, software
*  distributed under the License is distributed on an "AS IS" BASIS,
*  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*  See the License for the specific language governing permissions and
*  limitations under the License.
********************************************************************************/

#if !defined(ERRORS_H)
#define ERRORS_H

/**
 * The OS error codes are encoded on two bytes (0xabcd), with the following
 * structure:
 * 'a': The error code category,
 * 'b': The error code subcategory,
 * 'cd': The error code identifier (depends on the two previous fields).
 * The 'B000' - 'EFFF' range is reserved for applications, if they want to
 * have the same uniqueness mechanism in their error codes.
 */

/**
 * OS-reserved error codes ranges.
 * Applications should avoid using them for their own implementations,
 * except for the SWO_SUCCESS value.
 */
#define ERR_IOL_RANGE 0x1000
#define ERR_TSK_RANGE 0x2000
#define ERR_CRY_RANGE 0x3000
#define ERR_PAR_RANGE 0x4000
#define ERR_SEC_RANGE 0x5000
#define ERR_APD_RANGE 0x6000
#define ERR_MUI_RANGE 0xA000

/**
 * Applications-reserved error codes ranges.
 * The Operating System do not use any error code within these ranges.
 */
#define ERR_APP_RANGE_01 0xB000
#define ERR_APP_RANGE_02 0xC000
#define ERR_APP_RANGE_03 0xD000
#define ERR_APP_RANGE_04 0xE000

// Generic subcategories.
#define ERR_GEN_SUB_01 0x0100
#define ERR_GEN_SUB_02 0x0200
#define ERR_GEN_SUB_03 0x0300
#define ERR_GEN_SUB_04 0x0400
#define ERR_GEN_SUB_05 0x0500
#define ERR_GEN_SUB_06 0x0600
#define ERR_GEN_SUB_07 0x0700
#define ERR_GEN_SUB_08 0x0800
#define ERR_GEN_SUB_09 0x0900
#define ERR_GEN_SUB_0D 0x0D00
#define ERR_GEN_SUB_0E 0x0E00

// Generic identifiers.
enum generic_identifiers {
  ERR_GEN_ID_01 = 0x01,
  ERR_GEN_ID_02,
  ERR_GEN_ID_03,
  ERR_GEN_ID_04,
  ERR_GEN_ID_05,
  ERR_GEN_ID_06,
  ERR_GEN_ID_07,
  ERR_GEN_ID_08,
  ERR_GEN_ID_09,
  ERR_GEN_ID_0A,
  ERR_GEN_ID_0B,
  ERR_GEN_ID_0C,
  ERR_GEN_ID_0D,
  ERR_GEN_ID_0E,
  ERR_GEN_ID_0F,
  ERR_GEN_ID_10,
  ERR_GEN_ID_11,
  ERR_GEN_ID_12,
  ERR_GEN_ID_13,
  ERR_GEN_ID_14,
  ERR_GEN_ID_15,
  ERR_GEN_ID_16,
  ERR_GEN_ID_17,
  ERR_GEN_ID_18,
  ERR_GEN_ID_19,
  ERR_GEN_ID_1A,
  ERR_GEN_ID_1B,
  ERR_GEN_ID_1C,
  ERR_GEN_ID_1D,
  ERR_GEN_ID_1E,
  ERR_GEN_ID_1F,
  ERR_GEN_ID_20,
  ERR_GEN_ID_21,
  ERR_GEN_ID_22,
  ERR_GEN_ID_23,
  ERR_GEN_ID_24,
  ERR_GEN_ID_25,
  ERR_GEN_ID_26,
  ERR_GEN_ID_27,
  ERR_GEN_ID_28,
  ERR_GEN_ID_29,
  ERR_GEN_ID_2A,
  ERR_GEN_ID_2B
};

/**
 * I/O-related issues are categorized into:
 * Overflow issues (OFW),
 * Header issues (HDR),
 * State issues (STA),
 * Reset issues (RST),
 * BLE issues (BLE).
 */
#define ERR_IOL_OFW (ERR_IOL_RANGE + ERR_GEN_SUB_01)
#define ERR_IOL_HDR (ERR_IOL_RANGE + ERR_GEN_SUB_02)
#define ERR_IOL_STA (ERR_IOL_RANGE + ERR_GEN_SUB_03)
#define ERR_IOL_RST (ERR_IOL_RANGE + ERR_GEN_SUB_04)

#if defined(HAVE_BLE)
#define ERR_IOL_BLE (ERR_IOL_RANGE + ERR_GEN_SUB_05)
#endif // HAVE_BLE

#define SWO_IOL_OFW_01 (ERR_IOL_OFW + ERR_GEN_ID_01)
#define SWO_IOL_OFW_02 (ERR_IOL_OFW + ERR_GEN_ID_02)
#define SWO_IOL_OFW_03 (ERR_IOL_OFW + ERR_GEN_ID_03)
#define SWO_IOL_OFW_04 (ERR_IOL_OFW + ERR_GEN_ID_04)
#define SWO_IOL_OFW_05 (ERR_IOL_OFW + ERR_GEN_ID_05)

#define SWO_IOL_HDR_01 (ERR_IOL_HDR + ERR_GEN_ID_01)
#define SWO_IOL_HDR_02 (ERR_IOL_HDR + ERR_GEN_ID_02)
#define SWO_IOL_HDR_03 (ERR_IOL_HDR + ERR_GEN_ID_03)
#define SWO_IOL_HDR_04 (ERR_IOL_HDR + ERR_GEN_ID_04)
#define SWO_IOL_HDR_05 (ERR_IOL_HDR + ERR_GEN_ID_05)
#define SWO_IOL_HDR_06 (ERR_IOL_HDR + ERR_GEN_ID_06)
#define SWO_IOL_HDR_07 (ERR_IOL_HDR + ERR_GEN_ID_07)
#define SWO_IOL_HDR_08 (ERR_IOL_HDR + ERR_GEN_ID_08)

#define SWO_IOL_STA_01 (ERR_IOL_STA + ERR_GEN_ID_01)
#define SWO_IOL_STA_02 (ERR_IOL_STA + ERR_GEN_ID_02)
#define SWO_IOL_STA_03 (ERR_IOL_STA + ERR_GEN_ID_03)
#define SWO_IOL_STA_04 (ERR_IOL_STA + ERR_GEN_ID_04)

#define SWO_IOL_RST_01 (ERR_IOL_RST + ERR_GEN_ID_01)
#define SWO_IOL_RST_02 (ERR_IOL_RST + ERR_GEN_ID_02)
#define SWO_IOL_RST_03 (ERR_IOL_RST + ERR_GEN_ID_03)
#define SWO_IOL_RST_05 (ERR_IOL_RST + ERR_GEN_ID_05) // Do not move this value.

#if defined(HAVE_BLE)
#define SWO_IOL_BLE_01 (ERR_IOL_BLE + ERR_GEN_ID_01)
#define SWO_IOL_BLE_02 (ERR_IOL_BLE + ERR_GEN_ID_02)
#define SWO_IOL_BLE_03 (ERR_IOL_BLE + ERR_GEN_ID_03)
#define SWO_IOL_BLE_04 (ERR_IOL_BLE + ERR_GEN_ID_04)
#define SWO_IOL_BLE_05 (ERR_IOL_BLE + ERR_GEN_ID_05)
#define SWO_IOL_BLE_06 (ERR_IOL_BLE + ERR_GEN_ID_06)
#define SWO_IOL_BLE_07 (ERR_IOL_BLE + ERR_GEN_ID_07)
#define SWO_IOL_BLE_08 (ERR_IOL_BLE + ERR_GEN_ID_08)
#define SWO_IOL_BLE_09 (ERR_IOL_BLE + ERR_GEN_ID_09)
#define SWO_IOL_BLE_0A (ERR_IOL_BLE + ERR_GEN_ID_0A)
#define SWO_IOL_BLE_0B (ERR_IOL_BLE + ERR_GEN_ID_0B)
#define SWO_IOL_BLE_0C (ERR_IOL_BLE + ERR_GEN_ID_0C)
#endif // HAVE_BLE

/**
 * Tasks-related issues are categorized into:
 * Stack issues (STC),
 * Task Owner issues (OWN),
 * Overflow issues (OFW).
 */
#define ERR_TSK_STC (ERR_TSK_RANGE + ERR_GEN_SUB_01)
#define ERR_TSK_OWN (ERR_TSK_RANGE + ERR_GEN_SUB_02)
#define ERR_TSK_OFW (ERR_TSK_RANGE + ERR_GEN_SUB_03)

#define SWO_TSK_STC_01 (ERR_TSK_STC + ERR_GEN_ID_01)
#define SWO_TSK_STC_02 (ERR_TSK_STC + ERR_GEN_ID_02)
#define SWO_TSK_STC_03 (ERR_TSK_STC + ERR_GEN_ID_03)
#define SWO_TSK_STC_04 (ERR_TSK_STC + ERR_GEN_ID_04)
#define SWO_TSK_STC_05 (ERR_TSK_STC + ERR_GEN_ID_05)
#define SWO_TSK_STC_06 (ERR_TSK_STC + ERR_GEN_ID_06)
#define SWO_TSK_STC_07 (ERR_TSK_STC + ERR_GEN_ID_07)
#define SWO_TSK_STC_08 (ERR_TSK_STC + ERR_GEN_ID_08)

#define SWO_TSK_OWN_01 (ERR_TSK_OWN + ERR_GEN_ID_01)
#define SWO_TSK_OWN_02 (ERR_TSK_OWN + ERR_GEN_ID_02)
#define SWO_TSK_OWN_03 (ERR_TSK_OWN + ERR_GEN_ID_03)
#define SWO_TSK_OWN_04 (ERR_TSK_OWN + ERR_GEN_ID_04)

#define SWO_TSK_OFW_01 (ERR_TSK_OFW + ERR_GEN_ID_01)
#define SWO_TSK_OFW_02 (ERR_TSK_OFW + ERR_GEN_ID_02)

/**
 * Cryptography parameter-related issues are categorized into:
 * Lengths mismatch in functions (LEN),
 * Values mismatch in functions (VAL).
 */
#define ERR_CRY_LEN (ERR_CRY_RANGE + ERR_GEN_SUB_01)
#define ERR_CRY_VAL (ERR_CRY_RANGE + ERR_GEN_SUB_02)

// Not used yet.
#define SWO_CRY_LEN_01 (ERR_CRY_LEN + ERR_GEN_ID_01)
#define SWO_CRY_VAL_01 (ERR_CRY_VAL + ERR_GEN_ID_01)

/**
 * OS (except cryptography) parameter-related issues are categorized into:
 * Lengths mismatch in functions (LEN),
 * Values mismatch in functions (VAL).
 */
#define ERR_PAR_LEN (ERR_PAR_RANGE + ERR_GEN_SUB_01)
#define ERR_PAR_VAL (ERR_PAR_RANGE + ERR_GEN_SUB_02)

#define SWO_PAR_LEN_01 (ERR_PAR_LEN + ERR_GEN_ID_01)
#define SWO_PAR_LEN_02 (ERR_PAR_LEN + ERR_GEN_ID_02)
#define SWO_PAR_LEN_03 (ERR_PAR_LEN + ERR_GEN_ID_03)
#define SWO_PAR_LEN_04 (ERR_PAR_LEN + ERR_GEN_ID_04)
#define SWO_PAR_LEN_05 (ERR_PAR_LEN + ERR_GEN_ID_05)
#define SWO_PAR_LEN_06 (ERR_PAR_LEN + ERR_GEN_ID_06)
#define SWO_PAR_LEN_07 (ERR_PAR_LEN + ERR_GEN_ID_07)
#define SWO_PAR_LEN_08 (ERR_PAR_LEN + ERR_GEN_ID_08)
#define SWO_PAR_LEN_09 (ERR_PAR_LEN + ERR_GEN_ID_09)
#define SWO_PAR_LEN_0A (ERR_PAR_LEN + ERR_GEN_ID_0A)
#define SWO_PAR_LEN_0B (ERR_PAR_LEN + ERR_GEN_ID_0B)
#define SWO_PAR_LEN_0C (ERR_PAR_LEN + ERR_GEN_ID_0C)
#define SWO_PAR_LEN_0D (ERR_PAR_LEN + ERR_GEN_ID_0D)
#define SWO_PAR_LEN_0E (ERR_PAR_LEN + ERR_GEN_ID_0E)
#define SWO_PAR_LEN_0F (ERR_PAR_LEN + ERR_GEN_ID_0F)
#define SWO_PAR_LEN_10 (ERR_PAR_LEN + ERR_GEN_ID_10)
#define SWO_PAR_LEN_11 (ERR_PAR_LEN + ERR_GEN_ID_11)
#define SWO_PAR_LEN_12 (ERR_PAR_LEN + ERR_GEN_ID_12)
#define SWO_PAR_LEN_13 (ERR_PAR_LEN + ERR_GEN_ID_13)
#define SWO_PAR_LEN_14 (ERR_PAR_LEN + ERR_GEN_ID_14)
#define SWO_PAR_LEN_15 (ERR_PAR_LEN + ERR_GEN_ID_15)
#define SWO_PAR_LEN_16 (ERR_PAR_LEN + ERR_GEN_ID_16)

#define SWO_PAR_VAL_01 (ERR_PAR_VAL + ERR_GEN_ID_01)
#define SWO_PAR_VAL_02 (ERR_PAR_VAL + ERR_GEN_ID_02)
#define SWO_PAR_VAL_03 (ERR_PAR_VAL + ERR_GEN_ID_03)
#define SWO_PAR_VAL_04 (ERR_PAR_VAL + ERR_GEN_ID_04)
#define SWO_PAR_VAL_05 (ERR_PAR_VAL + ERR_GEN_ID_05)
#define SWO_PAR_VAL_06 (ERR_PAR_VAL + ERR_GEN_ID_06)
#define SWO_PAR_VAL_07 (ERR_PAR_VAL + ERR_GEN_ID_07)
#define SWO_PAR_VAL_08 (ERR_PAR_VAL + ERR_GEN_ID_08)
#define SWO_PAR_VAL_09 (ERR_PAR_VAL + ERR_GEN_ID_09)
#define SWO_PAR_VAL_0A (ERR_PAR_VAL + ERR_GEN_ID_0A)
#define SWO_PAR_VAL_0B (ERR_PAR_VAL + ERR_GEN_ID_0B)
#define SWO_PAR_VAL_0C (ERR_PAR_VAL + ERR_GEN_ID_0C)
#define SWO_PAR_VAL_0D (ERR_PAR_VAL + ERR_GEN_ID_0D)
#define SWO_PAR_VAL_0E (ERR_PAR_VAL + ERR_GEN_ID_0E)
#define SWO_PAR_VAL_0F (ERR_PAR_VAL + ERR_GEN_ID_0F)
#define SWO_PAR_VAL_10 (ERR_PAR_VAL + ERR_GEN_ID_10)
#define SWO_PAR_VAL_11 (ERR_PAR_VAL + ERR_GEN_ID_11)
#define SWO_PAR_VAL_12 (ERR_PAR_VAL + ERR_GEN_ID_12)
#define SWO_PAR_VAL_13 (ERR_PAR_VAL + ERR_GEN_ID_13)
#define SWO_PAR_VAL_14 (ERR_PAR_VAL + ERR_GEN_ID_14)
#define SWO_PAR_VAL_15 (ERR_PAR_VAL + ERR_GEN_ID_15)
#define SWO_PAR_VAL_16 (ERR_PAR_VAL + ERR_GEN_ID_16)
#define SWO_PAR_VAL_17 (ERR_PAR_VAL + ERR_GEN_ID_17)
#define SWO_PAR_VAL_18 (ERR_PAR_VAL + ERR_GEN_ID_18)
#define SWO_PAR_VAL_19 (ERR_PAR_VAL + ERR_GEN_ID_19)
#define SWO_PAR_VAL_1A (ERR_PAR_VAL + ERR_GEN_ID_1A)
#define SWO_PAR_VAL_1B (ERR_PAR_VAL + ERR_GEN_ID_1B)
#define SWO_PAR_VAL_1C (ERR_PAR_VAL + ERR_GEN_ID_1C)
#define SWO_PAR_VAL_1D (ERR_PAR_VAL + ERR_GEN_ID_1D)
#define SWO_PAR_VAL_1E (ERR_PAR_VAL + ERR_GEN_ID_1E)
#define SWO_PAR_VAL_1F (ERR_PAR_VAL + ERR_GEN_ID_1F)
#define SWO_PAR_VAL_20 (ERR_PAR_VAL + ERR_GEN_ID_20)
#define SWO_PAR_VAL_21 (ERR_PAR_VAL + ERR_GEN_ID_21)
#define SWO_PAR_VAL_22 (ERR_PAR_VAL + ERR_GEN_ID_22)
#define SWO_PAR_VAL_23 (ERR_PAR_VAL + ERR_GEN_ID_23)
#define SWO_PAR_VAL_24 (ERR_PAR_VAL + ERR_GEN_ID_24)
#define SWO_PAR_VAL_25 (ERR_PAR_VAL + ERR_GEN_ID_25)
#define SWO_PAR_VAL_26 (ERR_PAR_VAL + ERR_GEN_ID_26)

/**
 * Security-related issues are categorized into:
 * Application registry-related issues (APP),
 * CRC checks issues (CRC),
 * Miscellaneous security checks (CHK),
 * Key-related operations (KEY),
 * User consent-related operations (PIN),
 * SCP-related operations (SCP),
 * Signature-related operations (SIG),
 * Memory Management operation (MEM),
 * Device state issues (STA).
 */
#define ERR_SEC_APP (ERR_SEC_RANGE + ERR_GEN_SUB_01)
#define ERR_SEC_CRC (ERR_SEC_RANGE + ERR_GEN_SUB_02)
#define ERR_SEC_CHK (ERR_SEC_RANGE + ERR_GEN_SUB_03)
#define ERR_SEC_KEY (ERR_SEC_RANGE + ERR_GEN_SUB_04)
#define ERR_SEC_PIN (ERR_SEC_RANGE + ERR_GEN_SUB_05)
#define ERR_SEC_SCP (ERR_SEC_RANGE + ERR_GEN_SUB_06)
#define ERR_SEC_SIG (ERR_SEC_RANGE + ERR_GEN_SUB_07)
#define ERR_SEC_MEM (ERR_SEC_RANGE + ERR_GEN_SUB_08)
#define ERR_SEC_STA (ERR_SEC_RANGE + ERR_GEN_SUB_09)

#define SWO_SEC_APP_01 (ERR_SEC_APP + ERR_GEN_ID_01)
#define SWO_SEC_APP_02 (ERR_SEC_APP + ERR_GEN_ID_02)
#define SWO_SEC_APP_03 (ERR_SEC_APP + ERR_GEN_ID_03)
#define SWO_SEC_APP_04 (ERR_SEC_APP + ERR_GEN_ID_04)
#define SWO_SEC_APP_05 (ERR_SEC_APP + ERR_GEN_ID_05)
#define SWO_SEC_APP_06 (ERR_SEC_APP + ERR_GEN_ID_06)
#define SWO_SEC_APP_07 (ERR_SEC_APP + ERR_GEN_ID_07)
#define SWO_SEC_APP_08 (ERR_SEC_APP + ERR_GEN_ID_08)
#define SWO_SEC_APP_09 (ERR_SEC_APP + ERR_GEN_ID_09)
#define SWO_SEC_APP_0A (ERR_SEC_APP + ERR_GEN_ID_0A)
#define SWO_SEC_APP_0B (ERR_SEC_APP + ERR_GEN_ID_0B)
#define SWO_SEC_APP_0C (ERR_SEC_APP + ERR_GEN_ID_0C)
#define SWO_SEC_APP_0D (ERR_SEC_APP + ERR_GEN_ID_0D)
#define SWO_SEC_APP_0E (ERR_SEC_APP + ERR_GEN_ID_0E)
#define SWO_SEC_APP_0F (ERR_SEC_APP + ERR_GEN_ID_0F)
#define SWO_SEC_APP_10 (ERR_SEC_APP + ERR_GEN_ID_10)
#define SWO_SEC_APP_11 (ERR_SEC_APP + ERR_GEN_ID_11)
#define SWO_SEC_APP_12 (ERR_SEC_APP + ERR_GEN_ID_12)
#define SWO_SEC_APP_13 (ERR_SEC_APP + ERR_GEN_ID_13)
#define SWO_SEC_APP_14 (ERR_SEC_APP + ERR_GEN_ID_14)
#define SWO_SEC_APP_15 (ERR_SEC_APP + ERR_GEN_ID_15)
#define SWO_SEC_APP_16 (ERR_SEC_APP + ERR_GEN_ID_16)
#define SWO_SEC_APP_17 (ERR_SEC_APP + ERR_GEN_ID_17)
#define SWO_SEC_APP_18 (ERR_SEC_APP + ERR_GEN_ID_18)
#define SWO_SEC_APP_19 (ERR_SEC_APP + ERR_GEN_ID_19)
#define SWO_SEC_APP_1A (ERR_SEC_APP + ERR_GEN_ID_1A)
#define SWO_SEC_APP_1B (ERR_SEC_APP + ERR_GEN_ID_1B)

#define SWO_SEC_CRC_01 (ERR_SEC_CRC + ERR_GEN_ID_01)
#define SWO_SEC_CRC_02 (ERR_SEC_CRC + ERR_GEN_ID_02)
#define SWO_SEC_CRC_03 (ERR_SEC_CRC + ERR_GEN_ID_03)
#define SWO_SEC_CRC_04 (ERR_SEC_CRC + ERR_GEN_ID_04)
#define SWO_SEC_CRC_05 (ERR_SEC_CRC + ERR_GEN_ID_05)
#define SWO_SEC_CRC_06 (ERR_SEC_CRC + ERR_GEN_ID_06)
#define SWO_SEC_CRC_07 (ERR_SEC_CRC + ERR_GEN_ID_07)
#define SWO_SEC_CRC_08 (ERR_SEC_CRC + ERR_GEN_ID_08)
#define SWO_SEC_CRC_09 (ERR_SEC_CRC + ERR_GEN_ID_09)
#define SWO_SEC_CRC_0A (ERR_SEC_CRC + ERR_GEN_ID_0A)
#define SWO_SEC_CRC_0B (ERR_SEC_CRC + ERR_GEN_ID_0B)
#define SWO_SEC_CRC_0C (ERR_SEC_CRC + ERR_GEN_ID_0C)
#define SWO_SEC_CRC_0D (ERR_SEC_CRC + ERR_GEN_ID_0D)
#define SWO_SEC_CRC_0E (ERR_SEC_CRC + ERR_GEN_ID_0E)
#define SWO_SEC_CRC_0F (ERR_SEC_CRC + ERR_GEN_ID_0F)
#define SWO_SEC_CRC_10 (ERR_SEC_CRC + ERR_GEN_ID_10)
#define SWO_SEC_CRC_11 (ERR_SEC_CRC + ERR_GEN_ID_11)
#define SWO_SEC_CRC_12 (ERR_SEC_CRC + ERR_GEN_ID_12)
#define SWO_SEC_CRC_13 (ERR_SEC_CRC + ERR_GEN_ID_13)
#define SWO_SEC_CRC_14 (ERR_SEC_CRC + ERR_GEN_ID_14)
#define SWO_SEC_CRC_15 (ERR_SEC_CRC + ERR_GEN_ID_15)
#define SWO_SEC_CRC_16 (ERR_SEC_CRC + ERR_GEN_ID_16)
#define SWO_SEC_CRC_17 (ERR_SEC_CRC + ERR_GEN_ID_17)
#define SWO_SEC_CRC_18 (ERR_SEC_CRC + ERR_GEN_ID_18)
#define SWO_SEC_CRC_19 (ERR_SEC_CRC + ERR_GEN_ID_19)
#define SWO_SEC_CRC_1A (ERR_SEC_CRC + ERR_GEN_ID_1A)
#define SWO_SEC_CRC_1B (ERR_SEC_CRC + ERR_GEN_ID_1B)
#define SWO_SEC_CRC_1C (ERR_SEC_CRC + ERR_GEN_ID_1C)
#define SWO_SEC_CRC_1D (ERR_SEC_CRC + ERR_GEN_ID_1D)
#define SWO_SEC_CRC_1E (ERR_SEC_CRC + ERR_GEN_ID_1E)
#define SWO_SEC_CRC_1F (ERR_SEC_CRC + ERR_GEN_ID_1F)
#define SWO_SEC_CRC_20 (ERR_SEC_CRC + ERR_GEN_ID_20)
#define SWO_SEC_CRC_21 (ERR_SEC_CRC + ERR_GEN_ID_21)
#define SWO_SEC_CRC_22 (ERR_SEC_CRC + ERR_GEN_ID_22)
#define SWO_SEC_CRC_23 (ERR_SEC_CRC + ERR_GEN_ID_23)

#define SWO_SEC_CHK_01 (ERR_SEC_CHK + ERR_GEN_ID_01)
#define SWO_SEC_CHK_02 (ERR_SEC_CHK + ERR_GEN_ID_02)
#define SWO_SEC_CHK_03 (ERR_SEC_CHK + ERR_GEN_ID_03)
#define SWO_SEC_CHK_04 (ERR_SEC_CHK + ERR_GEN_ID_04)
#define SWO_SEC_CHK_05 (ERR_SEC_CHK + ERR_GEN_ID_05)
#define SWO_SEC_CHK_06 (ERR_SEC_CHK + ERR_GEN_ID_06)
#define SWO_SEC_CHK_07 (ERR_SEC_CHK + ERR_GEN_ID_07)
#define SWO_SEC_CHK_08 (ERR_SEC_CHK + ERR_GEN_ID_08)
#define SWO_SEC_CHK_09 (ERR_SEC_CHK + ERR_GEN_ID_09)
#define SWO_SEC_CHK_0A (ERR_SEC_CHK + ERR_GEN_ID_0A)
#define SWO_SEC_CHK_0B (ERR_SEC_CHK + ERR_GEN_ID_0B)
#define SWO_SEC_CHK_0C (ERR_SEC_CHK + ERR_GEN_ID_0C)
#define SWO_SEC_CHK_0D (ERR_SEC_CHK + ERR_GEN_ID_0D)
#define SWO_SEC_CHK_0E (ERR_SEC_CHK + ERR_GEN_ID_0E)
#define SWO_SEC_CHK_0F (ERR_SEC_CHK + ERR_GEN_ID_0F)
#define SWO_SEC_CHK_10 (ERR_SEC_CHK + ERR_GEN_ID_10)
#define SWO_SEC_CHK_11 (ERR_SEC_CHK + ERR_GEN_ID_11)
#define SWO_SEC_CHK_12 (ERR_SEC_CHK + ERR_GEN_ID_12)
#define SWO_SEC_CHK_13 (ERR_SEC_CHK + ERR_GEN_ID_13)
#define SWO_SEC_CHK_14 (ERR_SEC_CHK + ERR_GEN_ID_14)
#define SWO_SEC_CHK_15 (ERR_SEC_CHK + ERR_GEN_ID_15)
#define SWO_SEC_CHK_16 (ERR_SEC_CHK + ERR_GEN_ID_16)
#define SWO_SEC_CHK_17 (ERR_SEC_CHK + ERR_GEN_ID_17)
#define SWO_SEC_CHK_18 (ERR_SEC_CHK + ERR_GEN_ID_18)

#define SWO_SEC_KEY_01 (ERR_SEC_KEY + ERR_GEN_ID_01)

#define SWO_SEC_PIN_01 (ERR_SEC_PIN + ERR_GEN_ID_01)
#define SWO_SEC_PIN_02 (ERR_SEC_PIN + ERR_GEN_ID_02)
#define SWO_SEC_PIN_03 (ERR_SEC_PIN + ERR_GEN_ID_03)
#define SWO_SEC_PIN_04 (ERR_SEC_PIN + ERR_GEN_ID_04)
#define SWO_SEC_PIN_05 (ERR_SEC_PIN + ERR_GEN_ID_05)
#define SWO_SEC_PIN_06 (ERR_SEC_PIN + ERR_GEN_ID_06)
#define SWO_SEC_PIN_07 (ERR_SEC_PIN + ERR_GEN_ID_07)
#define SWO_SEC_PIN_08 (ERR_SEC_PIN + ERR_GEN_ID_08)
#define SWO_SEC_PIN_09 (ERR_SEC_PIN + ERR_GEN_ID_09)
#define SWO_SEC_PIN_0A (ERR_SEC_PIN + ERR_GEN_ID_0A)
#define SWO_SEC_PIN_0B (ERR_SEC_PIN + ERR_GEN_ID_0B)
#define SWO_SEC_PIN_0C (ERR_SEC_PIN + ERR_GEN_ID_0C)
#define SWO_SEC_PIN_0D (ERR_SEC_PIN + ERR_GEN_ID_0D)
#define SWO_SEC_PIN_0E (ERR_SEC_PIN + ERR_GEN_ID_0E)
#define SWO_SEC_PIN_0F (ERR_SEC_PIN + ERR_GEN_ID_0F)
#define SWO_SEC_PIN_10 (ERR_SEC_PIN + ERR_GEN_ID_10)
#define SWO_SEC_PIN_11 (ERR_SEC_PIN + ERR_GEN_ID_11)
#define SWO_SEC_PIN_12 (ERR_SEC_PIN + ERR_GEN_ID_12)
#define SWO_SEC_PIN_13 (ERR_SEC_PIN + ERR_GEN_ID_13)
#define SWO_SEC_PIN_14 (ERR_SEC_PIN + ERR_GEN_ID_14)
#define SWO_SEC_PIN_15 (ERR_SEC_PIN + ERR_GEN_ID_15)

#define SWO_SEC_SCP_01 (ERR_SEC_SCP + ERR_GEN_ID_01)
#define SWO_SEC_SCP_02 (ERR_SEC_SCP + ERR_GEN_ID_02)

#define SWO_SEC_SIG_01 (ERR_SEC_SIG + ERR_GEN_ID_01)
#define SWO_SEC_SIG_02 (ERR_SEC_SIG + ERR_GEN_ID_02)
#define SWO_SEC_SIG_03 (ERR_SEC_SIG + ERR_GEN_ID_03)
#define SWO_SEC_SIG_04 (ERR_SEC_SIG + ERR_GEN_ID_04)
#define SWO_SEC_SIG_05 (ERR_SEC_SIG + ERR_GEN_ID_05)
#define SWO_SEC_SIG_06 (ERR_SEC_SIG + ERR_GEN_ID_06)
#define SWO_SEC_SIG_07 (ERR_SEC_SIG + ERR_GEN_ID_07)
#define SWO_SEC_SIG_08 (ERR_SEC_SIG + ERR_GEN_ID_08)
#define SWO_SEC_SIG_09 (ERR_SEC_SIG + ERR_GEN_ID_09)
#define SWO_SEC_SIG_0A (ERR_SEC_SIG + ERR_GEN_ID_0A)
#define SWO_SEC_SIG_0B (ERR_SEC_SIG + ERR_GEN_ID_0B)
#define SWO_SEC_SIG_0C (ERR_SEC_SIG + ERR_GEN_ID_0C)
#define SWO_SEC_SIG_0D (ERR_SEC_SIG + ERR_GEN_ID_0D)
#define SWO_SEC_SIG_0E (ERR_SEC_SIG + ERR_GEN_ID_0E)
#define SWO_SEC_SIG_0F (ERR_SEC_SIG + ERR_GEN_ID_0F)

#define SWO_SEC_MEM_01 (ERR_SEC_MEM + ERR_GEN_ID_01)
#define SWO_SEC_MEM_02 (ERR_SEC_MEM + ERR_GEN_ID_02)
#define SWO_SEC_MEM_03 (ERR_SEC_MEM + ERR_GEN_ID_03)
#define SWO_SEC_MEM_04 (ERR_SEC_MEM + ERR_GEN_ID_04)
#define SWO_SEC_MEM_05 (ERR_SEC_MEM + ERR_GEN_ID_05)
#define SWO_SEC_MEM_06 (ERR_SEC_MEM + ERR_GEN_ID_06)
#define SWO_SEC_MEM_07 (ERR_SEC_MEM + ERR_GEN_ID_07)
#define SWO_SEC_MEM_08 (ERR_SEC_MEM + ERR_GEN_ID_08)
#define SWO_SEC_MEM_09 (ERR_SEC_MEM + ERR_GEN_ID_09)
#define SWO_SEC_MEM_0A (ERR_SEC_MEM + ERR_GEN_ID_0A)
#define SWO_SEC_MEM_0B (ERR_SEC_MEM + ERR_GEN_ID_0B)
#define SWO_SEC_MEM_0C (ERR_SEC_MEM + ERR_GEN_ID_0C)
#define SWO_SEC_MEM_0D (ERR_SEC_MEM + ERR_GEN_ID_0D)
#define SWO_SEC_MEM_0E (ERR_SEC_MEM + ERR_GEN_ID_0E)
#define SWO_SEC_MEM_0F (ERR_SEC_MEM + ERR_GEN_ID_0F)
#define SWO_SEC_MEM_10 (ERR_SEC_MEM + ERR_GEN_ID_10)

#define SWO_SEC_STA_01 (ERR_SEC_STA + ERR_GEN_ID_01)
#define SWO_SEC_STA_02 (ERR_SEC_STA + ERR_GEN_ID_02)
#define SWO_SEC_STA_03 (ERR_SEC_STA + ERR_GEN_ID_03)
#define SWO_SEC_STA_04 (ERR_SEC_STA + ERR_GEN_ID_04)
#define SWO_SEC_STA_05 (ERR_SEC_STA + ERR_GEN_ID_05)
#define SWO_SEC_STA_06 (ERR_SEC_STA + ERR_GEN_ID_06)
#define SWO_SEC_STA_07 (ERR_SEC_STA + ERR_GEN_ID_07)
#define SWO_SEC_STA_08 (ERR_SEC_STA + ERR_GEN_ID_08)
#define SWO_SEC_STA_09 (ERR_SEC_STA + ERR_GEN_ID_09)
#define SWO_SEC_STA_0A (ERR_SEC_STA + ERR_GEN_ID_0A)
#define SWO_SEC_STA_0B (ERR_SEC_STA + ERR_GEN_ID_0B)

/**
 * APDU-related issues are categorized into:
 * Class issues (CLA),
 * Instruction issues (INS),
 * Other APDU header checks (HDR),
 * Operating System state (STA),
 * Length issues (LEN),
 * Transmitted data issues (DAT).
 */
#define ERR_APD_CLA (ERR_APD_RANGE + ERR_GEN_SUB_0E)
#define ERR_APD_INS (ERR_APD_RANGE + ERR_GEN_SUB_0D)
#define ERR_APD_HDR (ERR_APD_RANGE + ERR_GEN_SUB_05)
#define ERR_APD_STA (ERR_APD_RANGE + ERR_GEN_SUB_06)
#define ERR_APD_LEN (ERR_APD_RANGE + ERR_GEN_SUB_07)
#define ERR_APD_DAT (ERR_APD_RANGE + ERR_GEN_SUB_08)

#define SWO_APD_CLA_01 (ERR_APD_CLA + ERR_GEN_ID_01)
#define SWO_APD_CLA_02 (ERR_APD_CLA + ERR_GEN_ID_02)

#define SWO_APD_INS_01 (ERR_APD_INS + ERR_GEN_ID_01)
#define SWO_APD_INS_02 (ERR_APD_INS + ERR_GEN_ID_02)
#define SWO_APD_INS_03 (ERR_APD_INS + ERR_GEN_ID_03)
#define SWO_APD_INS_04 (ERR_APD_INS + ERR_GEN_ID_04)
#define SWO_APD_INS_05 (ERR_APD_INS + ERR_GEN_ID_05)

#define SWO_APD_HDR_01 (ERR_APD_HDR + ERR_GEN_ID_01)
#define SWO_APD_HDR_02 (ERR_APD_HDR + ERR_GEN_ID_02)
#define SWO_APD_HDR_03 (ERR_APD_HDR + ERR_GEN_ID_03)
#define SWO_APD_HDR_04 (ERR_APD_HDR + ERR_GEN_ID_04)
#define SWO_APD_HDR_05 (ERR_APD_HDR + ERR_GEN_ID_05)
#define SWO_APD_HDR_06 (ERR_APD_HDR + ERR_GEN_ID_06)
#define SWO_APD_HDR_07 (ERR_APD_HDR + ERR_GEN_ID_07)
#define SWO_APD_HDR_08 (ERR_APD_HDR + ERR_GEN_ID_08)
#define SWO_APD_HDR_09 (ERR_APD_HDR + ERR_GEN_ID_09)
#define SWO_APD_HDR_0A (ERR_APD_HDR + ERR_GEN_ID_0A)
#define SWO_APD_HDR_0B (ERR_APD_HDR + ERR_GEN_ID_0B)
#define SWO_APD_HDR_0C (ERR_APD_HDR + ERR_GEN_ID_0C)
#define SWO_APD_HDR_0D (ERR_APD_HDR + ERR_GEN_ID_0D)
#define SWO_APD_HDR_0E (ERR_APD_HDR + ERR_GEN_ID_0E)
#define SWO_APD_HDR_0F (ERR_APD_HDR + ERR_GEN_ID_0F)
#define SWO_APD_HDR_10 (ERR_APD_HDR + ERR_GEN_ID_10)
#define SWO_APD_HDR_11 (ERR_APD_HDR + ERR_GEN_ID_11)
#define SWO_APD_HDR_12 (ERR_APD_HDR + ERR_GEN_ID_12)

#define SWO_APD_LEN_01 (ERR_APD_LEN + ERR_GEN_ID_01)
#define SWO_APD_LEN_02 (ERR_APD_LEN + ERR_GEN_ID_02)
#define SWO_APD_LEN_03 (ERR_APD_LEN + ERR_GEN_ID_03)
#define SWO_APD_LEN_04 (ERR_APD_LEN + ERR_GEN_ID_04)
#define SWO_APD_LEN_05 (ERR_APD_LEN + ERR_GEN_ID_05)
#define SWO_APD_LEN_06 (ERR_APD_LEN + ERR_GEN_ID_06)
#define SWO_APD_LEN_07 (ERR_APD_LEN + ERR_GEN_ID_07)
#define SWO_APD_LEN_08 (ERR_APD_LEN + ERR_GEN_ID_08)
#define SWO_APD_LEN_09 (ERR_APD_LEN + ERR_GEN_ID_09)
#define SWO_APD_LEN_0A (ERR_APD_LEN + ERR_GEN_ID_0A)
#define SWO_APD_LEN_0B (ERR_APD_LEN + ERR_GEN_ID_0B)
#define SWO_APD_LEN_0C (ERR_APD_LEN + ERR_GEN_ID_0C)
#define SWO_APD_LEN_0D (ERR_APD_LEN + ERR_GEN_ID_0D)
#define SWO_APD_LEN_0E (ERR_APD_LEN + ERR_GEN_ID_0E)
#define SWO_APD_LEN_0F (ERR_APD_LEN + ERR_GEN_ID_0F)
#define SWO_APD_LEN_10 (ERR_APD_LEN + ERR_GEN_ID_10)
#define SWO_APD_LEN_11 (ERR_APD_LEN + ERR_GEN_ID_11)
#define SWO_APD_LEN_12 (ERR_APD_LEN + ERR_GEN_ID_12)
#define SWO_APD_LEN_13 (ERR_APD_LEN + ERR_GEN_ID_13)
#define SWO_APD_LEN_14 (ERR_APD_LEN + ERR_GEN_ID_14)
#define SWO_APD_LEN_15 (ERR_APD_LEN + ERR_GEN_ID_15)
#define SWO_APD_LEN_16 (ERR_APD_LEN + ERR_GEN_ID_16)
#define SWO_APD_LEN_17 (ERR_APD_LEN + ERR_GEN_ID_17)
#define SWO_APD_LEN_18 (ERR_APD_LEN + ERR_GEN_ID_18)
#define SWO_APD_LEN_19 (ERR_APD_LEN + ERR_GEN_ID_19)
#define SWO_APD_LEN_1A (ERR_APD_LEN + ERR_GEN_ID_1A)
#define SWO_APD_LEN_1B (ERR_APD_LEN + ERR_GEN_ID_1B)
#define SWO_APD_LEN_1C (ERR_APD_LEN + ERR_GEN_ID_1C)
#define SWO_APD_LEN_1D (ERR_APD_LEN + ERR_GEN_ID_1D)
#define SWO_APD_LEN_1E (ERR_APD_LEN + ERR_GEN_ID_1E)
#define SWO_APD_LEN_1F (ERR_APD_LEN + ERR_GEN_ID_1F)
#define SWO_APD_LEN_20 (ERR_APD_LEN + ERR_GEN_ID_20)
#define SWO_APD_LEN_21 (ERR_APD_LEN + ERR_GEN_ID_21)
#define SWO_APD_LEN_22 (ERR_APD_LEN + ERR_GEN_ID_22)
#define SWO_APD_LEN_23 (ERR_APD_LEN + ERR_GEN_ID_23)
#define SWO_APD_LEN_24 (ERR_APD_LEN + ERR_GEN_ID_24)
#define SWO_APD_LEN_25 (ERR_APD_LEN + ERR_GEN_ID_25)
#define SWO_APD_LEN_26 (ERR_APD_LEN + ERR_GEN_ID_26)
#define SWO_APD_LEN_27 (ERR_APD_LEN + ERR_GEN_ID_27)
#define SWO_APD_LEN_28 (ERR_APD_LEN + ERR_GEN_ID_28)
#define SWO_APD_LEN_29 (ERR_APD_LEN + ERR_GEN_ID_29)
#define SWO_APD_LEN_2A (ERR_APD_LEN + ERR_GEN_ID_2A)
#define SWO_APD_LEN_2B (ERR_APD_LEN + ERR_GEN_ID_2B)

#define SWO_APD_DAT_01 (ERR_APD_DAT + ERR_GEN_ID_01)
#define SWO_APD_DAT_02 (ERR_APD_DAT + ERR_GEN_ID_02)
#define SWO_APD_DAT_03 (ERR_APD_DAT + ERR_GEN_ID_03)
#define SWO_APD_DAT_04 (ERR_APD_DAT + ERR_GEN_ID_04)
#define SWO_APD_DAT_05 (ERR_APD_DAT + ERR_GEN_ID_05)
#define SWO_APD_DAT_06 (ERR_APD_DAT + ERR_GEN_ID_06)
#define SWO_APD_DAT_07 (ERR_APD_DAT + ERR_GEN_ID_07)
#define SWO_APD_DAT_08 (ERR_APD_DAT + ERR_GEN_ID_08)
#define SWO_APD_DAT_09 (ERR_APD_DAT + ERR_GEN_ID_09)
#define SWO_APD_DAT_0A (ERR_APD_DAT + ERR_GEN_ID_0A)
#define SWO_APD_DAT_0B (ERR_APD_DAT + ERR_GEN_ID_0B)
#define SWO_APD_DAT_0C (ERR_APD_DAT + ERR_GEN_ID_0C)
#define SWO_APD_DAT_0D (ERR_APD_DAT + ERR_GEN_ID_0D)
#define SWO_APD_DAT_0E (ERR_APD_DAT + ERR_GEN_ID_0E)
#define SWO_APD_DAT_0F (ERR_APD_DAT + ERR_GEN_ID_0F)
#define SWO_APD_DAT_10 (ERR_APD_DAT + ERR_GEN_ID_10)
#define SWO_APD_DAT_11 (ERR_APD_DAT + ERR_GEN_ID_11)
#define SWO_APD_DAT_12 (ERR_APD_DAT + ERR_GEN_ID_12)
#define SWO_APD_DAT_13 (ERR_APD_DAT + ERR_GEN_ID_13)
#define SWO_APD_DAT_14 (ERR_APD_DAT + ERR_GEN_ID_14)
#define SWO_APD_DAT_15 (ERR_APD_DAT + ERR_GEN_ID_15)
#define SWO_APD_DAT_16 (ERR_APD_DAT + ERR_GEN_ID_16)
#define SWO_APD_DAT_17 (ERR_APD_DAT + ERR_GEN_ID_17)
#define SWO_APD_DAT_18 (ERR_APD_DAT + ERR_GEN_ID_18)

#define SWO_APD_STA_01 (ERR_APD_STA + ERR_GEN_ID_01)
#define SWO_APD_STA_02 (ERR_APD_STA + ERR_GEN_ID_02)
#define SWO_APD_STA_03 (ERR_APD_STA + ERR_GEN_ID_03)
#define SWO_APD_STA_04 (ERR_APD_STA + ERR_GEN_ID_04)
#define SWO_APD_STA_05 (ERR_APD_STA + ERR_GEN_ID_05)
#define SWO_APD_STA_06 (ERR_APD_STA + ERR_GEN_ID_06)
#define SWO_APD_STA_07 (ERR_APD_STA + ERR_GEN_ID_07)
#define SWO_APD_STA_08 (ERR_APD_STA + ERR_GEN_ID_08)
#define SWO_APD_STA_09 (ERR_APD_STA + ERR_GEN_ID_09)
#define SWO_APD_STA_0A (ERR_APD_STA + ERR_GEN_ID_0A)
#define SWO_APD_STA_0B (ERR_APD_STA + ERR_GEN_ID_0B)
#define SWO_APD_STA_0C (ERR_APD_STA + ERR_GEN_ID_0C)
#define SWO_APD_STA_0D (ERR_APD_STA + ERR_GEN_ID_0D)
#define SWO_APD_STA_0E (ERR_APD_STA + ERR_GEN_ID_0E)
#define SWO_APD_STA_0F (ERR_APD_STA + ERR_GEN_ID_0F)
#define SWO_APD_STA_10 (ERR_APD_STA + ERR_GEN_ID_10)
#define SWO_APD_STA_11 (ERR_APD_STA + ERR_GEN_ID_11)
#define SWO_APD_STA_12 (ERR_APD_STA + ERR_GEN_ID_12)
#define SWO_APD_STA_13 (ERR_APD_STA + ERR_GEN_ID_13)
#define SWO_APD_STA_14 (ERR_APD_STA + ERR_GEN_ID_14)
#define SWO_APD_STA_15 (ERR_APD_STA + ERR_GEN_ID_15)
#define SWO_APD_STA_16 (ERR_APD_STA + ERR_GEN_ID_16)
#define SWO_APD_STA_17 (ERR_APD_STA + ERR_GEN_ID_17)
#define SWO_APD_STA_18 (ERR_APD_STA + ERR_GEN_ID_18)
#define SWO_APD_STA_19 (ERR_APD_STA + ERR_GEN_ID_19)
#define SWO_APD_STA_1A (ERR_APD_STA + ERR_GEN_ID_1A)
#define SWO_APD_STA_1B (ERR_APD_STA + ERR_GEN_ID_1B)
#define SWO_APD_STA_1C (ERR_APD_STA + ERR_GEN_ID_1C)
#define SWO_APD_STA_1D (ERR_APD_STA + ERR_GEN_ID_1D)
#define SWO_APD_STA_1E (ERR_APD_STA + ERR_GEN_ID_1E)
#define SWO_APD_STA_1F (ERR_APD_STA + ERR_GEN_ID_1F)
#define SWO_APD_STA_20 (ERR_APD_STA + ERR_GEN_ID_20)
#define SWO_APD_STA_21 (ERR_APD_STA + ERR_GEN_ID_21)
#define SWO_APD_STA_22 (ERR_APD_STA + ERR_GEN_ID_22)
#define SWO_APD_STA_23 (ERR_APD_STA + ERR_GEN_ID_23)
#define SWO_APD_STA_24 (ERR_APD_STA + ERR_GEN_ID_24)
#define SWO_APD_STA_25 (ERR_APD_STA + ERR_GEN_ID_25)
#define SWO_APD_STA_26 (ERR_APD_STA + ERR_GEN_ID_26)
#define SWO_APD_STA_27 (ERR_APD_STA + ERR_GEN_ID_27)
#define SWO_APD_STA_28 (ERR_APD_STA + ERR_GEN_ID_28)
#define SWO_APD_STA_29 (ERR_APD_STA + ERR_GEN_ID_29)
#define SWO_APD_STA_2A (ERR_APD_STA + ERR_GEN_ID_2A)
#define SWO_APD_STA_2B (ERR_APD_STA + ERR_GEN_ID_2B)

/**
 * The process is successful.
 */
#define SWO_SUCCESS 0x9000

/**
 * Miscellaneous Unexplained issues (no categorization, Unknown).
 */
#define SWO_MUI_UNK_01 (ERR_MUI_RANGE + ERR_GEN_ID_01)
#define SWO_MUI_UNK_02 (ERR_MUI_RANGE + ERR_GEN_ID_02)
#define SWO_MUI_UNK_03 (ERR_MUI_RANGE + ERR_GEN_ID_03)
#define SWO_MUI_UNK_04 (ERR_MUI_RANGE + ERR_GEN_ID_04)
#define SWO_MUI_UNK_05 (ERR_MUI_RANGE + ERR_GEN_ID_05)
#define SWO_MUI_UNK_06 (ERR_MUI_RANGE + ERR_GEN_ID_06)
#define SWO_MUI_UNK_07 (ERR_MUI_RANGE + ERR_GEN_ID_07)
#define SWO_MUI_UNK_08 (ERR_MUI_RANGE + ERR_GEN_ID_08)
#define SWO_MUI_UNK_09 (ERR_MUI_RANGE + ERR_GEN_ID_09)
#define SWO_MUI_UNK_0A (ERR_MUI_RANGE + ERR_GEN_ID_0A)
#define SWO_MUI_UNK_0B (ERR_MUI_RANGE + ERR_GEN_ID_0B)
#define SWO_MUI_UNK_0C (ERR_MUI_RANGE + ERR_GEN_ID_0C)
#define SWO_MUI_UNK_0D (ERR_MUI_RANGE + ERR_GEN_ID_0D)
#define SWO_MUI_UNK_0E (ERR_MUI_RANGE + ERR_GEN_ID_0E)
#define SWO_MUI_UNK_0F (ERR_MUI_RANGE + ERR_GEN_ID_0F)
#define SWO_MUI_UNK_10 (ERR_MUI_RANGE + ERR_GEN_ID_10)
#define SWO_MUI_UNK_11 (ERR_MUI_RANGE + ERR_GEN_ID_11)
#define SWO_MUI_UNK_12 (ERR_MUI_RANGE + ERR_GEN_ID_12)
#define SWO_MUI_UNK_13 (ERR_MUI_RANGE + ERR_GEN_ID_13)
#define SWO_MUI_UNK_14 (ERR_MUI_RANGE + ERR_GEN_ID_14)
#define SWO_MUI_UNK_15 (ERR_MUI_RANGE + ERR_GEN_ID_15)
#define SWO_MUI_UNK_16 (ERR_MUI_RANGE + ERR_GEN_ID_16)
#define SWO_MUI_UNK_17 (ERR_MUI_RANGE + ERR_GEN_ID_17)
#define SWO_MUI_UNK_18 (ERR_MUI_RANGE + ERR_GEN_ID_18)

// Legacy
#define EXCEPTION 0x1             // keep original value // SWO_MUI_UNK_01
#define INVALID_PARAMETER 0x2     // keep original value // SWO_CRY_LEN_01
#define EXCEPTION_SECURITY 0x3    // keep original value // SWO_MUI_UNK_02
#define INVALID_STATE 0x4         // keep original value // SWO_CRY_VAL_01
#define EXCEPTION_IO_RESET 0x5    // keep original value // SWO_IOL_RST_01
#define NOT_ENOUGH_SPACE 0x6      // keep original value // SWO_CRY_VAL_01
#define EXCEPTION_OVERFLOW 0x7    // keep original value // SWO_MUI_UNK_03
#define INVALID_CRC 0x8           // keep original value // SWO_MUI_UNK_0C
#define INVALID_CHECKSUM 0x9      // keep original value // SWO_MUI_UNK_0D
#define INVALID_COUNTER 0xA       // keep original value // SWO_MUI_UNK_0E
#define NOT_SUPPORTED 0xB         // keep original value // SWO_MUI_UNK_0F
#define TIMEOUT 0xC               // keep original value // SWO_MUI_UNK_10
#define EXCEPTION_PIC 0xD         // keep original value // SWO_MUI_UNK_11
#define EXCEPTION_APPEXIT 0xE     // keep original value // SWO_MUI_UNK_12
#define EXCEPTION_IO_OVERFLOW 0xF // keep original value // SWO_MUI_UNK_13
#define EXCEPTION_IO_HEADER 0x10  // keep original value // SWO_MUI_UNK_14
#define EXCEPTION_IO_STATE 0x11   // keep original value // SWO_MUI_UNK_15
#define EXCEPTION_CXPORT 0x12     // keep original value // SWO_MUI_UNK_16
#define EXCEPTION_SYSTEM 0x13     // keep original value // SWO_MUI_UNK_17

#endif // ERRORS_H