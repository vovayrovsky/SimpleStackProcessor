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
    work_m_00000000001571788224_3913188552_init();
    work_m_00000000001571788224_1724851283_init();
    work_m_00000000001571788224_0638873647_init();
    work_m_00000000000880883252_1977409714_init();
    work_m_00000000003234743186_3527808377_init();
    work_m_00000000002160559884_0886308060_init();
    work_m_00000000002506486667_1938225339_init();
    work_m_00000000002102863293_3508565487_init();
    work_m_00000000003748263230_3063359507_init();
    work_m_00000000001674707067_0217068093_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001674707067_0217068093");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}