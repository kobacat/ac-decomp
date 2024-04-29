#ifndef AUDIO_DEFS_H
#define AUDIO_DEFS_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif

#define VOICE_MODE_ANIMALESE 0
#define VOICE_MODE_CLICK 1
#define VOICE_MODE_SILENT 2

/* audio is monophonic */
#define MONO(id) (id | 0x1000)
#define SE_FLAG_15(id) (id | 0x8000)

// TODO: Make the rest of Sound Effects with parameters
#define SE_REGISTER MONO(0x50)

typedef enum audio_sound_effects {
    NA_SE_START,
    NA_SE_CURSOL,
    NA_SE_MENU_EXIT,

    NA_SE_ZOOMUP = 4,
    NA_SE_ZOOMDOWN_SHORT,

    NA_SE_PAGE_OKURI = 0xB,

    NA_SE_SENTAKU_OPEN,
    NA_SE_SENTAKU_KETTEI,

    NA_SE_ZOOMDOWN_LONG = 0x15,
    NA_SE_LIGHT_ON,
    NA_SE_LIGHT_OFF,

    NA_SE_25 = 0x25,

    NA_SE_DRAWER_SHUT = 0x3A,

    NA_SE_ITEM_GET = 0x40,
    NA_SE_ITEM_HORIDASHI = 0x47,

    NA_SE_MONEY0 = 0x49,
    NA_SE_MONEY1,
    NA_SE_MONEY2,
    NA_SE_COIN,

    NA_SE_52 = 0x52,

    NA_SE_BIRTH_FTR = 0x57,
    NA_SE_CLEAN_UP_FTR = 0x58,

    NA_SE_TOOL_FURI = 0x5A, // swing?
    NA_SE_AMI_HIT = 0x5C,
    NA_SE_TOOL_GET,

    NA_SE_60 = 0x60,

    NA_SE_GASAGOSO = 0x69,

    NA_SE_TOILE_CHAIR_STANDUP = 0x72,

    NA_SE_TOOL_BROKEN1 = 0x74,
    NA_SE_TOOL_BROKEN2,
    NA_SE_TOOL_BROKEN3,

    NA_SE_STONECOIN_ROLL = 0x7D,
    NA_SE_STONECOIN_DRAG = 0x7E,

    NA_SE_ROD_STROKE = 0x109,
    NA_SE_ROD_BACK,

    NA_SE_WEAR = 0x11C,

    NA_SE_SCOOP1 = 0x11E,

    NA_SE_SCOOP_UMERU = 0x120,
    NA_SE_SCOOP_HIT,

    NA_SE_TREE_TOUCH = 0x134,
    NA_SE_TREE_YURASU,

    NA_SE_KIRIBASU_SCOOP = 0x148,
    NA_SE_KIRIBASU_OUT,

    NA_SE_SOUND_KNOCK,

    NA_SE_ARAIIKI_BOY = 0x158,
    NA_SE_ARAIIKI_GIRL = 0x15A,

    NA_SE_ZASSOU_NUKU = 0x15F,
    NA_SE_HACHI_SASARERU,

    NA_SE_166 = 0x166,
    NA_SE_UCHIWA = 0x167,
    NA_SE_LAWNMOWER = 0x177,

    NA_SE_SCOOP_SHIGEMI = 0x401,

    NA_SE_CAMERA_MOVE1 = 0x40D,
    NA_SE_CAMERA_MOVE2,

    NA_SE_TOILE_CHAIR_SIT = 0x410,

    NA_SE_BED_IN = 0x415,
    NA_SE_BED_NEGAERI,
    NA_SE_BED_OUT,

    NA_SE_ROTATE = 0x41A,

    NA_SE_41C = 0x41C,

    NA_SE_SOFT_CHAIR_SIT = 0x41F,
    NA_SE_HARD_CHAIR_SIT,
    NA_SE_BUBU_CHAIR_SIT,
    NA_SE_SOFT_CHAIR_STANDUP,
    NA_SE_HARD_CHAIR_STANDUP,

    NA_SE_BUBU_CHAIR_STANDUP = 0x429,
    NA_SE_FTR_DOOR_OPEN = 0x42C,
    NA_SE_FTR_DOOR_CLOSE = 0x42D,
    NA_SE_DRAWER_OPEN = 0x42E,
    NA_SE_DRAWER_CLOSE = 0x42F,
    NA_SE_DAI_UE_KAKUNOU = 0x430,

    NA_SE_UMBRELLA_ROTATE = 0x432,

    NA_SE_JUMP,
    NA_SE_LANDING,

    NA_SE_KARABURI = 0x43A,

    NA_SE_ROD_STROKE_SMALL = 0x445,

    NA_SE_SCOOP_TREE_HIT = 0x448,
    NA_SE_SCOOP_ITEM_HIT,
    NA_SE_AXE_BALL_HIT,

    NA_SE_COIN_GASAGOSO = 0x465,

} AudioSE;

typedef enum bgm_e {
    BGM_AEROBICS = 27,
    BGM_MD0 = 128,
} BGM_e;

#ifdef __cplusplus
}
#endif

#endif
