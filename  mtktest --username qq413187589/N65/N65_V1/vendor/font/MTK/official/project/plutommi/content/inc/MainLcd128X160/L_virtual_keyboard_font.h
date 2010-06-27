/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE. 
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

const U32 virtualkeyboard_RangeOffset[15]= {

0,11,33,44,66,88,132,154,264,671,682,704,715,726,748,};

const U8  virtualkeyboard_Data[759]= {

0x40,0x44,0xD8,0xE0,0x80,0x0,0x0,0x0,0x0,0x0,0x0,0x40,0x60,0x60,0xE0,0x80,
0x0,0x0,0x0,0x0,0x0,0x0,0x8,0x38,0x60,0x80,0x1,0x4,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x40,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x4,0x4,0x18,0x30,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x18,0x30,0x40,0x40,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x50,0xA0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x50,0xA0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x20,0x20,0x20,0xE0,0x9F,0x0,0x2,
0x8,0x0,0x0,0x0,0x20,0xE0,0xA0,0x22,0x9,0x2,0x4,0x8,0x10,0x0,0x0,0x20,
0x80,0x0,0xF2,0xF,0x8,0x8,0x8,0x0,0x0,0x10,0x20,0x40,0x80,0x20,0x89,0xA,
0xE,0x8,0x0,0x0,0x0,0x0,0x30,0xC0,0x80,0x1,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x60,0x20,0x41,0x2,0x3,0x0,0x0,0x0,0x0,0x20,0x40,0x40,0x80,0x80,0x0,
0x2,0x4,0x10,0x20,0x0,0x8,0x10,0x40,0x80,0x0,0x2,0x2,0x4,0x4,0x8,0x0,
0x48,0x90,0x90,0x20,0x21,0x81,0x4,0x9,0x24,0x48,0x0,0x24,0x48,0x20,0x41,0x2,
0x9,0x9,0x12,0x12,0x24,0x0,0x1C,0x8,0x10,0x20,0x40,0x80,0x0,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x1,0x2,0x4,0x8,0x10,0x20,0x70,0x0,0x7C,0x88,0xD0,0xA1,
0x40,0x81,0x2,0x7,0x0,0x0,0x0,0x0,0x0,0xC0,0x81,0x2,0x5,0xA,0x17,0x22,
0x7C,0x0,0x1E,0x1C,0x18,0x10,0x20,0xC0,0x80,0x3,0xF,0x0,0x0,0xF0,0xC0,0x1,
0x3,0x4,0x8,0x18,0x38,0x78,0x0,0x0,0x8,0x8,0xF8,0x3,0x4,0x8,0x10,0x20,
0x38,0x0,0x0,0x8,0x8,0xF8,0x11,0x42,0x2,0x3,0xA,0x63,0x0,0x0,0x0,0xF8,
0x8,0x12,0x24,0x48,0x90,0x20,0x41,0x0,0x0,0x0,0xFC,0x9,0x10,0x20,0x40,0x0,
0x1,0x7C,0x0,0x0,0x8,0x8,0xF8,0x83,0x4,0x9,0x91,0x21,0x38,0x0,0x0,0x20,
0x20,0xF8,0x43,0x80,0x80,0x84,0x10,0x7F,0x80,0x0,0x0,0x38,0x80,0x0,0x1,0xE,
0x10,0x20,0x38,0x0,0x0,0x28,0x48,0xF8,0x83,0x4,0x9,0x91,0x21,0x38,0x0,0x0,
0x0,0x90,0x90,0x20,0x21,0x81,0x4,0x12,0x24,0x0,0x0,0x0,0xFC,0x21,0x20,0xC0,
0x7,0x8,0x10,0x18,0x0,0x0,0x0,0xF8,0x11,0x20,0x40,0x80,0x0,0x1,0x1,0x0,
0x0,0x0,0x88,0x10,0x21,0x43,0xC5,0x9,0x10,0x20,0x0,0x0,0x0,0x40,0x40,0x40,
0x40,0x0,0x1,0x4,0x10,0x0,0x0,0x0,0xFC,0x41,0x80,0x0,0x1,0x2,0x4,0x8,
0x0,0x0,0x0,0x20,0x48,0x92,0x24,0xC9,0x1F,0x4,0x7F,0x0,0x0,0x0,0x20,0x30,
0x1,0x1,0x83,0x5,0x8,0x10,0x0,0x0,0x0,0x78,0x0,0x1,0xC2,0x83,0x0,0x1,
0x1,0x0,0x0,0x0,0xFC,0x8,0x51,0x22,0x45,0x8A,0x10,0x3F,0x0,0x0,0x0,0xF8,
0x21,0x42,0x84,0x8,0x9,0x2,0x4,0x0,0x0,0x10,0xFC,0x21,0xE0,0x3,0x8,0x10,
0x10,0x10,0x0,0x0,0x0,0x40,0x80,0x80,0x80,0x80,0x84,0x10,0x7F,0x80,0x0,0x0,
0x4,0x11,0xC1,0x1,0x1,0x2,0x4,0x8,0x0,0x0,0x0,0xFC,0x41,0xE0,0x20,0x40,
0x80,0x10,0x1E,0x0,0x0,0x10,0xFC,0x41,0xE0,0x20,0x40,0x80,0x10,0x1E,0x0,0x0,
0x0,0x88,0x10,0xF1,0x47,0x84,0x8,0x1,0x7C,0x0,0x0,0x0,0xFC,0x49,0xF0,0x7,
0x9,0x11,0x21,0x31,0x0,0x0,0x0,0x10,0x50,0x90,0x0,0x1,0x4,0x10,0x40,0x0,
0x0,0x0,0x10,0x90,0xF0,0x80,0x80,0x4,0x11,0x3F,0x80,0x0,0x0,0xF8,0x0,0x21,
0x81,0x1,0x3,0x9,0x61,0x0,0x0,0x0,0xF8,0x10,0x11,0xE1,0xF,0x10,0x20,0x30,
0x0,0x0,0x0,0x10,0x10,0x10,0xE0,0xF,0x10,0x20,0x30,0x0,0x0,0x0,0x20,0x40,
0xF0,0x7,0x1,0x1,0x5,0x71,0x0,0x0,0x0,0x40,0x40,0x80,0x80,0x80,0x80,0x0,
0x7F,0x0,0x0,0x0,0x50,0xA0,0x40,0x81,0x82,0x4,0x9,0x61,0x0,0x0,0x0,0x0,
0x0,0x0,0xE0,0xF,0x0,0x0,0x0,0x0,0x0,0x0,0x84,0x10,0x41,0x81,0x81,0x84,
0x90,0x40,0x0,0x0,0x0,0x4,0x9,0x12,0x24,0x48,0x90,0x20,0x3E,0x0,0x0,0x0,
0x0,0x40,0x80,0x0,0x1,0x2,0x0,0x8,0x0,0x0,0x0,0x0,0x20,0x20,0x40,0x80,
0x0,0x2,0x0,0x0,0x0,0x0,0x0,0x80,0x0,0x2,0x4,0x8,0x8,0x0,0x0,0x0,
0x0,0x30,0x60,0x80,0x80,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xC0,0x80,
0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x20,0x0,0x80,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x60,0x0,0x80,0x1,0x2,0x2,0x0,0x0,0x0,0x0,0x30,0x80,0x0,
0x1,0x1,0x2,0x0,0x8,0x0,0x0,};