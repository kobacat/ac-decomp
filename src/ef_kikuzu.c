#include "ef_effect_control.h"

static void eKikuzu_init(xyz_t pos, int prio, s16 angle, GAME* game, u16 item_name, s16 arg0, s16 arg1);
static void eKikuzu_ct(eEC_Effect_c* effect, GAME* game, void* ct_arg);
static void eKikuzu_mv(eEC_Effect_c* effect, GAME* game);
static void eKikuzu_dw(eEC_Effect_c* effect, GAME* game);

eEC_PROFILE_c iam_ef_kikuzu = {
    // clang-format off
    &eKikuzu_init,
    &eKikuzu_ct,
    &eKikuzu_mv,
    &eKikuzu_dw,
    eEC_IGNORE_DEATH,
    eEC_NO_CHILD_ID,
    eEC_DEFAULT_DEATH_DIST,
    // clang-format on
};

static void eKikuzu_init(xyz_t pos, int prio, s16 angle, GAME* game, u16 item_name, s16 arg0, s16 arg1) {
    // TODO
}

static void eKikuzu_ct(eEC_Effect_c* effect, GAME* game, void* ct_arg) {
    // TODO
}

static void eKikuzu_mv(eEC_Effect_c* effect, GAME* game) {
    // TODO
}

static void eKikuzu_dw(eEC_Effect_c* effect, GAME* game) {
    // TODO
}
