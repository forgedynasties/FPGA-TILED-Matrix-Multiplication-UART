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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000000061179892_3553382713_init();
    work_m_00000000000620944469_1913203228_init();
    work_m_00000000000034445576_3945703665_init();
    work_m_00000000003388480177_2070929554_init();
    work_m_00000000001788276444_2092158628_init();
    work_m_00000000001342317951_2943448091_init();
    work_m_00000000000091299280_3719567901_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000091299280_3719567901");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
