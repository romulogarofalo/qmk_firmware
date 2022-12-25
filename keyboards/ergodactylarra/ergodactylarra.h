// Copyright 2021 romulogarofalo (@romulogarofalo)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 *
 */
#define LAYOUT(                         \
    k00,k01,k02,k03,k04,k05,                k07,k08,k09,k0A,k0B,k0C,    \
    k10,k11,k12,k13,k14,k15,                k17,k18,k19,k1A,k1B,k1C,    \
    k20,k21,k22,k23,k24,k25,                k28,k29,k2A,k2B,k2C,k2D,    \
    k30,k31,k32,k33,k34,k35,                k37,k38,k39,k3A,k3B,k3C,    \
            k41,k42,k43,k44,                k49,k4A,k4B,k4C,            \
                            k51,k52, k57,k58,                           \
                            K54,k53, k60,K59                            \
    ) \
{ \

    { k00,   k01,   k02, k03, k04, k05,   }, \
    { k10,   k11,   k12, k13, k14, k15,   }, \
    { k20,   k21,   k22, k23, k24, k25,   }, \
    { k30,   k31,   k32, k33, k34, k35,   }, \
    { KC_NO, KC_NO, k42, k43, k44, k45, }, \
    { KC_NO, KC_NO, k53, k54, k51, k52,   }, \

    { k07,   k08,   k09, k0A, k0B,   k0C,   }, \
    { k17,   k18,   k19, k1A, k1B,   k1C,   }, \
    { k27,   k28,   k29, k2A, k2B,   k2C,   }, \
    { k37,   k38,   k39, k3A, k3B,   k3C,   }, \
    { k47,   k48,   k49, k4A, KC_NO, KC_NO,   }, \
    { k58,   k57,   k59, k5C, KC_NO, KC_NO,   }, \

}



