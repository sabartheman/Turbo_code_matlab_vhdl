/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "Function hdlcoder_to_stdlogic ended without a return statement";
extern char *IEEE_P_1242562249;
static const char *ng2 = "Function hdlcoder_to_signed ended without a return statement";
static const char *ng3 = "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcenc/hdlsrc/tbcenc_fixpt.vhd";
extern char *IEEE_P_2592010699;

char *ieee_p_1242562249_sub_17126692536656888728_1035706684(char *, char *, int , int );
int ieee_p_1242562249_sub_1871261289446890672_1035706684(char *, char *, char *);
char *ieee_p_1242562249_sub_2749763749646623249_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_1242562249_sub_3044629854704842352_1035706684(char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_443655409838522413_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_800139796931568664_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_2592010699_sub_3488768497506413324_503743352(char *, unsigned char , unsigned char );


unsigned char xlib_a_1998266523_1516540902_sub_15700723919707112284_2134189630(char *t1, unsigned char t2)
{
    char t4[8];
    unsigned char t0;
    char *t5;

LAB0:    t5 = (t4 + 4U);
    *((unsigned char *)t5) = t2;
    if (t2 != 0)
        goto LAB2;

LAB4:    t0 = (unsigned char)2;

LAB1:    return t0;
LAB2:    t0 = (unsigned char)3;
    goto LAB1;

LAB3:    xsi_error(ng0);
    t0 = 0;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:    goto LAB3;

}

char *xlib_a_1998266523_1516540902_sub_1058331042627559208_2134189630(char *t1, char *t2, unsigned char t3, int t4)
{
    char t6[16];
    char t9[16];
    char *t0;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    unsigned int t12;
    char *t13;
    int t14;
    char *t15;
    int t16;
    char *t17;
    int t18;
    char *t19;
    char *t20;
    int t21;
    unsigned int t22;

LAB0:    t7 = (t6 + 4U);
    *((unsigned char *)t7) = t3;
    t8 = (t6 + 5U);
    *((int *)t8) = t4;
    if (t3 != 0)
        goto LAB2;

LAB4:    t10 = ieee_p_1242562249_sub_17126692536656888728_1035706684(IEEE_P_1242562249, t9, 0, t4);
    t11 = (t9 + 12U);
    t12 = *((unsigned int *)t11);
    t12 = (t12 * 1U);
    t0 = xsi_get_transient_memory(t12);
    memcpy(t0, t10, t12);
    t13 = (t9 + 0U);
    t14 = *((int *)t13);
    t15 = (t9 + 4U);
    t16 = *((int *)t15);
    t17 = (t9 + 8U);
    t18 = *((int *)t17);
    t19 = (t2 + 0U);
    t20 = (t19 + 0U);
    *((int *)t20) = t14;
    t20 = (t19 + 4U);
    *((int *)t20) = t16;
    t20 = (t19 + 8U);
    *((int *)t20) = t18;
    t21 = (t16 - t14);
    t22 = (t21 * t18);
    t22 = (t22 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t22;

LAB1:    return t0;
LAB2:    t10 = ieee_p_1242562249_sub_17126692536656888728_1035706684(IEEE_P_1242562249, t9, 1, t4);
    t11 = (t9 + 12U);
    t12 = *((unsigned int *)t11);
    t12 = (t12 * 1U);
    t0 = xsi_get_transient_memory(t12);
    memcpy(t0, t10, t12);
    t13 = (t9 + 0U);
    t14 = *((int *)t13);
    t15 = (t9 + 4U);
    t16 = *((int *)t15);
    t17 = (t9 + 8U);
    t18 = *((int *)t17);
    t19 = (t2 + 0U);
    t20 = (t19 + 0U);
    *((int *)t20) = t14;
    t20 = (t19 + 4U);
    *((int *)t20) = t16;
    t20 = (t19 + 8U);
    *((int *)t20) = t18;
    t21 = (t16 - t14);
    t22 = (t21 * t18);
    t22 = (t22 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t22;
    goto LAB1;

LAB3:    xsi_error(ng2);
    t0 = 0;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:    goto LAB3;

}

static void xlib_a_1998266523_1516540902_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(69, ng3);

LAB3:    t1 = (t0 + 3304U);
    t2 = *((char **)t1);
    t1 = (t0 + 4240U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 0);
    t6 = (t5 * 1);
    t7 = (4U * t6);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t9 = (t0 + 10368);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 4U);
    xsi_driver_first_trans_delta(t9, 0U, 4U, 0LL);

LAB2:    t14 = (t0 + 10160);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_1998266523_1516540902_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(69, ng3);

LAB3:    t1 = (t0 + 3304U);
    t2 = *((char **)t1);
    t1 = (t0 + 4360U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 0);
    t6 = (t5 * 1);
    t7 = (4U * t6);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t9 = (t0 + 10432);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 4U);
    xsi_driver_first_trans_delta(t9, 4U, 4U, 0LL);

LAB2:    t14 = (t0 + 10176);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_1998266523_1516540902_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(69, ng3);

LAB3:    t1 = (t0 + 3304U);
    t2 = *((char **)t1);
    t1 = (t0 + 4480U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 0);
    t6 = (t5 * 1);
    t7 = (4U * t6);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t9 = (t0 + 10496);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 4U);
    xsi_driver_first_trans_delta(t9, 8U, 4U, 0LL);

LAB2:    t14 = (t0 + 10192);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_1998266523_1516540902_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(69, ng3);

LAB3:    t1 = (t0 + 3304U);
    t2 = *((char **)t1);
    t1 = (t0 + 4600U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 0);
    t6 = (t5 * 1);
    t7 = (4U * t6);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t9 = (t0 + 10560);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 4U);
    xsi_driver_first_trans_delta(t9, 12U, 4U, 0LL);

LAB2:    t14 = (t0 + 10208);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_1998266523_1516540902_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(69, ng3);

LAB3:    t1 = (t0 + 3304U);
    t2 = *((char **)t1);
    t1 = (t0 + 4720U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 0);
    t6 = (t5 * 1);
    t7 = (4U * t6);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t9 = (t0 + 10624);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 4U);
    xsi_driver_first_trans_delta(t9, 16U, 4U, 0LL);

LAB2:    t14 = (t0 + 10224);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_1998266523_1516540902_p_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(69, ng3);

LAB3:    t1 = (t0 + 3304U);
    t2 = *((char **)t1);
    t1 = (t0 + 4840U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 0);
    t6 = (t5 * 1);
    t7 = (4U * t6);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t9 = (t0 + 10688);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 4U);
    xsi_driver_first_trans_delta(t9, 20U, 4U, 0LL);

LAB2:    t14 = (t0 + 10240);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_1998266523_1516540902_p_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(69, ng3);

LAB3:    t1 = (t0 + 3304U);
    t2 = *((char **)t1);
    t1 = (t0 + 4960U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 0);
    t6 = (t5 * 1);
    t7 = (4U * t6);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t9 = (t0 + 10752);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 4U);
    xsi_driver_first_trans_delta(t9, 24U, 4U, 0LL);

LAB2:    t14 = (t0 + 10256);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_1998266523_1516540902_p_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(69, ng3);

LAB3:    t1 = (t0 + 3304U);
    t2 = *((char **)t1);
    t1 = (t0 + 5080U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 0);
    t6 = (t5 * 1);
    t7 = (4U * t6);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t9 = (t0 + 10816);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 4U);
    xsi_driver_first_trans_delta(t9, 28U, 4U, 0LL);

LAB2:    t14 = (t0 + 10272);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_1998266523_1516540902_p_8(char *t0)
{
    char t5[16];
    char t14[16];
    char t38[16];
    char t39[16];
    char t40[16];
    char t41[16];
    char t44[16];
    char t47[16];
    char t50[16];
    char t53[16];
    char t56[16];
    char t59[16];
    char t62[16];
    char t65[16];
    char t68[16];
    char t71[16];
    char t74[16];
    char t77[16];
    char t80[16];
    char t83[16];
    char t86[16];
    char t89[16];
    char t92[16];
    char t95[16];
    char t98[16];
    char t101[16];
    char t104[16];
    char t107[16];
    char t110[16];
    char t113[16];
    char t117[16];
    char *t1;
    char *t2;
    int t3;
    int t4;
    char *t6;
    char *t7;
    int t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t15;
    char *t16;
    int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    int t21;
    int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned char t28;
    int t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned char t33;
    unsigned char t34;
    unsigned char t35;
    unsigned char t36;
    unsigned char t37;
    char *t42;
    char *t43;
    char *t45;
    char *t46;
    char *t48;
    char *t49;
    char *t51;
    char *t52;
    char *t54;
    char *t55;
    char *t57;
    char *t58;
    char *t60;
    char *t61;
    char *t63;
    char *t64;
    char *t66;
    char *t67;
    char *t69;
    char *t70;
    char *t72;
    char *t73;
    char *t75;
    char *t76;
    char *t78;
    char *t79;
    char *t81;
    char *t82;
    char *t84;
    char *t85;
    char *t87;
    char *t88;
    char *t90;
    char *t91;
    char *t93;
    char *t94;
    char *t96;
    char *t97;
    char *t99;
    char *t100;
    char *t102;
    char *t103;
    char *t105;
    char *t106;
    char *t108;
    char *t109;
    char *t111;
    char *t112;
    char *t114;
    char *t115;
    char *t116;
    char *t118;
    char *t119;
    char *t120;
    char *t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;

LAB0:    xsi_set_current_line(113, ng3);
    t1 = (t0 + 17664);
    *((int *)t1) = 0;
    t2 = (t0 + 17668);
    *((int *)t2) = 7;
    t3 = 0;
    t4 = 7;

LAB2:    if (t3 <= t4)
        goto LAB3;

LAB5:    xsi_set_current_line(126, ng3);
    t1 = xsi_get_transient_memory(2U);
    memset(t1, 0, 2U);
    t2 = t1;
    memset(t2, (unsigned char)2, 2U);
    t6 = (t0 + 6040U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t1, 2U);
    xsi_set_current_line(128, ng3);
    t1 = (t0 + 17672);
    *((int *)t1) = 0;
    t2 = (t0 + 17676);
    *((int *)t2) = 7;
    t3 = 0;
    t4 = 7;

LAB7:    if (t3 <= t4)
        goto LAB8;

LAB10:    xsi_set_current_line(145, ng3);
    t1 = xsi_get_transient_memory(2U);
    memset(t1, 0, 2U);
    t2 = t1;
    memset(t2, (unsigned char)2, 2U);
    t6 = (t0 + 6280U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t1, 2U);
    xsi_set_current_line(148, ng3);
    t1 = (t0 + 17680);
    *((int *)t1) = 0;
    t2 = (t0 + 17684);
    *((int *)t2) = 7;
    t3 = 0;
    t4 = 7;

LAB15:    if (t3 <= t4)
        goto LAB16;

LAB18:    t1 = (t0 + 10288);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(114, ng3);
    t6 = (t0 + 3944U);
    t7 = *((char **)t6);
    t6 = (t0 + 17664);
    t8 = *((int *)t6);
    t9 = (t8 - 0);
    t10 = (t9 * 1);
    xsi_vhdl_check_range_of_index(0, 7, 1, *((int *)t6));
    t11 = (4U * t10);
    t12 = (0 + t11);
    t13 = (t7 + t12);
    t15 = (t14 + 0U);
    t16 = (t15 + 0U);
    *((int *)t16) = 3;
    t16 = (t15 + 4U);
    *((int *)t16) = 0;
    t16 = (t15 + 8U);
    *((int *)t16) = -1;
    t17 = (0 - 3);
    t18 = (t17 * -1);
    t18 = (t18 + 1);
    t16 = (t15 + 12U);
    *((unsigned int *)t16) = t18;
    t16 = ieee_p_1242562249_sub_2749763749646623249_1035706684(IEEE_P_1242562249, t5, t13, t14, 32);
    t19 = (t0 + 6640U);
    t20 = *((char **)t19);
    t19 = (t0 + 17664);
    t21 = *((int *)t19);
    t22 = (t21 - 0);
    t18 = (t22 * 1);
    xsi_vhdl_check_range_of_index(0, 7, 1, *((int *)t19));
    t23 = (32U * t18);
    t24 = (0 + t23);
    t25 = (t20 + t24);
    t26 = (t5 + 12U);
    t27 = *((unsigned int *)t26);
    t27 = (t27 * 1U);
    memcpy(t25, t16, t27);
    xsi_set_current_line(115, ng3);
    t1 = (t0 + 3144U);
    t2 = *((char **)t1);
    t1 = (t0 + 6640U);
    t6 = *((char **)t1);
    t1 = (t0 + 17664);
    t8 = *((int *)t1);
    t9 = (t8 - 0);
    t10 = (t9 * 1);
    xsi_vhdl_check_range_of_index(0, 7, 1, *((int *)t1));
    t11 = (32U * t10);
    t12 = (0 + t11);
    t7 = (t6 + t12);
    t13 = (t14 + 0U);
    t15 = (t13 + 0U);
    *((int *)t15) = 31;
    t15 = (t13 + 4U);
    *((int *)t15) = 0;
    t15 = (t13 + 8U);
    *((int *)t15) = -1;
    t17 = (0 - 31);
    t18 = (t17 * -1);
    t18 = (t18 + 1);
    t15 = (t13 + 12U);
    *((unsigned int *)t15) = t18;
    t15 = ieee_p_1242562249_sub_800139796931568664_1035706684(IEEE_P_1242562249, t5, t7, t14, 1);
    t21 = ieee_p_1242562249_sub_1871261289446890672_1035706684(IEEE_P_1242562249, t15, t5);
    t22 = (t21 - 0);
    t18 = (t22 * 1);
    xsi_vhdl_check_range_of_index(0, 7, 1, t21);
    t23 = (1U * t18);
    t24 = (0 + t23);
    t16 = (t2 + t24);
    t28 = *((unsigned char *)t16);
    t19 = (t0 + 5200U);
    t20 = *((char **)t19);
    t19 = (t0 + 17664);
    t29 = *((int *)t19);
    t30 = (t29 - 0);
    t27 = (t30 * 1);
    xsi_vhdl_check_range_of_index(0, 7, 1, *((int *)t19));
    t31 = (1U * t27);
    t32 = (0 + t31);
    t25 = (t20 + t32);
    *((unsigned char *)t25) = t28;

LAB4:    t1 = (t0 + 17664);
    t3 = *((int *)t1);
    t2 = (t0 + 17668);
    t4 = *((int *)t2);
    if (t3 == t4)
        goto LAB5;

LAB6:    t8 = (t3 + 1);
    t3 = t8;
    t6 = (t0 + 17664);
    *((int *)t6) = t3;
    goto LAB2;

LAB8:    xsi_set_current_line(129, ng3);
    t6 = (t0 + 3144U);
    t7 = *((char **)t6);
    t6 = (t0 + 17672);
    t8 = *((int *)t6);
    t9 = (t8 - 0);
    t10 = (t9 * 1);
    xsi_vhdl_check_range_of_index(0, 7, 1, *((int *)t6));
    t11 = (1U * t10);
    t12 = (0 + t11);
    t13 = (t7 + t12);
    t28 = *((unsigned char *)t13);
    t15 = (t0 + 6040U);
    t16 = *((char **)t15);
    t17 = (0 - 0);
    t18 = (t17 * 1);
    t23 = (1U * t18);
    t24 = (0 + t23);
    t15 = (t16 + t24);
    t33 = *((unsigned char *)t15);
    t19 = (t0 + 6040U);
    t20 = *((char **)t19);
    t21 = (1 - 0);
    t27 = (t21 * 1);
    t31 = (1U * t27);
    t32 = (0 + t31);
    t19 = (t20 + t32);
    t34 = *((unsigned char *)t19);
    t35 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t33, t34);
    t36 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t28, t35);
    t37 = (t36 != (unsigned char)2);
    if (t37 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(132, ng3);
    t1 = (t0 + 5920U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)2;

LAB12:    xsi_set_current_line(134, ng3);
    t2 = ((IEEE_P_1242562249) + 3080);
    t1 = xsi_base_array_concat(t1, t5, t2, (char)99, (unsigned char)2, (char)99, (unsigned char)2, (char)101);
    t7 = ((IEEE_P_1242562249) + 3080);
    t6 = xsi_base_array_concat(t6, t14, t7, (char)97, t1, t5, (char)99, (unsigned char)2, (char)101);
    t15 = ((IEEE_P_1242562249) + 3080);
    t13 = xsi_base_array_concat(t13, t38, t15, (char)97, t6, t14, (char)99, (unsigned char)2, (char)101);
    t19 = ((IEEE_P_1242562249) + 3080);
    t16 = xsi_base_array_concat(t16, t39, t19, (char)97, t13, t38, (char)99, (unsigned char)2, (char)101);
    t25 = ((IEEE_P_1242562249) + 3080);
    t20 = xsi_base_array_concat(t20, t40, t25, (char)97, t16, t39, (char)99, (unsigned char)2, (char)101);
    t42 = ((IEEE_P_1242562249) + 3080);
    t26 = xsi_base_array_concat(t26, t41, t42, (char)97, t20, t40, (char)99, (unsigned char)2, (char)101);
    t45 = ((IEEE_P_1242562249) + 3080);
    t43 = xsi_base_array_concat(t43, t44, t45, (char)97, t26, t41, (char)99, (unsigned char)2, (char)101);
    t48 = ((IEEE_P_1242562249) + 3080);
    t46 = xsi_base_array_concat(t46, t47, t48, (char)97, t43, t44, (char)99, (unsigned char)2, (char)101);
    t51 = ((IEEE_P_1242562249) + 3080);
    t49 = xsi_base_array_concat(t49, t50, t51, (char)97, t46, t47, (char)99, (unsigned char)2, (char)101);
    t54 = ((IEEE_P_1242562249) + 3080);
    t52 = xsi_base_array_concat(t52, t53, t54, (char)97, t49, t50, (char)99, (unsigned char)2, (char)101);
    t57 = ((IEEE_P_1242562249) + 3080);
    t55 = xsi_base_array_concat(t55, t56, t57, (char)97, t52, t53, (char)99, (unsigned char)2, (char)101);
    t60 = ((IEEE_P_1242562249) + 3080);
    t58 = xsi_base_array_concat(t58, t59, t60, (char)97, t55, t56, (char)99, (unsigned char)2, (char)101);
    t63 = ((IEEE_P_1242562249) + 3080);
    t61 = xsi_base_array_concat(t61, t62, t63, (char)97, t58, t59, (char)99, (unsigned char)2, (char)101);
    t66 = ((IEEE_P_1242562249) + 3080);
    t64 = xsi_base_array_concat(t64, t65, t66, (char)97, t61, t62, (char)99, (unsigned char)2, (char)101);
    t69 = ((IEEE_P_1242562249) + 3080);
    t67 = xsi_base_array_concat(t67, t68, t69, (char)97, t64, t65, (char)99, (unsigned char)2, (char)101);
    t72 = ((IEEE_P_1242562249) + 3080);
    t70 = xsi_base_array_concat(t70, t71, t72, (char)97, t67, t68, (char)99, (unsigned char)2, (char)101);
    t75 = ((IEEE_P_1242562249) + 3080);
    t73 = xsi_base_array_concat(t73, t74, t75, (char)97, t70, t71, (char)99, (unsigned char)2, (char)101);
    t78 = ((IEEE_P_1242562249) + 3080);
    t76 = xsi_base_array_concat(t76, t77, t78, (char)97, t73, t74, (char)99, (unsigned char)2, (char)101);
    t81 = ((IEEE_P_1242562249) + 3080);
    t79 = xsi_base_array_concat(t79, t80, t81, (char)97, t76, t77, (char)99, (unsigned char)2, (char)101);
    t84 = ((IEEE_P_1242562249) + 3080);
    t82 = xsi_base_array_concat(t82, t83, t84, (char)97, t79, t80, (char)99, (unsigned char)2, (char)101);
    t87 = ((IEEE_P_1242562249) + 3080);
    t85 = xsi_base_array_concat(t85, t86, t87, (char)97, t82, t83, (char)99, (unsigned char)2, (char)101);
    t90 = ((IEEE_P_1242562249) + 3080);
    t88 = xsi_base_array_concat(t88, t89, t90, (char)97, t85, t86, (char)99, (unsigned char)2, (char)101);
    t93 = ((IEEE_P_1242562249) + 3080);
    t91 = xsi_base_array_concat(t91, t92, t93, (char)97, t88, t89, (char)99, (unsigned char)2, (char)101);
    t96 = ((IEEE_P_1242562249) + 3080);
    t94 = xsi_base_array_concat(t94, t95, t96, (char)97, t91, t92, (char)99, (unsigned char)2, (char)101);
    t99 = ((IEEE_P_1242562249) + 3080);
    t97 = xsi_base_array_concat(t97, t98, t99, (char)97, t94, t95, (char)99, (unsigned char)2, (char)101);
    t102 = ((IEEE_P_1242562249) + 3080);
    t100 = xsi_base_array_concat(t100, t101, t102, (char)97, t97, t98, (char)99, (unsigned char)2, (char)101);
    t105 = ((IEEE_P_1242562249) + 3080);
    t103 = xsi_base_array_concat(t103, t104, t105, (char)97, t100, t101, (char)99, (unsigned char)2, (char)101);
    t108 = ((IEEE_P_1242562249) + 3080);
    t106 = xsi_base_array_concat(t106, t107, t108, (char)97, t103, t104, (char)99, (unsigned char)2, (char)101);
    t111 = ((IEEE_P_1242562249) + 3080);
    t109 = xsi_base_array_concat(t109, t110, t111, (char)97, t106, t107, (char)99, (unsigned char)2, (char)101);
    t114 = ((IEEE_P_1242562249) + 3080);
    t112 = xsi_base_array_concat(t112, t113, t114, (char)97, t109, t110, (char)99, (unsigned char)2, (char)101);
    t115 = (t0 + 5920U);
    t116 = *((char **)t115);
    t28 = *((unsigned char *)t116);
    t118 = ((IEEE_P_1242562249) + 3080);
    t115 = xsi_base_array_concat(t115, t117, t118, (char)97, t112, t113, (char)99, t28, (char)101);
    t119 = (t0 + 6760U);
    t120 = *((char **)t119);
    t119 = (t0 + 17672);
    t8 = *((int *)t119);
    t9 = (t8 - 0);
    t10 = (t9 * 1);
    xsi_vhdl_check_range_of_index(0, 7, 1, *((int *)t119));
    t11 = (32U * t10);
    t12 = (0 + t11);
    t121 = (t120 + t12);
    t18 = (1U + 1U);
    t23 = (t18 + 1U);
    t24 = (t23 + 1U);
    t27 = (t24 + 1U);
    t31 = (t27 + 1U);
    t32 = (t31 + 1U);
    t122 = (t32 + 1U);
    t123 = (t122 + 1U);
    t124 = (t123 + 1U);
    t125 = (t124 + 1U);
    t126 = (t125 + 1U);
    t127 = (t126 + 1U);
    t128 = (t127 + 1U);
    t129 = (t128 + 1U);
    t130 = (t129 + 1U);
    t131 = (t130 + 1U);
    t132 = (t131 + 1U);
    t133 = (t132 + 1U);
    t134 = (t133 + 1U);
    t135 = (t134 + 1U);
    t136 = (t135 + 1U);
    t137 = (t136 + 1U);
    t138 = (t137 + 1U);
    t139 = (t138 + 1U);
    t140 = (t139 + 1U);
    t141 = (t140 + 1U);
    t142 = (t141 + 1U);
    t143 = (t142 + 1U);
    t144 = (t143 + 1U);
    t145 = (t144 + 1U);
    t146 = (t145 + 1U);
    memcpy(t121, t115, t146);
    xsi_set_current_line(135, ng3);
    t1 = (t0 + 6760U);
    t2 = *((char **)t1);
    t1 = (t0 + 17672);
    t8 = *((int *)t1);
    t9 = (t8 - 0);
    t10 = (t9 * 1);
    xsi_vhdl_check_range_of_index(0, 7, 1, *((int *)t1));
    t11 = (32U * t10);
    t12 = (0 + t11);
    t6 = (t2 + t12);
    t7 = (t14 + 0U);
    t13 = (t7 + 0U);
    *((int *)t13) = 31;
    t13 = (t7 + 4U);
    *((int *)t13) = 0;
    t13 = (t7 + 8U);
    *((int *)t13) = -1;
    t17 = (0 - 31);
    t18 = (t17 * -1);
    t18 = (t18 + 1);
    t13 = (t7 + 12U);
    *((unsigned int *)t13) = t18;
    t13 = (t0 + 6040U);
    t15 = *((char **)t13);
    t21 = (1 - 0);
    t18 = (t21 * 1);
    t23 = (1U * t18);
    t24 = (0 + t23);
    t13 = (t15 + t24);
    t28 = *((unsigned char *)t13);
    t33 = (t28 != (unsigned char)2);
    t16 = xlib_a_1998266523_1516540902_sub_1058331042627559208_2134189630(t0, t38, t33, 32);
    t19 = ieee_p_1242562249_sub_443655409838522413_1035706684(IEEE_P_1242562249, t5, t6, t14, t16, t38);
    t20 = ieee_p_1242562249_sub_17126692536656888728_1035706684(IEEE_P_1242562249, t39, 0, 32);
    t34 = ieee_p_1242562249_sub_3044629854704842352_1035706684(IEEE_P_1242562249, t19, t5, t20, t39);
    t35 = xlib_a_1998266523_1516540902_sub_15700723919707112284_2134189630(t0, t34);
    t25 = (t0 + 5320U);
    t26 = *((char **)t25);
    t25 = (t0 + 17672);
    t22 = *((int *)t25);
    t29 = (t22 - 0);
    t27 = (t29 * 1);
    xsi_vhdl_check_range_of_index(0, 7, 1, *((int *)t25));
    t31 = (1U * t27);
    t32 = (0 + t31);
    t42 = (t26 + t32);
    *((unsigned char *)t42) = t35;
    xsi_set_current_line(136, ng3);
    t1 = (t0 + 6040U);
    t2 = *((char **)t1);
    t8 = (0 - 0);
    t10 = (t8 * 1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t1 = (t2 + t12);
    t28 = *((unsigned char *)t1);
    t6 = (t0 + 6400U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = t28;
    xsi_set_current_line(137, ng3);
    t1 = (t0 + 5920U);
    t2 = *((char **)t1);
    t28 = *((unsigned char *)t2);
    t1 = (t0 + 6040U);
    t6 = *((char **)t1);
    t8 = (0 - 0);
    t10 = (t8 * 1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t1 = (t6 + t12);
    *((unsigned char *)t1) = t28;
    xsi_set_current_line(138, ng3);
    t1 = (t0 + 6400U);
    t2 = *((char **)t1);
    t28 = *((unsigned char *)t2);
    t1 = (t0 + 6040U);
    t6 = *((char **)t1);
    t8 = (1 - 0);
    t10 = (t8 * 1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t1 = (t6 + t12);
    *((unsigned char *)t1) = t28;

LAB9:    t1 = (t0 + 17672);
    t3 = *((int *)t1);
    t2 = (t0 + 17676);
    t4 = *((int *)t2);
    if (t3 == t4)
        goto LAB10;

LAB14:    t8 = (t3 + 1);
    t3 = t8;
    t6 = (t0 + 17672);
    *((int *)t6) = t3;
    goto LAB7;

LAB11:    xsi_set_current_line(130, ng3);
    t25 = (t0 + 5920U);
    t26 = *((char **)t25);
    t25 = (t26 + 0);
    *((unsigned char *)t25) = (unsigned char)3;
    goto LAB12;

LAB16:    xsi_set_current_line(149, ng3);
    t6 = (t0 + 5200U);
    t7 = *((char **)t6);
    t6 = (t0 + 17680);
    t8 = *((int *)t6);
    t9 = (t8 - 0);
    t10 = (t9 * 1);
    xsi_vhdl_check_range_of_index(0, 7, 1, *((int *)t6));
    t11 = (1U * t10);
    t12 = (0 + t11);
    t13 = (t7 + t12);
    t28 = *((unsigned char *)t13);
    t15 = (t0 + 6280U);
    t16 = *((char **)t15);
    t17 = (0 - 0);
    t18 = (t17 * 1);
    t23 = (1U * t18);
    t24 = (0 + t23);
    t15 = (t16 + t24);
    t33 = *((unsigned char *)t15);
    t19 = (t0 + 6280U);
    t20 = *((char **)t19);
    t21 = (1 - 0);
    t27 = (t21 * 1);
    t31 = (1U * t27);
    t32 = (0 + t31);
    t19 = (t20 + t32);
    t34 = *((unsigned char *)t19);
    t35 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t33, t34);
    t36 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t28, t35);
    t37 = (t36 != (unsigned char)2);
    if (t37 != 0)
        goto LAB19;

LAB21:    xsi_set_current_line(152, ng3);
    t1 = (t0 + 6160U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)2;

LAB20:    xsi_set_current_line(154, ng3);
    t2 = ((IEEE_P_1242562249) + 3080);
    t1 = xsi_base_array_concat(t1, t5, t2, (char)99, (unsigned char)2, (char)99, (unsigned char)2, (char)101);
    t7 = ((IEEE_P_1242562249) + 3080);
    t6 = xsi_base_array_concat(t6, t14, t7, (char)97, t1, t5, (char)99, (unsigned char)2, (char)101);
    t15 = ((IEEE_P_1242562249) + 3080);
    t13 = xsi_base_array_concat(t13, t38, t15, (char)97, t6, t14, (char)99, (unsigned char)2, (char)101);
    t19 = ((IEEE_P_1242562249) + 3080);
    t16 = xsi_base_array_concat(t16, t39, t19, (char)97, t13, t38, (char)99, (unsigned char)2, (char)101);
    t25 = ((IEEE_P_1242562249) + 3080);
    t20 = xsi_base_array_concat(t20, t40, t25, (char)97, t16, t39, (char)99, (unsigned char)2, (char)101);
    t42 = ((IEEE_P_1242562249) + 3080);
    t26 = xsi_base_array_concat(t26, t41, t42, (char)97, t20, t40, (char)99, (unsigned char)2, (char)101);
    t45 = ((IEEE_P_1242562249) + 3080);
    t43 = xsi_base_array_concat(t43, t44, t45, (char)97, t26, t41, (char)99, (unsigned char)2, (char)101);
    t48 = ((IEEE_P_1242562249) + 3080);
    t46 = xsi_base_array_concat(t46, t47, t48, (char)97, t43, t44, (char)99, (unsigned char)2, (char)101);
    t51 = ((IEEE_P_1242562249) + 3080);
    t49 = xsi_base_array_concat(t49, t50, t51, (char)97, t46, t47, (char)99, (unsigned char)2, (char)101);
    t54 = ((IEEE_P_1242562249) + 3080);
    t52 = xsi_base_array_concat(t52, t53, t54, (char)97, t49, t50, (char)99, (unsigned char)2, (char)101);
    t57 = ((IEEE_P_1242562249) + 3080);
    t55 = xsi_base_array_concat(t55, t56, t57, (char)97, t52, t53, (char)99, (unsigned char)2, (char)101);
    t60 = ((IEEE_P_1242562249) + 3080);
    t58 = xsi_base_array_concat(t58, t59, t60, (char)97, t55, t56, (char)99, (unsigned char)2, (char)101);
    t63 = ((IEEE_P_1242562249) + 3080);
    t61 = xsi_base_array_concat(t61, t62, t63, (char)97, t58, t59, (char)99, (unsigned char)2, (char)101);
    t66 = ((IEEE_P_1242562249) + 3080);
    t64 = xsi_base_array_concat(t64, t65, t66, (char)97, t61, t62, (char)99, (unsigned char)2, (char)101);
    t69 = ((IEEE_P_1242562249) + 3080);
    t67 = xsi_base_array_concat(t67, t68, t69, (char)97, t64, t65, (char)99, (unsigned char)2, (char)101);
    t72 = ((IEEE_P_1242562249) + 3080);
    t70 = xsi_base_array_concat(t70, t71, t72, (char)97, t67, t68, (char)99, (unsigned char)2, (char)101);
    t75 = ((IEEE_P_1242562249) + 3080);
    t73 = xsi_base_array_concat(t73, t74, t75, (char)97, t70, t71, (char)99, (unsigned char)2, (char)101);
    t78 = ((IEEE_P_1242562249) + 3080);
    t76 = xsi_base_array_concat(t76, t77, t78, (char)97, t73, t74, (char)99, (unsigned char)2, (char)101);
    t81 = ((IEEE_P_1242562249) + 3080);
    t79 = xsi_base_array_concat(t79, t80, t81, (char)97, t76, t77, (char)99, (unsigned char)2, (char)101);
    t84 = ((IEEE_P_1242562249) + 3080);
    t82 = xsi_base_array_concat(t82, t83, t84, (char)97, t79, t80, (char)99, (unsigned char)2, (char)101);
    t87 = ((IEEE_P_1242562249) + 3080);
    t85 = xsi_base_array_concat(t85, t86, t87, (char)97, t82, t83, (char)99, (unsigned char)2, (char)101);
    t90 = ((IEEE_P_1242562249) + 3080);
    t88 = xsi_base_array_concat(t88, t89, t90, (char)97, t85, t86, (char)99, (unsigned char)2, (char)101);
    t93 = ((IEEE_P_1242562249) + 3080);
    t91 = xsi_base_array_concat(t91, t92, t93, (char)97, t88, t89, (char)99, (unsigned char)2, (char)101);
    t96 = ((IEEE_P_1242562249) + 3080);
    t94 = xsi_base_array_concat(t94, t95, t96, (char)97, t91, t92, (char)99, (unsigned char)2, (char)101);
    t99 = ((IEEE_P_1242562249) + 3080);
    t97 = xsi_base_array_concat(t97, t98, t99, (char)97, t94, t95, (char)99, (unsigned char)2, (char)101);
    t102 = ((IEEE_P_1242562249) + 3080);
    t100 = xsi_base_array_concat(t100, t101, t102, (char)97, t97, t98, (char)99, (unsigned char)2, (char)101);
    t105 = ((IEEE_P_1242562249) + 3080);
    t103 = xsi_base_array_concat(t103, t104, t105, (char)97, t100, t101, (char)99, (unsigned char)2, (char)101);
    t108 = ((IEEE_P_1242562249) + 3080);
    t106 = xsi_base_array_concat(t106, t107, t108, (char)97, t103, t104, (char)99, (unsigned char)2, (char)101);
    t111 = ((IEEE_P_1242562249) + 3080);
    t109 = xsi_base_array_concat(t109, t110, t111, (char)97, t106, t107, (char)99, (unsigned char)2, (char)101);
    t114 = ((IEEE_P_1242562249) + 3080);
    t112 = xsi_base_array_concat(t112, t113, t114, (char)97, t109, t110, (char)99, (unsigned char)2, (char)101);
    t115 = (t0 + 6160U);
    t116 = *((char **)t115);
    t28 = *((unsigned char *)t116);
    t118 = ((IEEE_P_1242562249) + 3080);
    t115 = xsi_base_array_concat(t115, t117, t118, (char)97, t112, t113, (char)99, t28, (char)101);
    t119 = (t0 + 6880U);
    t120 = *((char **)t119);
    t119 = (t0 + 17680);
    t8 = *((int *)t119);
    t9 = (t8 - 0);
    t10 = (t9 * 1);
    xsi_vhdl_check_range_of_index(0, 7, 1, *((int *)t119));
    t11 = (32U * t10);
    t12 = (0 + t11);
    t121 = (t120 + t12);
    t18 = (1U + 1U);
    t23 = (t18 + 1U);
    t24 = (t23 + 1U);
    t27 = (t24 + 1U);
    t31 = (t27 + 1U);
    t32 = (t31 + 1U);
    t122 = (t32 + 1U);
    t123 = (t122 + 1U);
    t124 = (t123 + 1U);
    t125 = (t124 + 1U);
    t126 = (t125 + 1U);
    t127 = (t126 + 1U);
    t128 = (t127 + 1U);
    t129 = (t128 + 1U);
    t130 = (t129 + 1U);
    t131 = (t130 + 1U);
    t132 = (t131 + 1U);
    t133 = (t132 + 1U);
    t134 = (t133 + 1U);
    t135 = (t134 + 1U);
    t136 = (t135 + 1U);
    t137 = (t136 + 1U);
    t138 = (t137 + 1U);
    t139 = (t138 + 1U);
    t140 = (t139 + 1U);
    t141 = (t140 + 1U);
    t142 = (t141 + 1U);
    t143 = (t142 + 1U);
    t144 = (t143 + 1U);
    t145 = (t144 + 1U);
    t146 = (t145 + 1U);
    memcpy(t121, t115, t146);
    xsi_set_current_line(155, ng3);
    t1 = (t0 + 6880U);
    t2 = *((char **)t1);
    t1 = (t0 + 17680);
    t8 = *((int *)t1);
    t9 = (t8 - 0);
    t10 = (t9 * 1);
    xsi_vhdl_check_range_of_index(0, 7, 1, *((int *)t1));
    t11 = (32U * t10);
    t12 = (0 + t11);
    t6 = (t2 + t12);
    t7 = (t14 + 0U);
    t13 = (t7 + 0U);
    *((int *)t13) = 31;
    t13 = (t7 + 4U);
    *((int *)t13) = 0;
    t13 = (t7 + 8U);
    *((int *)t13) = -1;
    t17 = (0 - 31);
    t18 = (t17 * -1);
    t18 = (t18 + 1);
    t13 = (t7 + 12U);
    *((unsigned int *)t13) = t18;
    t13 = (t0 + 6280U);
    t15 = *((char **)t13);
    t21 = (1 - 0);
    t18 = (t21 * 1);
    t23 = (1U * t18);
    t24 = (0 + t23);
    t13 = (t15 + t24);
    t28 = *((unsigned char *)t13);
    t33 = (t28 != (unsigned char)2);
    t16 = xlib_a_1998266523_1516540902_sub_1058331042627559208_2134189630(t0, t38, t33, 32);
    t19 = ieee_p_1242562249_sub_443655409838522413_1035706684(IEEE_P_1242562249, t5, t6, t14, t16, t38);
    t20 = ieee_p_1242562249_sub_17126692536656888728_1035706684(IEEE_P_1242562249, t39, 0, 32);
    t34 = ieee_p_1242562249_sub_3044629854704842352_1035706684(IEEE_P_1242562249, t19, t5, t20, t39);
    t35 = xlib_a_1998266523_1516540902_sub_15700723919707112284_2134189630(t0, t34);
    t25 = (t0 + 5440U);
    t26 = *((char **)t25);
    t25 = (t0 + 17680);
    t22 = *((int *)t25);
    t29 = (t22 - 0);
    t27 = (t29 * 1);
    xsi_vhdl_check_range_of_index(0, 7, 1, *((int *)t25));
    t31 = (1U * t27);
    t32 = (0 + t31);
    t42 = (t26 + t32);
    *((unsigned char *)t42) = t35;
    xsi_set_current_line(156, ng3);
    t1 = (t0 + 6280U);
    t2 = *((char **)t1);
    t8 = (0 - 0);
    t10 = (t8 * 1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t1 = (t2 + t12);
    t28 = *((unsigned char *)t1);
    t6 = (t0 + 6520U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = t28;
    xsi_set_current_line(157, ng3);
    t1 = (t0 + 6160U);
    t2 = *((char **)t1);
    t28 = *((unsigned char *)t2);
    t1 = (t0 + 6280U);
    t6 = *((char **)t1);
    t8 = (0 - 0);
    t10 = (t8 * 1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t1 = (t6 + t12);
    *((unsigned char *)t1) = t28;
    xsi_set_current_line(158, ng3);
    t1 = (t0 + 6520U);
    t2 = *((char **)t1);
    t28 = *((unsigned char *)t2);
    t1 = (t0 + 6280U);
    t6 = *((char **)t1);
    t8 = (1 - 0);
    t10 = (t8 * 1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t1 = (t6 + t12);
    *((unsigned char *)t1) = t28;
    xsi_set_current_line(159, ng3);
    t1 = (t0 + 3144U);
    t2 = *((char **)t1);
    t1 = (t0 + 17680);
    t8 = *((int *)t1);
    t9 = (t8 - 0);
    t10 = (t9 * 1);
    xsi_vhdl_check_range_of_index(0, 7, 1, *((int *)t1));
    t11 = (1U * t10);
    t12 = (0 + t11);
    t6 = (t2 + t12);
    t28 = *((unsigned char *)t6);
    t7 = (t0 + 5560U);
    t13 = *((char **)t7);
    t7 = (t0 + 17680);
    t17 = *((int *)t7);
    t21 = (t17 - 0);
    t18 = (t21 * 1);
    xsi_vhdl_check_range_of_index(0, 7, 1, *((int *)t7));
    t23 = (1U * t18);
    t24 = (0 + t23);
    t15 = (t13 + t24);
    *((unsigned char *)t15) = t28;
    xsi_set_current_line(160, ng3);
    t1 = (t0 + 5320U);
    t2 = *((char **)t1);
    t1 = (t0 + 17680);
    t8 = *((int *)t1);
    t9 = (t8 - 0);
    t10 = (t9 * 1);
    xsi_vhdl_check_range_of_index(0, 7, 1, *((int *)t1));
    t11 = (1U * t10);
    t12 = (0 + t11);
    t6 = (t2 + t12);
    t28 = *((unsigned char *)t6);
    t7 = (t0 + 5680U);
    t13 = *((char **)t7);
    t7 = (t0 + 17680);
    t17 = *((int *)t7);
    t21 = (t17 - 0);
    t18 = (t21 * 1);
    xsi_vhdl_check_range_of_index(0, 7, 1, *((int *)t7));
    t23 = (1U * t18);
    t24 = (0 + t23);
    t15 = (t13 + t24);
    *((unsigned char *)t15) = t28;
    xsi_set_current_line(161, ng3);
    t1 = (t0 + 5440U);
    t2 = *((char **)t1);
    t1 = (t0 + 17680);
    t8 = *((int *)t1);
    t9 = (t8 - 0);
    t10 = (t9 * 1);
    xsi_vhdl_check_range_of_index(0, 7, 1, *((int *)t1));
    t11 = (1U * t10);
    t12 = (0 + t11);
    t6 = (t2 + t12);
    t28 = *((unsigned char *)t6);
    t7 = (t0 + 5800U);
    t13 = *((char **)t7);
    t7 = (t0 + 17680);
    t17 = *((int *)t7);
    t21 = (t17 - 0);
    t18 = (t21 * 1);
    xsi_vhdl_check_range_of_index(0, 7, 1, *((int *)t7));
    t23 = (1U * t18);
    t24 = (0 + t23);
    t15 = (t13 + t24);
    *((unsigned char *)t15) = t28;
    xsi_set_current_line(162, ng3);
    t1 = (t0 + 5560U);
    t2 = *((char **)t1);
    t1 = (t0 + 17680);
    t8 = *((int *)t1);
    t9 = (t8 - 0);
    t10 = (t9 * 1);
    xsi_vhdl_check_range_of_index(0, 7, 1, *((int *)t1));
    t11 = (1U * t10);
    t12 = (0 + t11);
    t6 = (t2 + t12);
    t28 = *((unsigned char *)t6);
    t7 = (t0 + 17680);
    t17 = *((int *)t7);
    t21 = (t17 - 0);
    t18 = (t21 * 1);
    t23 = (1 * t18);
    t24 = (0U + t23);
    t13 = (t0 + 10880);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    t19 = (t16 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = t28;
    xsi_driver_first_trans_delta(t13, t24, 1, 0LL);
    xsi_set_current_line(163, ng3);
    t1 = (t0 + 5680U);
    t2 = *((char **)t1);
    t1 = (t0 + 17680);
    t8 = *((int *)t1);
    t9 = (t8 - 0);
    t10 = (t9 * 1);
    xsi_vhdl_check_range_of_index(0, 7, 1, *((int *)t1));
    t11 = (1U * t10);
    t12 = (0 + t11);
    t6 = (t2 + t12);
    t28 = *((unsigned char *)t6);
    t7 = (t0 + 17680);
    t17 = *((int *)t7);
    t21 = (t17 - 0);
    t18 = (t21 * 1);
    t23 = (1 * t18);
    t24 = (0U + t23);
    t13 = (t0 + 10944);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    t19 = (t16 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = t28;
    xsi_driver_first_trans_delta(t13, t24, 1, 0LL);
    xsi_set_current_line(164, ng3);
    t1 = (t0 + 5800U);
    t2 = *((char **)t1);
    t1 = (t0 + 17680);
    t8 = *((int *)t1);
    t9 = (t8 - 0);
    t10 = (t9 * 1);
    xsi_vhdl_check_range_of_index(0, 7, 1, *((int *)t1));
    t11 = (1U * t10);
    t12 = (0 + t11);
    t6 = (t2 + t12);
    t28 = *((unsigned char *)t6);
    t7 = (t0 + 17680);
    t17 = *((int *)t7);
    t21 = (t17 - 0);
    t18 = (t21 * 1);
    t23 = (1 * t18);
    t24 = (0U + t23);
    t13 = (t0 + 11008);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    t19 = (t16 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = t28;
    xsi_driver_first_trans_delta(t13, t24, 1, 0LL);

LAB17:    t1 = (t0 + 17680);
    t3 = *((int *)t1);
    t2 = (t0 + 17684);
    t4 = *((int *)t2);
    if (t3 == t4)
        goto LAB18;

LAB22:    t8 = (t3 + 1);
    t3 = t8;
    t6 = (t0 + 17680);
    *((int *)t6) = t3;
    goto LAB15;

LAB19:    xsi_set_current_line(150, ng3);
    t25 = (t0 + 6160U);
    t26 = *((char **)t25);
    t25 = (t26 + 0);
    *((unsigned char *)t25) = (unsigned char)3;
    goto LAB20;

}


extern void xlib_a_1998266523_1516540902_init()
{
	static char *pe[] = {(void *)xlib_a_1998266523_1516540902_p_0,(void *)xlib_a_1998266523_1516540902_p_1,(void *)xlib_a_1998266523_1516540902_p_2,(void *)xlib_a_1998266523_1516540902_p_3,(void *)xlib_a_1998266523_1516540902_p_4,(void *)xlib_a_1998266523_1516540902_p_5,(void *)xlib_a_1998266523_1516540902_p_6,(void *)xlib_a_1998266523_1516540902_p_7,(void *)xlib_a_1998266523_1516540902_p_8};
	static char *se[] = {(void *)xlib_a_1998266523_1516540902_sub_15700723919707112284_2134189630,(void *)xlib_a_1998266523_1516540902_sub_1058331042627559208_2134189630};
	xsi_register_didat("xlib_a_1998266523_1516540902", "isim/tbcenc_fixpt_isim_design.exe.sim/xlib/a_1998266523_1516540902.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
