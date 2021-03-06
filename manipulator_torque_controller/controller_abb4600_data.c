/*
 * File: controller_abb4600_data.c
 *
 * Code generated for Simulink model 'controller_abb4600'.
 *
 * Model version                  : 1.9
 * Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
 * C/C++ source code generated on : Fri Apr 17 23:40:15 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "controller_abb4600.h"
#include "controller_abb4600_private.h"

/* Constant parameters (default storage) */
const ConstP_controller_abb4600_T controller_abb4600_ConstP = {
  /* Pooled Parameter (Expression: TreeStruct)
   * Referenced by:
   *   '<S2>/MATLAB Function'
   *   '<S3>/MATLAB Function'
   *   '<S4>/MATLAB Function'
   *   '<S4>/MATLAB Function1'
   */
  {
    8.0,

    { 0.0, 0.0, -9.80665 },
    6.0,
    6.0,
    6.0,

    { 0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 0.0, -1.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0,
      -1.0 },

    { 0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 0.0, -1.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0,
      -1.0 },
    200.0,
    7.0,
    1U,

    { -3.141, -1.57, -3.141, -6.981, -2.181, -6.981, 3.141, 2.617, 1.308, 6.981,
      2.094, 6.981 },

    {
      {
        9.0,

        { 98U, 97U, 115U, 101U, 95U, 108U, 105U, 110U, 107U },
        -1.0,
        2.0,

        { 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },
        0.0,

        { 0.0, 0.0, 0.0 },

        { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

        { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
          0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
          0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
      }, {
        4.0,

        { 98U, 97U, 115U, 101U, 0U, 0U, 0U, 0U, 0U },
        0.0,
        0.0,

        { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },
        0.0,

        { 0.0, 0.0, 0.0 },

        { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

        { 0.0, 0.0, 0.0, 0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0, 0.0, 0.0,
          0.0, -0.0, 0.0, 0.0, 0.0, 0.0, -0.0, 0.0, 0.0, 0.0, -0.0, 0.0, 0.0,
          0.0, 0.0, 0.0, 0.0, -0.0, 0.0, 0.0, 0.0, 0.0 }
      }, {
        6.0,

        { 108U, 105U, 110U, 107U, 95U, 49U, 0U, 0U, 0U },
        0.0,
        1.0,

        { 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0 },
        136.4988,

        { 0.0835, 0.0296, 0.2329 },

        { 11.310118662716, -0.67737043408000008, -3.58231263842,
          -0.67737043408000008, 13.066327632408, -1.2682008873919999,
          -3.58231263842, -1.2682008873919999, 4.657098546908 },

        { 11.310118662716, -0.67737043408000008, -3.58231263842, 0.0,
          -31.790570519999996, 4.04036448, -0.67737043408000008, 13.066327632408,
          -1.2682008873919999, 31.790570519999996, 0.0, -11.3976498,
          -3.58231263842, -1.2682008873919999, 4.657098546908, -4.04036448,
          11.3976498, 0.0, 0.0, 31.790570519999996, -4.04036448, 136.4988, 0.0,
          0.0, -31.790570519999996, 0.0, 11.3976498, 0.0, 136.4988, 0.0,
          4.04036448, -11.3976498, 0.0, 0.0, 0.0, 136.4988 }
      }, {
        6.0,

        { 108U, 105U, 110U, 107U, 95U, 50U, 0U, 0U, 0U },
        2.0,
        1.0,

        { 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0 },
        68.755,

        { 0.0, -0.0432, 0.4822 },

        { 24.1662086654, -0.0004, 0.0006, -0.0004, 24.1891953342,
          1.6759381552000001, 0.0006, 1.6759381552000001, 0.5701133312 },

        { 24.1662086654, -0.0004, 0.0006, 0.0, -33.153661, -2.9702159999999997,
          -0.0004, 24.1891953342, 1.6759381552000001, 33.153661, 0.0, -0.0,
          0.0006, 1.6759381552000001, 0.5701133312, 2.9702159999999997, 0.0, 0.0,
          0.0, 33.153661, 2.9702159999999997, 68.755, 0.0, 0.0, -33.153661, 0.0,
          0.0, 0.0, 68.755, 0.0, -2.9702159999999997, -0.0, 0.0, 0.0, 0.0,
          68.755 }
      }, {
        6.0,

        { 108U, 105U, 110U, 107U, 95U, 51U, 0U, 0U, 0U },
        3.0,
        1.0,

        { 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0 },
        104.6491,

        { 0.0509, 0.1956, 0.1148 },

        { 7.7699822654399995, -0.91889062556399992, -0.790598179012,
          -0.91889062556399992, 4.555400609635, -2.388582982608, -0.790598179012,
          -2.388582982608, 6.831533525347 },

        { 7.7699822654399995, -0.91889062556399992, -0.790598179012, 0.0,
          -12.01371668, 20.46936396, -0.91889062556399992, 4.555400609635,
          -2.388582982608, 12.01371668, 0.0, -5.32663919, -0.790598179012,
          -2.388582982608, 6.831533525347, -20.46936396, 5.32663919, 0.0, 0.0,
          12.01371668, -20.46936396, 104.6491, 0.0, 0.0, -12.01371668, 0.0,
          5.32663919, 0.0, 104.6491, 0.0, 20.46936396, -5.32663919, 0.0, 0.0,
          0.0, 104.6491 }
      }, {
        6.0,

        { 108U, 105U, 110U, 107U, 95U, 52U, 0U, 0U, 0U },
        4.0,
        1.0,

        { 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0 },
        39.433,

        { 0.6462, -0.0016, -0.0014 },

        { 0.16957823716, 0.05927056736, 0.042674246439999994, 0.05927056736,
          20.1587901812, 0.00011167008, 0.042674246439999994, 0.00011167008,
          20.192713841 },

        { 0.16957823716, 0.05927056736, 0.042674246439999994, 0.0, 0.0552062,
          -0.0630928, 0.05927056736, 20.1587901812, 0.00011167008, -0.0552062,
          0.0, -25.4816046, 0.042674246439999994, 0.00011167008, 20.192713841,
          0.0630928, 25.4816046, 0.0, 0.0, -0.0552062, 0.0630928, 39.433, 0.0,
          0.0, 0.0552062, 0.0, 25.4816046, 0.0, 39.433, 0.0, -0.0630928,
          -25.4816046, 0.0, 0.0, 0.0, 39.433 }
      }, {
        6.0,

        { 108U, 105U, 110U, 107U, 95U, 53U, 0U, 0U, 0U },
        5.0,
        1.0,

        { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0 },
        3.5389,

        { 0.0, -0.0819, -0.119 },

        { 0.081751923929, 0.0, 0.0, 0.0, 0.058014362899999991, -0.03449047329,
          0.0, -0.03449047329, 0.031637561029000005 },

        { 0.081751923929, 0.0, 0.0, 0.0, 0.4211291, -0.28983591, 0.0,
          0.058014362899999991, -0.03449047329, -0.4211291, 0.0, -0.0, 0.0,
          -0.03449047329, 0.031637561029000005, 0.28983591, 0.0, 0.0, 0.0,
          -0.4211291, 0.28983591, 3.5389, 0.0, 0.0, 0.4211291, 0.0, 0.0, 0.0,
          3.5389, 0.0, -0.28983591, -0.0, 0.0, 0.0, 0.0, 3.5389 }
      }, {
        6.0,

        { 108U, 105U, 110U, 107U, 95U, 54U, 0U, 0U, 0U },
        6.0,
        1.0,

        { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0 },
        0.8426,

        { 0.1842, -0.0001, -0.0001 },

        { 0.001400016852, 1.5520692e-5, 1.5520692e-5, 1.5520692e-5,
          0.029289123090000004, -8.426e-9, 1.5520692e-5, -8.426e-9,
          0.029289123090000004 },

        { 0.001400016852, 1.5520692e-5, 1.5520692e-5, 0.0, 8.426000000000001e-5,
          -8.426000000000001e-5, 1.5520692e-5, 0.029289123090000004, -8.426e-9,
          -8.426000000000001e-5, 0.0, -0.15520692, 1.5520692e-5, -8.426e-9,
          0.029289123090000004, 8.426000000000001e-5, 0.15520692, 0.0, 0.0,
          -8.426000000000001e-5, 8.426000000000001e-5, 0.8426, 0.0, 0.0,
          8.426000000000001e-5, 0.0, 0.15520692, 0.0, 0.8426, 0.0,
          -8.426000000000001e-5, -0.15520692, 0.0, 0.0, 0.0, 0.8426 }
      }, {
        5.0,

        { 116U, 111U, 111U, 108U, 48U, 0U, 0U, 0U, 0U },
        7.0,
        0.0,

        { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },
        0.0,

        { 0.0, 0.0, 0.0 },

        { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

        { 0.0, 0.0, 0.0, 0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0, 0.0, 0.0,
          0.0, -0.0, 0.0, 0.0, 0.0, 0.0, -0.0, 0.0, 0.0, 0.0, -0.0, 0.0, 0.0,
          0.0, 0.0, 0.0, 0.0, -0.0, 0.0, 0.0, 0.0, 0.0 }
      } }
    ,

    {
      {
        0U,
        0.0,

        { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U },
        0.0,
        0.0,

        { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
          0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
          0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

        { 0.0, 0.0, 0.0 },

        { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

        { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

        { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
          0.0, 0.0 },

        { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
          0.0, 0.0 }
      }, {
        0U,
        14.0,

        { 98U, 97U, 115U, 101U, 95U, 108U, 105U, 110U, 107U, 45U, 98U, 97U, 115U,
          101U },
        0.0,
        0.0,

        { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
          0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
          0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

        { 0.0, 0.0, 0.0 },

        { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

        { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

        { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
          0.0, 1.0 },

        { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
          0.0, 1.0 }
      }, {
        1U,
        7.0,

        { 106U, 111U, 105U, 110U, 116U, 95U, 49U, 0U, 0U, 0U, 0U, 0U, 0U, 0U },
        1.0,
        1.0,

        { 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
          0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
          0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

        { 0.0, 0.0, 1.0 },

        { -3.141, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.141, 0.0, 0.0, 0.0, 0.0, 0.0,
          0.0 },

        { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

        { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
          0.495, 1.0 },

        { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
          0.0, 1.0 }
      }, {
        1U,
        7.0,

        { 106U, 111U, 105U, 110U, 116U, 95U, 50U, 0U, 0U, 0U, 0U, 0U, 0U, 0U },
        1.0,
        1.0,

        { 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
          0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
          0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

        { 0.0, 1.0, 0.0 },

        { -1.57, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.617, 0.0, 0.0, 0.0, 0.0, 0.0,
          0.0 },

        { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

        { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.175,
          0.0, 0.0, 1.0 },

        { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
          0.0, 1.0 }
      }, {
        1U,
        7.0,

        { 106U, 111U, 105U, 110U, 116U, 95U, 51U, 0U, 0U, 0U, 0U, 0U, 0U, 0U },
        1.0,
        1.0,

        { 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
          0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
          0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

        { 0.0, 1.0, 0.0 },

        { -3.141, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.308, 0.0, 0.0, 0.0, 0.0, 0.0,
          0.0 },

        { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

        { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
          0.9, 1.0 },

        { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
          0.0, 1.0 }
      }, {
        1U,
        7.0,

        { 106U, 111U, 105U, 110U, 116U, 95U, 52U, 0U, 0U, 0U, 0U, 0U, 0U, 0U },
        1.0,
        1.0,

        { 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
          0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
          0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

        { 1.0, 0.0, 0.0 },

        { -6.981, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 6.981, 0.0, 0.0, 0.0, 0.0, 0.0,
          0.0 },

        { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

        { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
          0.175, 1.0 },

        { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
          0.0, 1.0 }
      }, {
        1U,
        7.0,

        { 106U, 111U, 105U, 110U, 116U, 95U, 53U, 0U, 0U, 0U, 0U, 0U, 0U, 0U },
        1.0,
        1.0,

        { 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
          0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
          0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

        { 0.0, 1.0, 0.0 },

        { -2.181, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.094, 0.0, 0.0, 0.0, 0.0, 0.0,
          0.0 },

        { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

        { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.96, 0.0,
          0.0, 1.0 },

        { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
          0.0, 1.0 }
      }, {
        1U,
        7.0,

        { 106U, 111U, 105U, 110U, 116U, 95U, 54U, 0U, 0U, 0U, 0U, 0U, 0U, 0U },
        1.0,
        1.0,

        { 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
          0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
          0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

        { 1.0, 0.0, 0.0 },

        { -6.981, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 6.981, 0.0, 0.0, 0.0, 0.0, 0.0,
          0.0 },

        { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

        { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.135,
          0.0, 0.0, 1.0 },

        { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
          0.0, 1.0 }
      }, {
        0U,
        13.0,

        { 106U, 111U, 105U, 110U, 116U, 95U, 54U, 45U, 116U, 111U, 111U, 108U,
          48U, 0U },
        0.0,
        0.0,

        { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
          0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
          0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

        { 0.0, 0.0, 0.0 },

        { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

        { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

        { 4.8965888601467475e-12, 0.0, -1.0, 0.0, 0.0, 1.0, 0.0, 0.0, 1.0, 0.0,
          4.8965888601467475e-12, 0.0, 0.0, 0.0, 0.0, 1.0 },

        { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
          0.0, 1.0 }
      } }
  }
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
