static const u16 sTilesetPalOverride_General03[] = INCBIN_U16("data/tilesets/primary/poke_charlot_general/override_palettes/03.gbapal");

static const u16 sTilesetPalOverride_General02[] = INCBIN_U16("data/tilesets/primary/poke_charlot_general/override_palettes/02.gbapal");

static const u16 sTilesetPalOverride_Petalburg06_08[] = INCBIN_U16("data/tilesets/secondary/petalburg/override_palettes/06_08.gbapal");

static const u16 sTilesetPalOverride_Rustboro06_08[] = INCBIN_U16("data/tilesets/secondary/rustboro/override_palettes/06_08.gbapal");

static const u16 sTilesetPalOverride_PalletTown03[] = INCBIN_U16("data/tilesets/secondary/poke_charlot_pallet_town/override_palettes/03.gbapal");

static const u16 sTilesetPalOverride_PalletTown08[] = INCBIN_U16("data/tilesets/secondary/poke_charlot_pallet_town/override_palettes/08.gbapal");

static const u16 sTilesetPalOverride_PalletTown09[] = INCBIN_U16("data/tilesets/secondary/poke_charlot_pallet_town/override_palettes/09.gbapal");

static const u16 sTilesetPalOverride_PalletTown10[] = INCBIN_U16("data/tilesets/secondary/poke_charlot_pallet_town/override_palettes/10.gbapal");

#define OVERRIDES_END { .slot = 0xFF, }

const struct PaletteOverride gTilesetPalOverrides_General[] =
{
    {
        .slot = 3,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = sTilesetPalOverride_General03,
    },
    {
        .slot = 2,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = sTilesetPalOverride_General02,
    },
    OVERRIDES_END
};

const struct PaletteOverride gTilesetPalOverrides_Petalburg[] =
{
    {
        .slot = 6,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = sTilesetPalOverride_Petalburg06_08,
    },
    {
        .slot = 8,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = sTilesetPalOverride_Petalburg06_08,
    },
    OVERRIDES_END
};

const struct PaletteOverride gTilesetPalOverride_Rustboro06_08[] =
{
    {
        .slot = 6,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = sTilesetPalOverride_Rustboro06_08,
    },
    {
        .slot = 8,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = sTilesetPalOverride_Rustboro06_08,
    },
    OVERRIDES_END
};

const struct PaletteOverride gTilesetPalOverride_PalletTown[] =
{
    {
        .slot = 3,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = sTilesetPalOverride_PalletTown03,
    },
    {
        .slot = 8,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = sTilesetPalOverride_PalletTown08,
    },
    {
        .slot = 9,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = sTilesetPalOverride_PalletTown09,
    },
    {
        .slot = 10,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = sTilesetPalOverride_PalletTown10,
    },
    OVERRIDES_END
};
