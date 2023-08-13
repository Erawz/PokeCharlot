static const u8 sDummyDesc[] = _(
    "?????");

// Poké Balls
static const u8 sPokeBallDesc[] = _(
    "Un objet qui permet\n"
    "d'attraper les\n"
    "Pokémon sauvages.");

static const u8 sGreatBallDesc[] = _(
    "BALL au taux de\n"
    "réussite supérieur\n"
    "à la POKé BALL.");

static const u8 sUltraBallDesc[] = _(
    "BALL au taux de\n"
    "réussite supérieur\n"
    "à la SUPER BALL.");

static const u8 sMasterBallDesc[] = _(
    "La meilleure BALL.\n"
    "Capture le POKéMON\n"
    "à coup sûr.");

static const u8 sPremierBallDesc[] = _(
    "Une BALL rare créée\n"
    "à l’occasion d’un\n"
    "grand évènement.");

static const u8 sHealBallDesc[] = _(
    "A remedial Ball\n"
    "that restores\n"
    "caught Pokémon.");

static const u8 sNetBallDesc[] = _(
    "Une BALL qui marche\n"
    "bien sur un POKéMON\n"
    "EAU ou INSECTE.");

static const u8 sNestBallDesc[] = _(
    "Une BALL qui marche\n"
    "mieux avec les\n"
    "POKéMON faibles.");

static const u8 sDiveBallDesc[] = _(
    "Une BALL qui marche\n"
    "mieux avec les\n"
    "{PKMN} sous-marins.");

static const u8 sDuskBallDesc[] = _(
    "Works well if\n"
    "used in a\n"
    "dark place.");

static const u8 sTimerBallDesc[] = _(
    "Plus efficace\n"
    "pendant les\n"
    "combats longs.");

static const u8 sQuickBallDesc[] = _(
    "Works well if\n"
    "used on the\n"
    "first turn.");

static const u8 sRepeatBallDesc[] = _(
    "Une BALL qui marche\n"
    "bien sur un POKéMON\n"
    "déjà capturé.");

static const u8 sLuxuryBallDesc[] = _(
    "Une BALL confor-\n"
    "table qui rend les\n"
    "POKéMON amicaux.");

static const u8 sLevelBallDesc[] = _(
    "A Ball that works\n"
    "well on lower\n"
    "level Pokémon.");

static const u8 sLureBallDesc[] = _(
    "A Ball that works\n"
    "well on fished\n"
    "up Pokémon.");

static const u8 sMoonBallDesc[] = _(
    "A Ball that works\n"
    "well on Moon\n"
    "Stone users.");

static const u8 sFriendBallDesc[] = _(
    "A Ball that makes\n"
    "a Pokémon friendly\n"
    "when caught.");

static const u8 sLoveBallDesc[] = _(
    "Works well on\n"
    "Pokémon of the\n"
    "opposite gender.");

static const u8 sFastBallDesc[] = _(
    "Works well on\n"
    "very fast\n"
    "Pokémon.");

static const u8 sHeavyBallDesc[] = _(
    "Works well on\n"
    "very heavy\n"
    "Pokémon.");

static const u8 sDreamBallDesc[] = _(
#if B_DREAM_BALL_MODIFIER >= GEN_8
    "A Ball that works\n"
    "well on sleeping\n"
    "Pokémon.");
#else
    "A Poké Ball used in\n"
    "the Entree Forest.");
#endif

static const u8 sSafariBallDesc[] = _(
    "Une BALL spéciale\n"
    "utilisée juste\n"
    "au PARC SAFARI.");

static const u8 sSportBallDesc[] = _(
    "A special Ball used\n"
    "in the Bug-Catching\n"
    "Contest.");

static const u8 sParkBallDesc[] = _(
    "A special Ball for\n"
    "the Pal Park.");

static const u8 sBeastBallDesc[] = _(
    "A Ball designed to\n"
    "catch Ultra Beasts.");

static const u8 sCherishBallDesc[] = _(
    "A rare Ball made\n"
    "in commemoration\n"
    "of some event.");

// Medicine
static const u8 sPotionDesc[] = _(
    "Restaure les PV\n"
    "d’un POKéMON\n"
    "de 20 points.");

static const u8 sSuperPotionDesc[] = _(
    "Restaure les PV\n"
    "d’un POKéMON de\n"
#if I_HEALTH_RECOVERY >= GEN_7
    "60 points.");
#else
    "50 points.");
#endif

static const u8 sHyperPotionDesc[] = _(
    "Restaure les PV\n"
    "d’un POKéMON de\n"
#if I_HEALTH_RECOVERY >= GEN_7
    "120 points.");
#else
    "200 points.");
#endif

static const u8 sMaxPotionDesc[] = _(
    "Restaure tous les\n"
    "PV d’un POKéMON.");

static const u8 sFullRestoreDesc[] = _(
    "Restaure tous les\n"
    "PV et le statut\n"
    "d’un POKéMON.");

static const u8 sReviveDesc[] = _(
    "Réanime un POKéMON\n"
    "K.O. et restaure la\n"
    "moitié de ses PV.");

static const u8 sMaxReviveDesc[] = _(
    "Réanime un POKéMON\n"
    "K.O. et restaure\n"
    "tous ses PV.");

static const u8 sFreshWaterDesc[] = _(
    "Une eau minérale\n"
    "qui restaure les PV de\n."
#if I_HEALTH_RECOVERY >= GEN_7
    "30 points.");
#else
    "50 points.");
#endif

static const u8 sSodaPopDesc[] = _(
    "Une boisson\n"
    "pétillante qui\n"
    "restaure les PV\n"
#if I_HEALTH_RECOVERY >= GEN_7
    "de 50 points.");
#else
    "de 60 points.");
#endif

static const u8 sLemonadeDesc[] = _(
    "Une boisson très\n"
    "sucrée qui\n"
    "restaure les PV\n"
#if I_HEALTH_RECOVERY >= GEN_7
    "de 70 points.");
#else
    "de 80 points.");
#endif

static const u8 sMoomooMilkDesc[] = _(
    "Un lait nourrissant\n"
    "qui restaure les PV\n"
    "de 100 points.");

static const u8 sEnergyPowderDesc[] = _(
    "Une poudre amère\n"
    "qui restaure les PV\n"
#if I_HEALTH_RECOVERY >= GEN_7
    "de 60 points.");
#else
    "de 50 points.");
#endif

static const u8 sEnergyRootDesc[] = _(
    "Une racine amère\n"
    "qui restaure les PV\n"
#if I_HEALTH_RECOVERY >= GEN_7
    "de 120 points.");
#else
    "de 200 points.");
#endif

static const u8 sHealPowderDesc[] = _(
    "Une poudre amère\n"
    "soignant les chan-\n"
    "gements de statut.");

static const u8 sRevivalHerbDesc[] = _(
    "Une herbe très\n"
    "amère qui réanime\n"
    "un POKéMON K.O.");

static const u8 sAntidoteDesc[] = _(
    "Soigne les POKéMON\n"
    "empoisonnés.");

static const u8 sParalyzeHealDesc[] = _(
    "Soigne les POKéMON\n"
    "paralysés.");

static const u8 sBurnHealDesc[] = _(
    "Soigne les POKéMON\n"
    "de leurs brûlures.");

static const u8 sIceHealDesc[] = _(
    "Décongèle les\n"
    "POKéMON gelés.");

static const u8 sAwakeningDesc[] = _(
    "Réveille les\n"
    "POKéMON endormis.");

static const u8 sFullHealDesc[] = _(
    "Soigne les change-\n"
    "ments de statut \n"
    "d’un POKéMON.");

static const u8 sEtherDesc[] = _(
    "Restaure 10 PP\n"
    "d’une attaque\n"
    "sélectionnée.");

static const u8 sMaxEtherDesc[] = _(
    "Restaure tous les\n"
    "PP d’une attaque\n"
    "sélectionnée.");

static const u8 sElixirDesc[] = _(
    "Restaure 10 PP\n"
    "de toutes les\n"
    "attaques.");

static const u8 sMaxElixirDesc[] = _(
    "Restaure tous les\n"
    "PP de toutes les\n"
    "attaques.");

static const u8 sBerryJuiceDesc[] = _(
    "Une boisson 100%\n"
    "pur jus qui\n"
    "restaure 20 PV.");

static const u8 sSacredAshDesc[] = _(
    "Réanime tous les\n"
    "POKéMON K.O. et\n"
    "restaure leurs PV.");

static const u8 sSweetHeartDesc[] = _(
    "Un chocolat sucré\n"
    "qui restaure les PV\n"
    "de 20 points.");

static const u8 sMaxHoneyDesc[] = _(
    "Revives a fainted\n"
    "Pokémon with all\n"
    "its HP.");

static const u8 sPewterCrunchiesDesc[] = _(
    "Heals all the\n"
    "status problems of\n"
    "one Pokémon.");

static const u8 sRageCandyBarDesc[] = _(
    "Heals all the\n"
    "status problems of\n"
    "one Pokémon.");

static const u8 sLavaCookieDesc[] = _(
    "Spécialité locale\n"
    "soignant les chan-\n"
    "gements de statut.");

static const u8 sOldGateauDesc[] = _(
    "Heals all the\n"
    "status problems of\n"
    "one Pokémon.");

static const u8 sCasteliaconeDesc[] = _(
    "Heals all the\n"
    "status problems of\n"
    "one Pokémon.");

static const u8 sLumioseGaletteDesc[] = _(
    "Heals all the\n"
    "status problems of\n"
    "one Pokémon.");

static const u8 sShalourSableDesc[] = _(
    "Heals all the\n"
    "status problems of\n"
    "one Pokémon.");

static const u8 sBigMalasadaDesc[] = _(
    "Heals all the\n"
    "status problems of\n"
    "one Pokémon.");

// Vitamins
static const u8 sHPUpDesc[] = _(
    "Monte les PV d’un\n"
    "POKéMON.");

static const u8 sProteinDesc[] = _(
    "Monte l’ATTAQUE\n"
    "d’un POKéMON.");

static const u8 sIronDesc[] = _(
    "Monte la DEFENSE\n"
    "d’un POKéMON.");

static const u8 sCalciumDesc[] = _(
    "Monte l’ATQ. SPE.\n"
    "d’un POKéMON.");

static const u8 sZincDesc[] = _(
    "Monte la DEF. SPE.\n"
    "d’un POKéMON.");

static const u8 sCarbosDesc[] = _(
    "Monte la VITESSE\n"
    "d’un POKéMON.");

static const u8 sPPUpDesc[] = _(
    "Monte les PP max.\n"
    "d’une attaque\n"
    "sélectionnée.");

static const u8 sPPMaxDesc[] = _(
    "Monte les PP d’une\n"
    "attaque à son\n"
    "maximum.");

// EV Feathers
static const u8 sHealthFeatherDesc[] = _(
    "An item that raises\n"
    "the base HP of\n"
    "a Pokémon.");

static const u8 sMuscleFeatherDesc[] = _(
    "An item that raises\n"
    "the base Attack of\n"
    "a Pokémon.");

static const u8 sResistFeatherDesc[] = _(
    "An item that raises\n"
    "the base Defense\n"
    "of a Pokémon.");

static const u8 sGeniusFeatherDesc[] = _(
    "An item that raises\n"
    "the base Sp. Atk.\n"
    "of a Pokémon.");

static const u8 sCleverFeatherDesc[] = _(
    "An item that raises\n"
    "the base Sp. Def.\n"
    "of a Pokémon.");

static const u8 sSwiftFeatherDesc[] = _(
    "An item that raises\n"
    "the base Speed of\n"
    "a Pokémon.");

// Ability Modifiers
static const u8 sAbilityCapsuleDesc[] = _(
    "Switches a Poké-\n"
    "mon's ability.");

static const u8 sAbilityPatchDesc[] = _(
    "Turns the ability\n"
    "of a Pokémon into\n"
    "a rare ability.");

// Mints
static const u8 sLonelyMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Attack, but\n"
    "reduces Defense.");

static const u8 sAdamantMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Attack, but\n"
    "reduces Sp. Atk.");

static const u8 sNaughtyMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Attack, but\n"
    "reduces Sp. Def.");

static const u8 sBraveMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Attack, but\n"
    "reduces Speed.");

static const u8 sBoldMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Defense, but\n"
    "reduces Attack.");

static const u8 sImpishMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Defense, but\n"
    "reduces Sp. Atk.");

static const u8 sLaxMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Defense, but\n"
    "reduces Sp. Def.");

static const u8 sRelaxedMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Defense, but\n"
    "reduces Speed.");

static const u8 sModestMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Sp. Atk, but\n"
    "reduces Attack.");

static const u8 sMildMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Sp. Atk, but\n"
    "reduces Defense.");

static const u8 sRashMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Sp. Atk, but\n"
    "reduces Sp. Def.");

static const u8 sQuietMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Sp. Atk, but\n"
    "reduces Speed.");

static const u8 sCalmMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Sp. Def, but\n"
    "reduces Attack.");

static const u8 sGentleMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Sp. Def, but\n"
    "reduces Defense.");

static const u8 sCarefulMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Sp. Def, but\n"
    "reduces Sp. Atk.");

static const u8 sSassyMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Sp. Def, but\n"
    "reduces Speed.");

static const u8 sTimidMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Speed, but\n"
    "reduces Attack.");

static const u8 sHastyMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Speed, but\n"
    "reduces Defense.");

static const u8 sJollyMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Speed, but\n"
    "reduces Sp. Atk.");

static const u8 sNaiveMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Speed, but\n"
    "reduces Sp. Def.");

static const u8 sSeriousMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Speed, but\n"
    "reduces Attack.");

// Candy
static const u8 sRareCandyDesc[] = _(
    "Fait progresser un\n"
    "POKéMON d’un\n"
    "niveau.");

static const u8 sExpCandyXSDesc[] = _(
    "Gives a very small\n"
    "amount of Exp. to\n"
    "a single Pokémon.");

static const u8 sExpCandySDesc[] = _(
    "Gives a small\n"
    "amount of Exp. to\n"
    "a single Pokémon.");

static const u8 sExpCandyMDesc[] = _(
    "Gives a moderate\n"
    "amount of Exp. to\n"
    "a single Pokémon.");

static const u8 sExpCandyLDesc[] = _(
    "Gives a large\n"
    "amount of Exp. to\n"
    "a single Pokémon.");

static const u8 sExpCandyXLDesc[] = _(
    "Gives a very large\n"
    "amount of Exp. to\n"
    "a single Pokémon.");

static const u8 sDynamaxCandyDesc[] = _(
    "Raises the Dynamax\n"
    "Level of a single\n"
    "Pokémon by one.");

// Medicinal Flutes
static const u8 sBlueFluteDesc[] = _(
    "Une flûte en verre\n"
    "qui réveille les\n"
    "POKéMON endormis.");

static const u8 sYellowFluteDesc[] = _(
    "Une flûte en verre\n"
    "qui sort un POKéMON\n"
    "de sa confusion.");

static const u8 sRedFluteDesc[] = _(
    "Une flûte en verre\n"
    "qui met fin à\n"
    "l’attirance.");

// Encounter-modifying Flutes
static const u8 sBlackFluteDesc[] = _(
    "Une flûte en verre\n"
    "qui repousse les\n"
    "POKéMON sauvages.");

static const u8 sWhiteFluteDesc[] = _(
    "Une flûte en verre\n"
    "qui attire les\n"
    "POKéMON sauvages.");

// Encounter Modifiers
static const u8 sRepelDesc[] = _(
    "Repousse les {PKMN}\n"
    "sauvages faibles \n"
    "durant 100 pas.");

static const u8 sSuperRepelDesc[] = _(
    "Repousse les {PKMN}\n"
    "sauvages faibles \n"
    "durant 200 pas.");

static const u8 sMaxRepelDesc[] = _(
    "Repousse les {PKMN}\n"
    "sauvages faibles \n"
    "durant 250 pas.");

static const u8 sLureDesc[] = _(
    "Makes Pokémon more\n"
    "likely to appear\n"
    "for 100 steps.");

static const u8 sSuperLureDesc[] = _(
    "Makes Pokémon more\n"
    "likely to appear\n"
    "for 200 steps.");

static const u8 sMaxLureDesc[] = _(
    "Makes Pokémon more\n"
    "likely to appear\n"
    "for 250 steps.");

static const u8 sEscapeRopeDesc[] = _(
    "Pour sortir rapide-\n"
    "ment d’une grotte\n"
    "ou d’un souterrain.");

// Battle items
static const u8 sXAttackDesc[] = _(
#if B_X_ITEMS_BUFF >= GEN_7
    "Monte l’ATTAQUE\n"
    "pendant un combat.");
#else
    "Monte l’ATTAQUE\n"
    "pendant un combat.");
#endif

static const u8 sXDefenseDesc[] = _(
#if B_X_ITEMS_BUFF >= GEN_7
    "Monte la DEFENSE\n"
    "pendant un combat.");
#else
    "Monte la DEFENSE\n"
    "pendant un combat.");
#endif

static const u8 sXSpAtkDesc[] = _(
#if B_X_ITEMS_BUFF >= GEN_7
    "Monte la VITESSE\n"
    "pendant un combat.");
#else
    "Monte la VITESSE\n"
    "pendant un combat.");
#endif

static const u8 sXSpDefDesc[] = _(
#if B_X_ITEMS_BUFF >= GEN_7
    "Monte la DEFENSE\n"
    "pendant un combat.");
#else
    "Monte la DEFENSE\n"
    "pendant un combat.");
#endif

static const u8 sXSpeedDesc[] = _(
#if B_X_ITEMS_BUFF >= GEN_7
    "Monte la VITESSE\n"
    "pendant un combat.");
#else
    "Monte la VITESSE\n"
    "pendant un combat.");
#endif

static const u8 sXAccuracyDesc[] = _(
#if B_X_ITEMS_BUFF >= GEN_7
    "Monte la précision\n"
    "des attaques\n"
    "pendant un combat.");
#else
    "Monte la précision\n"
    "des attaques\n"
    "pendant un combat.");
#endif

static const u8 sDireHitDesc[] = _(
    "Raises the\n"
    "critical-hit ratio\n"
    "during one battle.");

static const u8 sGuardSpecDesc[] = _(
    "Prevents stat\n"
    "reduction when\n"
    "used in battle.");

// Escape Items
static const u8 sPokeDollDesc[] = _(
    "Pour s’enfuir d’un\n"
    "combat contre un\n"
    "POKéMON sauvage.");

static const u8 sFluffyTailDesc[] = _(
    "Pour s’enfuir d’un\n"
    "combat contre un\n"
    "POKéMON sauvage.");

static const u8 sPokeToyDesc[] = _(
    "Use to flee from\n"
    "any battle with\n"
    "a wild Pokémon.");

static const u8 sMaxMushroomsDesc[] = _(
    "Raises every stat\n"
    "during one battle\n"
    "by one stage.");

// Treasures
static const u8 sBottleCapDesc[] = _(
    "A beautiful bottle\n"
    "cap that gives off\n"
    "a silver gleam.");

static const u8 sGoldBottleCapDesc[] = _(
    "A beautiful bottle\n"
    "cap that gives off\n"
    "a golden gleam.");

static const u8 sNuggetDesc[] = _(
    "Pépite d’or pur.\n"
    "Peut être vendue\n"
    "à bon prix.");

static const u8 sBigNuggetDesc[] = _(
    "A big nugget made\n"
    "of gold, sellable\n"
    "at a high price.");

static const u8 sTinyMushroomDesc[] = _(
    "Un champignon or-\n"
    "dinaire. Peut être\n"
    "vendu à bas prix.");

static const u8 sBigMushroomDesc[] = _(
    "Un champignon rare.\n"
    "Peut être vendu\n"
    "à bon prix.");

static const u8 sBalmMushroomDesc[] = _(
    "A rare mushroom\n"
    "that would sell at a\n"
    "high price.");

static const u8 sPearlDesc[] = _(
    "Une jolie perle.\n"
    "Peut être vendue\n"
    "à bas prix.");

static const u8 sBigPearlDesc[] = _(
    "Une perle magni-\n"
    "fique. Peut être\n"
    "vendue à bon prix.");

static const u8 sPearlStringDesc[] = _(
    "Very large pearls\n"
    "that would sell at a\n"
    "high price.");

static const u8 sStardustDesc[] = _(
    "Sable rouge très\n"
    "fin. Peut être\n"
    "vendu à bon prix.");

static const u8 sStarPieceDesc[] = _(
    "Fragment de gemme\n"
    "rouge. Peut se ven-\n"
    "dre à très bon prix.");

static const u8 sCometShardDesc[] = _(
    "A comet's shard.\n"
    "It would sell for a\n"
    "high price.");

static const u8 sShoalSaltDesc[] = _(
    "Sel obtenu dans les\n"
    "profondeurs de la\n"
    "GROTTE TREFONDS.");

static const u8 sShoalShellDesc[] = _(
    "Coquillage trouvé\n"
    "au fin fond de la\n"
    "GROTTE TREFONDS.");

static const u8 sRedShardDesc[] = _(
    "Fragment d’objet\n"
    "antique. Peut être\n"
    "vendu à bas prix.");

static const u8 sBlueShardDesc[] = _(
    "Fragment d’objet\n"
    "antique. Peut être\n"
    "vendu à bas prix.");

static const u8 sYellowShardDesc[] = _(
    "Fragment d’objet\n"
    "antique. Peut être\n"
    "vendu à bas prix.");

static const u8 sGreenShardDesc[] = _(
    "Fragment d’objet\n"
    "antique. Peut être\n"
    "vendu à bas prix.");

static const u8 sHeartScaleDesc[] = _(
    "Une jolie écaille\n"
    "convoitée par les\n"
    "collectionneurs.");

static const u8 sHoneyDesc[] = _(
    "Sweet honey that\n"
    "attracts wild\n"
    "Pokémon when used.");

static const u8 sRareBoneDesc[] = _(
    "A very rare bone.\n"
    "It can be sold at\n"
    "a high price.");

static const u8 sOddKeystoneDesc[] = _(
    "Voices can be heard\n"
    "from this odd stone\n"
    "occasionally.");

static const u8 sPrettyFeatherDesc[] = _(
    "A beautiful yet\n"
    "plain feather that\n"
    "does nothing.");

static const u8 sRelicCopperDesc[] = _(
    "A copper coin used\n"
    "long ago. It sells\n"
    "at a high price.");

static const u8 sRelicSilverDesc[] = _(
    "A silver coin used\n"
    "long ago. It sells\n"
    "at a high price.");

static const u8 sRelicGoldDesc[] = _(
    "A gold coin used\n"
    "long ago. It sells\n"
    "at a high price.");

static const u8 sRelicVaseDesc[] = _(
    "A vase made long\n"
    "ago. It sells at\n"
    "a high price.");

static const u8 sRelicBandDesc[] = _(
    "An old bracelet.\n"
    "It sells at a\n"
    "high price.");

static const u8 sRelicStatueDesc[] = _(
    "An old statue.\n"
    "It sells at a\n"
    "high price.");

static const u8 sRelicCrownDesc[] = _(
    "An old crown.\n"
    "It sells at a\n"
    "high price.");

static const u8 sStrangeSouvenirDesc[] = _(
    "An ornament that\n"
    "depicts a Pokémon\n"
    "from Alola.");

// Fossils
static const u8 sHelixFossilDesc[] = _(
    "Un fossile d’un\n"
    "ancien POKéMON\n"
    "aquatique.");

static const u8 sDomeFossilDesc[] = _(
    "Un fossile d’un\n"
    "ancien POKéMON\n"
    "aquatique.");

static const u8 sOldAmberDesc[] = _(
    "Une pierre\n"
    "contenant l’ADN\n"
    "d’un ancien {PKMN}.");

static const u8 sRootFossilDesc[] = _(
    "Fossile d’un très\n"
    "vieux POKéMON\n"
    "sous-marin.");

static const u8 sClawFossilDesc[] = _(
    "Fossile d’un très\n"
    "vieux POKéMON\n"
    "sous-marin.");

static const u8 sArmorFossilDesc[] = _(
    "A piece of a\n"
    "prehistoric Poké-\n"
    "mon's head.");

static const u8 sSkullFossilDesc[] = _(
    "A piece of a\n"
    "prehistoric Poké-\n"
    "mon's head.");

static const u8 sCoverFossilDesc[] = _(
    "A piece of a\n"
    "prehistoric Poké-\n"
    "mon's back.");

static const u8 sPlumeFossilDesc[] = _(
    "A piece of a\n"
    "prehistoric Poké-\n"
    "mon's wing.");

static const u8 sJawFossilDesc[] = _(
    "A piece of a prehis-\n"
    "toric Pokémon's\n"
    "large jaw.");

static const u8 sSailFossilDesc[] = _(
    "A piece of a prehis-\n"
    "toric Pokémon's\n"
    "skin sail.");

static const u8 sFossilizedBirdDesc[] = _(
    "A fossil of an\n"
    "ancient, sky-\n"
    "soaring Pokémon.");

static const u8 sFossilizedFishDesc[] = _(
    "A fossil of an\n"
    "ancient, sea-\n"
    "dwelling Pokémon.");

static const u8 sFossilizedDrakeDesc[] = _(
    "A fossil of an\n"
    "ancient, land-\n"
    "roaming Pokémon.");

static const u8 sFossilizedDinoDesc[] = _(
    "A fossil of an\n"
    "ancient, sea-\n"
    "dwelling Pokémon.");

// Mulch
static const u8 sGrowthMulchDesc[] = _(
    "A fertilizer that\n"
    "accelerates the\n"
    "growth of Berries.");

static const u8 sDampMulchDesc[] = _(
    "A fertilizer that\n"
    "decelerates the\n"
    "growth of Berries.");

static const u8 sStableMulchDesc[] = _(
    "A fertilizer that\n"
    "ups the life time\n"
    "of Berry trees.");

static const u8 sGooeyMulchDesc[] = _(
    "A fertilizer that\n"
    "makes more Berries\n"
    "regrow after fall.");

static const u8 sRichMulchDesc[] = _(
    "A fertilizer that\n"
    "ups the number of\n"
    "Berries harvested.");

static const u8 sSurpriseMulchDesc[] = _(
    "A fertilizer that\n"
    "ups the chance of\n"
    "Berry mutations.");

static const u8 sBoostMulchDesc[] = _(
    "A fertilizer that\n"
    "ups the dry speed\n"
    "of soft soil.");

static const u8 sAmazeMulchDesc[] = _(
    "A fertilizer Rich\n"
    "Surprising and\n"
    "Boosting as well.");

// Apricorns
static const u8 sRedApricornDesc[] = _(
    "A red apricorn.\n"
    "It assails your\n"
    "nostrils.");

static const u8 sBlueApricornDesc[] = _(
    "A blue apricorn.\n"
    "It smells a bit\n"
    "like grass.");

static const u8 sYellowApricornDesc[] = _(
    "A yellow apricorn.\n"
    "It has an invigor-\n"
    "ating scent.");

static const u8 sGreenApricornDesc[] = _(
    "A green apricorn.\n"
    "It has a strange,\n"
    "aromatic scent.");

static const u8 sPinkApricornDesc[] = _(
    "A pink apricorn.\n"
    "It has a nice,\n"
    "sweet scent.");

static const u8 sWhiteApricornDesc[] = _(
    "A white apricorn.\n"
    "It doesn't smell\n"
    "like anything.");

static const u8 sBlackApricornDesc[] = _(
    "A black apricorn.\n"
    "It has an inde-\n"
    "scribable scent.");

static const u8 sWishingPieceDesc[] = _(
    "Throw into a\n"
    "{PKMN} Den to attract\n"
    "Dynamax Pokémon.");

static const u8 sGalaricaTwigDesc[] = _(
    "A twig from a tree\n"
    "in Galar called\n"
    "Galarica.");

static const u8 sArmoriteOreDesc[] = _(
    "A rare ore. Can be\n"
    "found in the Isle\n"
    "of Armor at Galar.");

static const u8 sDyniteOreDesc[] = _(
    "A mysterious ore.\n"
    "It can be found in\n"
    "Galar's Max Lair.");

// Mail
static const u8 sOrangeMailDesc[] = _(
    "Papier ZIGZATON\n"
    "pouvant être tenu\n"
    "par un POKéMON.");

static const u8 sHarborMailDesc[] = _(
    "Papier GOELISE\n"
    "pouvant être tenu\n"
    "par un POKéMON.");

static const u8 sGlitterMailDesc[] = _(
    "Papier PIKACHU\n"
    "pouvant être tenu\n"
    "par un POKéMON.");

static const u8 sMechMailDesc[] = _(
    "Papier MAGNETI\n"
    "pouvant être tenu\n"
    "par un POKéMON.");

static const u8 sWoodMailDesc[] = _(
    "Papier PARECOOL\n"
    "pouvant être tenu\n"
    "par un POKéMON.");

static const u8 sWaveMailDesc[] = _(
    "Papier WAILMER\n"
    "pouvant être tenu\n"
    "par un POKéMON.");

static const u8 sBeadMailDesc[] = _(
    "Du papier avec un\n"
    "dessin du POKéMON\n"
    "qui le tient.");

static const u8 sShadowMailDesc[] = _(
    "Papier SKELENOX\n"
    "pouvant être tenu\n"
    "par un POKéMON.");

static const u8 sTropicMailDesc[] = _(
    "Papier JOLIFLOR\n"
    "pouvant être tenu\n"
    "par un POKéMON.");

static const u8 sDreamMailDesc[] = _(
    "Du papier avec un\n"
    "dessin du POKéMON\n"
    "qui le tient.");

static const u8 sFabMailDesc[] = _(
    "Papier magnifique\n"
    "pouvant être tenu\n"
    "par un POKéMON.");

static const u8 sRetroMailDesc[] = _(
    "Du papier avec\n"
    "les dessins de\n"
    "trois POKéMON.");

// Evolution Items
static const u8 sFireStoneDesc[] = _(
    "Fait évoluer\n"
    "certaines espèces\n"
    "de POKéMON.");

static const u8 sWaterStoneDesc[] = _(
    "Fait évoluer\n"
    "certaines espèces\n"
    "de POKéMON.");

static const u8 sThunderStoneDesc[] = _(
    "Fait évoluer\n"
    "certaines espèces\n"
    "de POKéMON.");

static const u8 sLeafStoneDesc[] = _(
    "Fait évoluer\n"
    "certaines espèces\n"
    "de POKéMON.");

static const u8 sIceStoneDesc[] = _(
    "Makes certain\n"
    "species of Pokémon\n"
    "evolve.");

static const u8 sSunStoneDesc[] = _(
    "Makes certain\n"
    "species of Pokémon\n"
    "evolve.");

static const u8 sMoonStoneDesc[] = _(
    "Makes certain\n"
    "species of Pokémon\n"
    "evolve.");

static const u8 sShinyStoneDesc[] = _(
    "Makes certain\n"
    "species of Pokémon\n"
    "evolve.");

static const u8 sDuskStoneDesc[] = _(
    "Makes certain\n"
    "species of Pokémon\n"
    "evolve.");

static const u8 sDawnStoneDesc[] = _(
    "Makes certain\n"
    "species of Pokémon\n"
    "evolve.");

static const u8 sSweetAppleDesc[] = _(
    "A very sweet apple\n"
    "that makes certain\n"
    "Pokémon evolve.");

static const u8 sTartAppleDesc[] = _(
    "A very tart apple\n"
    "that makes certain\n"
    "Pokémon evolve.");

static const u8 sCrackedPotDesc[] = _(
    "A cracked teapot\n"
    "that makes certain\n"
    "Pokémon evolve.");

static const u8 sChippedPotDesc[] = _(
    "A chipped teapot\n"
    "that makes certain\n"
    "Pokémon evolve.");

static const u8 sGalaricaCuffDesc[] = _(
    "A cuff from Galar\n"
    "that makes certain\n"
    "Pokémon evolve.");

static const u8 sGalaricaWreathDesc[] = _(
    "A wreath made in\n"
    "Galar. Makes some\n"
    "Pokémon evolve.");

static const u8 sDragonScaleDesc[] = _(
    "A strange scale\n"
    "held by Dragon-\n"
    "type Pokémon.");

static const u8 sUpgradeDesc[] = _(
    "Une drôle de boîte\n"
    "fabriquée par la\n"
    "SYLPHE SARL.");

static const u8 sProtectorDesc[] = _(
    "Loved by a certain\n"
    "Pokémon. It's stiff\n"
    "and heavy.");

static const u8 sElectirizerDesc[] = _(
    "Loved by a certain\n"
    "Pokémon. It's full\n"
    "of electric energy.");

static const u8 sMagmarizerDesc[] = _(
    "Loved by a certain\n"
    "Pokémon. It's full\n"
    "of magma energy.");

static const u8 sDubiousDiscDesc[] = _(
    "A transparent device\n"
    "overflowing with\n"
    "dubious data.");

static const u8 sReaperClothDesc[] = _(
    "Loved by a certain\n"
    "Pokémon. Imbued with\n"
    "spiritual energy.");

static const u8 sPrismScaleDesc[] = _(
    "A mysterious scale\n"
    "that evolves certain\n"
    "Pokémon. It shines.");

static const u8 sWhippedDreamDesc[] = _(
    "A soft and sweet\n"
    "treat loved by\n"
    "a certain Pokémon.");

static const u8 sSachetDesc[] = _(
    "A sachet filled with\n"
    "perfumes loved by\n"
    "a certain Pokémon.");

static const u8 sOvalStoneDesc[] = _(
    "Makes a certain\n"
    "Pokémon evolve. It's\n"
    "shaped like an egg.");

static const u8 sStrawberrySweetDesc[] = _(
    "Strawberry-shaped\n"
    "sweet loved by\n"
    "Milcery.");

static const u8 sLoveSweetDesc[] = _(
    "A heart-shaped\n"
    "sweet loved by\n"
    "Milcery.");

static const u8 sBerrySweetDesc[] = _(
    "A berry-shaped\n"
    "sweet loved by\n"
    "Milcery.");

static const u8 sCloverSweetDesc[] = _(
    "A clover-shaped\n"
    "sweet loved by\n"
    "Milcery.");

static const u8 sFlowerSweetDesc[] = _(
    "A flower-shaped\n"
    "sweet loved by\n"
    "Milcery.");

static const u8 sStarSweetDesc[] = _(
    "A star-shaped\n"
    "sweet loved by\n"
    "Milcery.");

static const u8 sRibbonSweetDesc[] = _(
    "A ribbon-shaped\n"
    "sweet loved by\n"
    "Milcery.");

static const u8 sEverstoneDesc[] = _(
    "A wondrous hold\n"
    "item that prevents\n"
    "evolution.");

static const u8 sBlackAuguriteDesc[] = _(
    "A black stone that\n"
    "makes some Pokémon\n"
    "evolve.");;

static const u8 sLinkingCordDesc[] = _(
    "A mysterious string\n"
    "that makes some\n"
    "Pokémon evolve.");

static const u8 sPeatBlockDesc[] = _(
    "A block of material\n"
    "that makes some\n"
    "Pokémon evolve.");

// Nectars
static const u8 sRedNectarDesc[] = _(
    "Flower nectar that\n"
    "changes the form\n"
    "of certain Pokémon.");

static const u8 sYellowNectarDesc[] = _(
    "Flower nectar that\n"
    "changes the form\n"
    "of certain Pokémon.");

static const u8 sPinkNectarDesc[] = _(
    "Flower nectar that\n"
    "changes the form\n"
    "of certain Pokémon.");

static const u8 sPurpleNectarDesc[] = _(
    "Flower nectar that\n"
    "changes the form\n"
    "of certain Pokémon.");

// Plates
static const u8 sFlamePlateDesc[] = _(
    "A tablet that ups\n"
    "the power of\n"
    "Fire-type moves.");

static const u8 sSplashPlateDesc[] = _(
    "A tablet that ups\n"
    "the power of\n"
    "Water-type moves.");

static const u8 sZapPlateDesc[] = _(
    "A tablet that ups\n"
    "the power of Elec-\n"
    "tric-type moves.");

static const u8 sMeadowPlateDesc[] = _(
    "A tablet that ups\n"
    "the power of\n"
    "Grass-type moves.");

static const u8 sIciclePlateDesc[] = _(
    "A tablet that ups\n"
    "the power of\n"
    "Ice-type moves.");

static const u8 sFistPlateDesc[] = _(
    "A tablet that ups\n"
    "the power of Fight-\n"
    "ing-type moves.");

static const u8 sToxicPlateDesc[] = _(
    "A tablet that ups\n"
    "the power of\n"
    "Poison-type moves.");

static const u8 sEarthPlateDesc[] = _(
    "A tablet that ups\n"
    "the power of\n"
    "Ground-type moves.");

static const u8 sSkyPlateDesc[] = _(
    "A tablet that ups\n"
    "the power of\n"
    "Flying-type moves.");

static const u8 sMindPlateDesc[] = _(
    "A tablet that ups\n"
    "the power of Psy\n"
    "chic-type moves.");

static const u8 sInsectPlateDesc[] = _(
    "A tablet that ups\n"
    "the power of\n"
    "Bug-type moves.");

static const u8 sStonePlateDesc[] = _(
    "A tablet that ups\n"
    "the power of\n"
    "Rock-type moves.");

static const u8 sSpookyPlateDesc[] = _(
    "A tablet that ups\n"
    "the power of\n"
    "Ghost-type moves.");

static const u8 sDracoPlateDesc[] = _(
    "A tablet that ups\n"
    "the power of\n"
    "Dragon-type moves.");

static const u8 sDreadPlateDesc[] = _(
    "A tablet that ups\n"
    "the power of\n"
    "Dark-type moves.");

static const u8 sIronPlateDesc[] = _(
    "A tablet that ups\n"
    "the power of\n"
    "Steel-type moves.");

static const u8 sPixiePlateDesc[] = _(
    "A stone tablet that\n"
    "boosts the power of\n"
    "Fairy-type moves.");

// Drives
static const u8 sDouseDriveDesc[] = _(
    "Changes Genesect's\n"
    "Techno Blast to\n"
    "Water-type.");

static const u8 sShockDriveDesc[] = _(
    "Changes Genesect's\n"
    "Techno Blast to\n"
    "Electric-type.");

static const u8 sBurnDriveDesc[] = _(
    "Changes Genesect's\n"
    "Techno Blast to\n"
    "Fire-type.");

static const u8 sChillDriveDesc[] = _(
    "Changes Genesect's\n"
    "Techno Blast to\n"
    "Ice-type.");

// Memories
static const u8 sFireMemoryDesc[] = _(
    "A disc with Fire\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sWaterMemoryDesc[] = _(
    "A disc with Water\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sElectricMemoryDesc[] = _(
    "A disc with Electric\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sGrassMemoryDesc[] = _(
    "A disc with Grass\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sIceMemoryDesc[] = _(
    "A disc with Ice\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sFightingMemoryDesc[] = _(
    "A disc with Fighting\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sPoisonMemoryDesc[] = _(
    "A disc with Poison\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sGroundMemoryDesc[] = _(
    "A disc with Ground\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sFlyingMemoryDesc[] = _(
    "A disc with Flying\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sPsychicMemoryDesc[] = _(
    "A disc with Psychic\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sBugMemoryDesc[] = _(
    "A disc with Bug\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sRockMemoryDesc[] = _(
    "A disc with Rock\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sGhostMemoryDesc[] = _(
    "A disc with Ghost\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sDragonMemoryDesc[] = _(
    "A disc with Dragon\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sDarkMemoryDesc[] = _(
    "A disc with Dark\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sSteelMemoryDesc[] = _(
    "A disc with Steel\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sFairyMemoryDesc[] = _(
    "A disc with Fairy\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sRustedSwordDesc[] = _(
    "A rusty sword. A\n"
    "hero used it to\n"
    "halt a disaster.");

static const u8 sRustedShieldDesc[] = _(
    "A rusty shield. A\n"
    "hero used it to\n"
    "halt a disaster.");

// Colored Orbs
static const u8 sRedOrbDesc[] = _(
    "Un globe rouge\n"
    "censé abriter un\n"
    "pouvoir antique.");

static const u8 sBlueOrbDesc[] = _(
    "Un globe bleu lumi-\n"
    "neux censé abriter\n"
    "un pouvoir antique.");

// Mega Stones
static const u8 sVenusauriteDesc[] = _(
    "This stone enables\n"
    "Venusaur to Mega\n"
    "Evolve in battle.");

static const u8 sCharizarditeDesc[] = _(
    "This stone enables\n"
    "Charizard to Mega\n"
    "Evolve in battle.");

static const u8 sBlastoisiniteDesc[] = _(
    "This stone enables\n"
    "Blastoise to Mega\n"
    "Evolve in battle.");

static const u8 sBeedrilliteDesc[] = _(
    "This stone enables\n"
    "Beedrill to Mega\n"
    "Evolve in battle.");

static const u8 sPidgeotiteDesc[] = _(
    "This stone enables\n"
    "Pidgeot to Mega\n"
    "Evolve in battle.");

static const u8 sAlakaziteDesc[] = _(
    "This stone enables\n"
    "Alakazam to Mega\n"
    "Evolve in battle.");

static const u8 sSlowbroniteDesc[] = _(
    "This stone enables\n"
    "Slowbro to Mega\n"
    "Evolve in battle.");

static const u8 sGengariteDesc[] = _(
    "This stone enables\n"
    "Gengar to Mega\n"
    "Evolve in battle.");

static const u8 sKangaskhaniteDesc[] = _(
    "This stone enables\n"
    "Kangaskhan to Mega\n"
    "Evolve in battle.");

static const u8 sPinsiriteDesc[] = _(
    "This stone enables\n"
    "Pinsir to Mega\n"
    "Evolve in battle.");

static const u8 sGyaradositeDesc[] = _(
    "This stone enables\n"
    "Gyarados to Mega\n"
    "Evolve in battle.");

static const u8 sAerodactyliteDesc[] = _(
    "This stone enables\n"
    "Aerodactyl to Mega\n"
    "Evolve in battle.");

static const u8 sMewtwoniteDesc[] = _(
    "This stone enables\n"
    "Mewtwo to Mega\n"
    "Evolve in battle.");

static const u8 sAmpharositeDesc[] = _(
    "This stone enables\n"
    "Ampharos to Mega\n"
    "Evolve in battle.");

static const u8 sSteelixiteDesc[] = _(
    "This stone enables\n"
    "Steelix to Mega\n"
    "Evolve in battle.");

static const u8 sScizoriteDesc[] = _(
    "This stone enables\n"
    "Scizor to Mega\n"
    "Evolve in battle.");

static const u8 sHeracroniteDesc[] = _(
    "This stone enables\n"
    "Heracross to Mega\n"
    "Evolve in battle.");

static const u8 sHoundoominiteDesc[] = _(
    "This stone enables\n"
    "Houndoom to Mega\n"
    "Evolve in battle.");

static const u8 sTyranitariteDesc[] = _(
    "This stone enables\n"
    "Tyranitar to Mega\n"
    "Evolve in battle.");

static const u8 sSceptiliteDesc[] = _(
    "This stone enables\n"
    "Sceptile to Mega\n"
    "Evolve in battle.");

static const u8 sBlazikeniteDesc[] = _(
    "This stone enables\n"
    "Blaziken to Mega\n"
    "Evolve in battle.");

static const u8 sSwampertiteDesc[] = _(
    "This stone enables\n"
    "Swampert to Mega\n"
    "Evolve in battle.");

static const u8 sGardevoiriteDesc[] = _(
    "This stone enables\n"
    "Gardevoir to Mega\n"
    "Evolve in battle.");

static const u8 sSableniteDesc[] = _(
    "This stone enables\n"
    "Sableye to Mega\n"
    "Evolve in battle.");

static const u8 sMawiliteDesc[] = _(
    "This stone enables\n"
    "Mawile to Mega\n"
    "Evolve in battle.");

static const u8 sAggroniteDesc[] = _(
    "This stone enables\n"
    "Aggron to Mega\n"
    "Evolve in battle.");

static const u8 sMedichamiteDesc[] = _(
    "This stone enables\n"
    "Medicham to Mega\n"
    "Evolve in battle.");

static const u8 sManectiteDesc[] = _(
    "This stone enables\n"
    "Manectric to Mega\n"
    "Evolve in battle.");

static const u8 sSharpedoniteDesc[] = _(
    "This stone enables\n"
    "Sharpedo to Mega\n"
    "Evolve in battle.");

static const u8 sCameruptiteDesc[] = _(
    "This stone enables\n"
    "Camerupt to Mega\n"
    "Evolve in battle.");

static const u8 sAltarianiteDesc[] = _(
    "This stone enables\n"
    "Altaria to Mega\n"
    "Evolve in battle.");

static const u8 sBanettiteDesc[] = _(
    "This stone enables\n"
    "Banette to Mega\n"
    "Evolve in battle.");

static const u8 sAbsoliteDesc[] = _(
    "This stone enables\n"
    "Absol to Mega\n"
    "Evolve in battle.");

static const u8 sGlalititeDesc[] = _(
    "This stone enables\n"
    "Glalie to Mega\n"
    "Evolve in battle.");

static const u8 sSalamenciteDesc[] = _(
    "This stone enables\n"
    "Salamence to Mega\n"
    "Evolve in battle.");

static const u8 sMetagrossiteDesc[] = _(
    "This stone enables\n"
    "Metagross to Mega\n"
    "Evolve in battle.");

static const u8 sLatiasiteDesc[] = _(
    "This stone enables\n"
    "Latias to Mega\n"
    "Evolve in battle.");

static const u8 sLatiositeDesc[] = _(
    "This stone enables\n"
    "Latios to Mega\n"
    "Evolve in battle.");

static const u8 sLopunniteDesc[] = _(
    "This stone enables\n"
    "Lopunny to Mega\n"
    "Evolve in battle.");

static const u8 sGarchompiteDesc[] = _(
    "This stone enables\n"
    "Garchomp to Mega\n"
    "Evolve in battle.");

static const u8 sLucarioniteDesc[] = _(
    "This stone enables\n"
    "Lucario to Mega\n"
    "Evolve in battle.");

static const u8 sAbomasiteDesc[] = _(
    "This stone enables\n"
    "Abomasnow to Mega\n"
    "Evolve in battle.");

static const u8 sGalladiteDesc[] = _(
    "This stone enables\n"
    "Gallade to Mega\n"
    "Evolve in battle.");

static const u8 sAudiniteDesc[] = _(
    "This stone enables\n"
    "Audino to Mega\n"
    "Evolve in battle.");

static const u8 sDianciteDesc[] = _(
    "This stone enables\n"
    "Diancie to Mega\n"
    "Evolve in battle.");

// Gems
static const u8 sNormalGemDesc[] = _(
    "Increases the\n"
    "power of Normal\n"
    "Type moves.");

static const u8 sFireGemDesc[] = _(
    "Increases the\n"
    "power of Fire\n"
    "Type moves.");

static const u8 sWaterGemDesc[] = _(
    "Increases the\n"
    "power of Water\n"
    "Type moves.");

static const u8 sElectricGemDesc[] = _(
    "Increases the\n"
    "power of Electric\n"
    "Type moves.");

static const u8 sGrassGemDesc[] = _(
    "Increases the\n"
    "power of Grass\n"
    "Type moves.");

static const u8 sIceGemDesc[] = _(
    "Increases the\n"
    "power of Ice\n"
    "Type moves.");

static const u8 sFightingGemDesc[] = _(
    "Increases the\n"
    "power of Fighting\n"
    "Type moves.");

static const u8 sPoisonGemDesc[] = _(
    "Increases the\n"
    "power of Poison\n"
    "Type moves.");

static const u8 sGroundGemDesc[] = _(
    "Increases the\n"
    "power of Ground\n"
    "Type moves.");

static const u8 sFlyingGemDesc[] = _(
    "Increases the\n"
    "power of Flying\n"
    "Type moves.");

static const u8 sPsychicGemDesc[] = _(
    "Increases the\n"
    "power of Psychic\n"
    "Type moves.");

static const u8 sBugGemDesc[] = _(
    "Increases the\n"
    "power of Bug\n"
    "Type moves.");

static const u8 sRockGemDesc[] = _(
    "Increases the\n"
    "power of Rock\n"
    "Type moves.");

static const u8 sGhostGemDesc[] = _(
    "Increases the\n"
    "power of Ghost\n"
    "Type moves.");

static const u8 sDragonGemDesc[] = _(
    "Increases the\n"
    "power of Dragon\n"
    "Type moves.");

static const u8 sDarkGemDesc[] = _(
    "Increases the\n"
    "power of Dark\n"
    "Type moves.");

static const u8 sSteelGemDesc[] = _(
    "Increases the\n"
    "power of Steel\n"
    "Type moves.");

static const u8 sFairyGemDesc[] = _(
    "Increases the\n"
    "power of Fairy\n"
    "Type moves.");

// Z-Crystals
static const u8 sNormaliumZDesc[] = _(
    "Upgrade Normal-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sFiriumZDesc[] = _(
    "Upgrade Fire-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sWateriumZDesc[] = _(
    "Upgrade Water-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sElectriumZDesc[] = _(
    "Upgrade Electric-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sGrassiumZDesc[] = _(
    "Upgrade Grass-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sIciumZDesc[] = _(
    "Upgrade Ice-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sFightiniumZDesc[] = _(
    "Upgrade Fighting-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sPoisoniumZDesc[] = _(
    "Upgrade Poison-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sGroundiumZDesc[] = _(
    "Upgrade Ground-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sFlyiniumZDesc[] = _(
    "Upgrade Flying-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sPsychiumZDesc[] = _(
    "Upgrade Psychic-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sBuginiumZDesc[] = _(
    "Upgrade Bug-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sRockiumZDesc[] = _(
    "Upgrade Rock-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sGhostiumZDesc[] = _(
    "Upgrade Ghost-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sDragoniumZDesc[] = _(
    "Upgrade Dragon-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sDarkiniumZDesc[] = _(
    "Upgrade Dark-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sSteeliumZDesc[] = _(
    "Upgrade Steel-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sFairiumZDesc[] = _(
    "Upgrade Fairy-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sPikaniumZDesc[] = _(
    "Upgrade Pikachu's\n"
    "Volt Tackle\n"
    "into a Z-Move.");

static const u8 sEeviumZDesc[] = _(
    "Upgrade Eevee's\n"
    "Last Resort\n"
    "into a Z-Move.");

static const u8 sSnorliumZDesc[] = _(
    "Upgrade Snorlax's\n"
    "Giga Impact\n"
    "into a Z-Move.");

static const u8 sMewniumZDesc[] = _(
    "Upgrade Mew's\n"
    "Psychic into\n"
    "a Z-Move.");

static const u8 sDecidiumZDesc[] = _(
    "Upgrade Decidu-\n"
    "eye's Spirit Sha-\n"
    "ckle into a Z-Move.");

static const u8 sInciniumZDesc[] = _(
    "Upgrade Incine-\n"
    "roar's Darkest La-\n"
    "riat into a Z-Move.");

static const u8 sPrimariumZDesc[] = _(
    "Upgrade Primarina's\n"
    "Sparkling Aria\n"
    "into a Z-Move.");

static const u8 sLycaniumZDesc[] = _(
    "Upgrade Lycanroc's\n"
    "Stone Edge\n"
    "into a Z-Move.");

static const u8 sMimikiumZDesc[] = _(
    "Upgrade Mimikyu's\n"
    "Play Rough\n"
    "into a Z-Move.");

static const u8 sKommoniumZDesc[] = _(
    "Upgrade Kommo-o's\n"
    "Clanging Scales\n"
    "into a Z-Move.");

static const u8 sTapuniumZDesc[] = _(
    "Upgrade the tapu's\n"
    "Nature's Madness\n"
    "into a Z-Move.");

static const u8 sSolganiumZDesc[] = _(
    "Upgrade Solgaleo's\n"
    "Sunsteel Strike\n"
    "into a Z-Move.");

static const u8 sLunaliumZDesc[] = _(
    "Upgrade Lunala's\n"
    "Moongeist Beam\n"
    "into a Z-Move.");

static const u8 sMarshadiumZDesc[] = _(
    "Upgrade Marsha-\n"
    "dow's Spectral Thi-\n"
    "ef into a Z-Move.");

static const u8 sAloraichiumZDesc[] = _(
    "Upgrade Alolan\n"
    "Raichu's Thunder-\n"
    "bolt into a Z-Move.");

static const u8 sPikashuniumZDesc[] = _(
    "Upgrade Pikachu w/\n"
    "a cap's Thunderbolt\n"
    "into a Z-Move.");

static const u8 sUltranecroziumZDesc[] = _(
    "A crystal to turn\n"
    "fused Necrozma\n"
    "into a new form.");

// Species-specific Held Items
static const u8 sLightBallDesc[] = _(
    "Objet tenu pour\n"
    "monter l’ATQ. SPE.\n"
    "de PIKACHU.");

static const u8 sLeekDesc[] = _(
    "A hold item that\n"
    "raises Farfetch'd's\n"
    "critical-hit ratio.");

static const u8 sThickClubDesc[] = _(
    "Objet tenu montant\n"
    "l’ATQ. d’OSSELAIT\n"
    "et d’OSSATUEUR.");

static const u8 sLuckyPunchDesc[] = _(
    "Objet tenu montant\n"
    "le taux de criti-\n"
    "ques de LEVEINARD.");

static const u8 sMetalPowderDesc[] = _(
    "Objet tenu montant\n"
    "la DEFENSE de\n"
    "METAMORPH.");

static const u8 sQuickPowderDesc[] = _(
    "An item to be held\n"
    "by Ditto. This odd\n"
    "powder boosts Speed.");

static const u8 sDeepSeaScaleDesc[] = _(
    "Objet tenu montant\n"
    "la DEF. SPE. de\n"
    "COQUIPERL.");

static const u8 sDeepSeaToothDesc[] = _(
    "Objet tenu montant\n"
    "l’ATQ. SPE. de\n"
    "COQUIPERL.");

static const u8 sSoulDewDesc[] = _(
#if B_SOUL_DEW_BOOST >= GEN_7
    "Objet tenu montant\n"
    "ATQ SP et DEF SP de\n"
    "LATIOS & LATIAS.");
#else
    "Objet tenu montant\n"
    "ATQ SP et DEF SP de\n"
    "LATIOS & LATIAS.");
#endif

static const u8 sAdamantOrbDesc[] = _(
    "Boosts the power of\n"
    "Dialga's Dragon and\n"
    "Steel-type moves.");

static const u8 sLustrousOrbDesc[] = _(
    "Boosts the power of\n"
    "Palkia's Dragon and\n"
    "Water-type moves.");

static const u8 sGriseousOrbDesc[] = _(
    "Powers up Giratina's\n"
    "Dragon and Ghost-\n"
    "type moves.");

// Incenses
static const u8 sSeaIncenseDesc[] = _(
    "Objet tenu montant\n"
    "un peu la puissance\n"
    "des attaques EAU.");

static const u8 sLaxIncenseDesc[] = _(
    "Objet tenu bais-\n"
    "sant un peu la pré-\n"
    "cision de l’ennemi.");

static const u8 sOddIncenseDesc[] = _(
    "A hold item that\n"
    "boosts Psychic-\n"
    "type moves.");

static const u8 sRockIncenseDesc[] = _(
    "A hold item that\n"
    "raises the power of\n"
    "Rock-type moves.");

static const u8 sFullIncenseDesc[] = _(
    "A held item that\n"
    "makes the holder\n"
    "move slower.");

static const u8 sWaveIncenseDesc[] = _(
    "A hold item that\n"
    "slightly boosts\n"
    "Water-type moves.");

static const u8 sRoseIncenseDesc[] = _(
    "A hold item that\n"
    "raises the power of\n"
    "Grass-type moves.");

static const u8 sLuckIncenseDesc[] = _(
    "Doubles money in\n"
    "battle if the\n"
    "holder takes part.");

static const u8 sPureIncenseDesc[] = _(
    "A hold item that\n"
    "helps repel wild\n"
    "Pokémon.");

// Contest Scarves
static const u8 sRedScarfDesc[] = _(
    "Objet tenu montant\n"
    "la stat SANG-FROID\n"
    "dans les CONCOURS.");

static const u8 sBlueScarfDesc[] = _(
    "Objet tenu montant\n"
    "la stat BEAUTE\n"
    "dans les CONCOURS.");

static const u8 sPinkScarfDesc[] = _(
    "Objet tenu montant\n"
    "la stat GRACE\n"
    "dans les CONCOURS.");

static const u8 sGreenScarfDesc[] = _(
    "Objet tenu montant\n"
    "la stat INTEL.\n"
    "dans les CONCOURS.");

static const u8 sYellowScarfDesc[] = _(
    "Objet tenu montant\n"
    "la stat ROBUSTESSE\n"
    "dans les CONCOURS.");

// EV Gain Modifiers
static const u8 sMachoBraceDesc[] = _(
    "Objet tenu augmen-\n"
    "tant la croissance.\n"
    "Baisse la VITESSE.");

static const u8 sPowerWeightDesc[] = _(
    "A hold item that\n"
    "promotes HP gain,\n"
    "but reduces Speed.");

static const u8 sPowerBracerDesc[] = _(
    "A hold item that\n"
    "promotes Atk gain,\n"
    "but reduces Speed.");

static const u8 sPowerBeltDesc[] = _(
    "A hold item that\n"
    "promotes Def gain,\n"
    "but reduces Speed.");

static const u8 sPowerLensDesc[] = _(
    "Hold item that pro-\n"
    "motes Sp. Atk gain,\n"
    "but reduces Speed.");

static const u8 sPowerBandDesc[] = _(
    "Hold item that pro-\n"
    "motes Sp. Def gain,\n"
    "but reduces Speed.");

static const u8 sPowerAnkletDesc[] = _(
    "A hold item that\n"
    "promotes Spd gain,\n"
    "but reduces Speed.");

// Type-boosting Held Items
static const u8 sSilkScarfDesc[] = _(
    "Objet tenu montant\n"
    "la puissance des\n"
    "attaques NORMAL.");

static const u8 sCharcoalDesc[] = _(
    "Objet tenu montant\n"
    "la puissance des\n"
    "attaques FEU.");

static const u8 sMysticWaterDesc[] = _(
    "Objet tenu montant\n"
    "la puissance des\n"
    "attaques EAU.");

static const u8 sMagnetDesc[] = _(
    "Objet tenu montant\n"
    "la puissance des\n"
    "attaques ELECTRIK.");

static const u8 sMiracleSeedDesc[] = _(
    "Objet tenu montant\n"
    "la puissance des\n"
    "attaques PLANTE.");

static const u8 sNeverMeltIceDesc[] = _(
    "Objet tenu montant\n"
    "la puissance des\n"
    "attaques GLACE.");

static const u8 sBlackBeltDesc[] = _(
    "Objet tenu montant\n"
    "la puissance des\n"
    "attaques COMBAT.");

static const u8 sPoisonBarbDesc[] = _(
    "Objet tenu montant\n"
    "la puissance des\n"
    "attaques POISON.");

static const u8 sSoftSandDesc[] = _(
    "Objet tenu montant\n"
    "la puissance des\n"
    "attaques SOL.");

static const u8 sSharpBeakDesc[] = _(
    "Objet tenu montant\n"
    "la puissance des\n"
    "attaques VOL.");

static const u8 sTwistedSpoonDesc[] = _(
    "Objet tenu montant\n"
    "la puissance des\n"
    "attaques PSY.");

static const u8 sSilverPowderDesc[] = _(
    "Objet tenu montant\n"
    "la puissance des\n"
    "attaques INSECTE.");

static const u8 sHardStoneDesc[] = _(
    "Objet tenu montant\n"
    "la puissance des\n"
    "attaques ROCHE.");

static const u8 sSpellTagDesc[] = _(
    "Objet tenu montant\n"
    "la puissance des\n"
    "attaques SPECTRE.");

static const u8 sDragonFangDesc[] = _(
    "Objet tenu montant\n"
    "la puissance des\n"
    "attaques DRAGON.");

static const u8 sBlackGlassesDesc[] = _(
    "Objet tenu montant\n"
    "la puissance des\n"
    "attaques TENEBRES.");

static const u8 sMetalCoatDesc[] = _(
    "Objet tenu montant\n"
    "la DEFENSE de\n"
    "METAMORPH.");

// Choice Items
static const u8 sChoiceBandDesc[] = _(
    "Monte la puissance\n"
    "d’une attaque. Dés-\n"
    "active les autres.");

static const u8 sChoiceSpecsDesc[] = _(
    "Boosts Sp. Atk, but\n"
    "allows the use of\n"
    "only one move.");

static const u8 sChoiceScarfDesc[] = _(
    "Boosts Speed, but\n"
    "allows the use of\n"
    "only one move.");

// Status Orbs
static const u8 sFlameOrbDesc[] = _(
    "A bizarre orb that\n"
    "inflicts a burn on\n"
    "holder in battle.");

static const u8 sToxicOrbDesc[] = _(
    "A bizarre orb that\n"
    "badly poisons the\n"
    "holder in battle.");

// Weather Rocks
static const u8 sDampRockDesc[] = _(
    "Extends the length\n"
    "of Rain Dance if\n"
    "used by the holder.");

static const u8 sHeatRockDesc[] = _(
    "Extends the length\n"
    "of Sunny Day if\n"
    "used by the holder.");

static const u8 sSmoothRockDesc[] = _(
    "Extends the length\n"
    "of Sandstorm if\n"
    "used by the holder.");

static const u8 sIcyRockDesc[] = _(
    "Extends the length\n"
    "of the move Hail\n"
    "used by the holder.");

// Terrain Seeds
static const u8 sElectricSeedDesc[] = _(
    "Boosts Defense on\n"
    "Electric Terrain,\n"
    "but only one time.");

static const u8 sPsychicSeedDesc[] = _(
    "Boosts Sp. Def. on\n"
    "Psychic Terrain,\n"
    "but only one time.");

static const u8 sMistySeedDesc[] = _(
    "Boosts Sp. Def. on\n"
    "Misty Terrain,\n"
    "but only one time.");

static const u8 sGrassySeedDesc[] = _(
    "Boosts Defense on\n"
    "Grassy Terrain,\n"
    "but only one time.");

// Type-activated Stat Modifiers
static const u8 sAbsorbBulbDesc[] = _(
    "Raises Sp. Atk if\n"
    "the holder is hit by\n"
    "a Water-type move.");

static const u8 sCellBatteryDesc[] = _(
    "Raises Atk if the\n"
    "holder is hit by an\n"
    "Electric-type move.");

static const u8 sLuminousMossDesc[] = _(
    "Raises Sp. Def if\n"
    "the holder is hit by\n"
    "a Water-type move.");

static const u8 sSnowballDesc[] = _(
    "Raises Atk if its\n"
    "holder is hit by an\n"
    "Ice-type move.");

// Misc. Held Items
static const u8 sBrightPowderDesc[] = _(
    "Objet tenu qui\n"
    "éblouit et baisse\n"
    "la précision.");

static const u8 sWhiteHerbDesc[] = _(
    "Objet tenu qui\n"
    "restaure les stats\n"
    "baissées.");

static const u8 sExpShareDesc[] = _(
    "Objet tenu pour\n"
    "partager l’EXP.\n"
    "après un combat.");

static const u8 sQuickClawDesc[] = _(
    "Objet tenu qui\n"
    "permet parfois de\n"
    "frapper le premier.");

static const u8 sSootheBellDesc[] = _(
    "Objet tenu calmant\n"
    "les esprits.\n"
    "Favorise l’amitié.");

#if B_MENTAL_HERB >= GEN_5
static const u8 sMentalHerbDesc[] = _(
    "Objet tenu qui\n"
    "annule l’attirance\n"
    "d’un POKéMON.");
#else
static const u8 sMentalHerbDesc[] = _(
    "Objet tenu qui\n"
    "annule l’attirance\n"
    "d’un POKéMON.");
#endif

static const u8 sKingsRockDesc[] = _(
    "Objet tenu pouvant\n"
    "apeurer l’ennemi\n"
    "s’il est touché.");

static const u8 sAmuletCoinDesc[] = _(
    "Double l’argent ga-\n"
    "gné si le porteur\n"
    "se bat aussi.");

static const u8 sCleanseTagDesc[] = _(
    "Objet tenu pour\n"
    "repousser les\n"
    "POKéMON sauvages.");

static const u8 sSmokeBallDesc[] = _(
    "Objet tenu, utilisé\n"
    "pour fuir un\n"
    "POKéMON sauvage.");

static const u8 sFocusBandDesc[] = _(
    "Objet tenu pouvant\n"
    "parfois empêcher\n"
    "d’être mis K.O.");

static const u8 sLuckyEggDesc[] = _(
    "Objet tenu pour\n"
    "augmenter l’EXP.\n"
    "gagnée au combat.");

static const u8 sScopeLensDesc[] = _(
    "Objet tenu pour\n"
    "monter le taux de\n"
    "critiques.");

static const u8 sLeftoversDesc[] = _(
    "Objet tenu permet-\n"
    "tant de restaurer\n"
    "les PV au combat.");

static const u8 sShellBellDesc[] = _(
    "Objet tenu qui res-\n"
    "taure les PV en\n"
    "frappant l’ennemi.");

static const u8 sWideLensDesc[] = _(
    "A magnifying lens\n"
    "that boosts the\n"
    "accuracy of moves.");

static const u8 sMuscleBandDesc[] = _(
    "A headband that\n"
    "boosts the power of\n"
    "physical moves.");

static const u8 sWiseGlassesDesc[] = _(
    "A pair of glasses\n"
    "that ups the power\n"
    "of special moves.");

static const u8 sExpertBeltDesc[] = _(
    "A belt that boosts\n"
    "the power of super\n"
    "effective moves.");

static const u8 sLightClayDesc[] = _(
    "Extends the length\n"
    "of barrier moves\n"
    "used by the holder.");

static const u8 sLifeOrbDesc[] = _(
    "Boosts the power of\n"
    "moves at the cost\n"
    "of some HP per turn.");

static const u8 sPowerHerbDesc[] = _(
    "Allows immediate\n"
    "use of a move that\n"
    "charges first.");

static const u8 sFocusSashDesc[] = _(
    "If the holder has\n"
    "full HP, it endures\n"
    "KO hits with 1 HP.");

static const u8 sZoomLensDesc[] = _(
    "If the holder moves\n"
    "after the foe, it'll\n"
    "boost accuracy.");

static const u8 sMetronomeDesc[] = _(
    "A held item that\n"
    "boosts a move used\n"
    "consecutively.");

static const u8 sIronBallDesc[] = _(
    "Cuts Speed and lets\n"
    "Flying-types be hit\n"
    "by Ground moves.");

static const u8 sLaggingTailDesc[] = _(
    "A held item that\n"
    "makes the holder\n"
    "move slower.");

static const u8 sDestinyKnotDesc[] = _(
    "If the holder falls\n"
    "in love, the foe\n"
    "does too.");

static const u8 sBlackSludgeDesc[] = _(
    "Gradually restores\n"
    "HP of Poison-types.\n"
    "Damages others.");

static const u8 sGripClawDesc[] = _(
    "Makes binding moves\n"
    "used by the holder\n"
    "go on for 7 turns.");

static const u8 sStickyBarbDesc[] = _(
    "Damages the holder\n"
    "each turn. May latch\n"
    "on to foes.");

static const u8 sShedShellDesc[] = _(
    "Enables the holder\n"
    "to switch out of\n"
    "battle without fail.");

static const u8 sBigRootDesc[] = _(
    "A held item that\n"
    "boosts the power of\n"
    "HP-stealing moves.");

static const u8 sRazorClawDesc[] = _(
    "A hooked claw that\n"
    "ups the holder's\n"
    "critical-hit ratio.");

static const u8 sRazorFangDesc[] = _(
    "A hold item that\n"
    "may cause flinching\n"
    "when the foe is hit.");

static const u8 sEvioliteDesc[] = _(
    "Raises the Def and\n"
    "Sp. Def of Pokémon\n"
    "that can evolve.");

static const u8 sFloatStoneDesc[] = _(
    "It's so light that\n"
    "when held, it halves\n"
    "a Pokémon's weight.");

static const u8 sRockyHelmetDesc[] = _(
    "Hurts the foe if\n"
    "they touch its\n"
    "holder.");

static const u8 sAirBalloonDesc[] = _(
    "Elevates the holder\n"
    "in the air. If hit,\n"
    "this item will burst.");

static const u8 sRedCardDesc[] = _(
    "Switches out the\n"
    "foe if they hit the\n"
    "holder.");

static const u8 sRingTargetDesc[] = _(
    "Moves that wouldn't\n"
    "have effect will\n"
    "land on its holder.");

static const u8 sBindingBandDesc[] = _(
    "Increases the\n"
    "power of binding\n"
    "moves when held.");

static const u8 sEjectButtonDesc[] = _(
    "Switches out the\n"
    "user if they're hit\n"
    "by the foe.");

static const u8 sWeaknessPolicyDesc[] = _(
    "If hit by a Super\n"
    "Effective move, ups\n"
    "Atk and Sp. Atk.");

static const u8 sAssaultVestDesc[] = _(
    "Raises Sp. Def but\n"
    "prevents the use\n"
    "of status moves.");

static const u8 sSafetyGogglesDesc[] = _(
    "Protect from\n"
    "weather damage and\n"
    "powder moves.");

static const u8 sAdrenalineOrbDesc[] = _(
    "Boosts Speed if the\n"
    "user is intimidated,\n"
    "but only one time.");

static const u8 sTerrainExtenderDesc[] = _(
    "Extends the length\n"
    "of the active\n"
    "battle terrain.");

static const u8 sProtectivePadsDesc[] = _(
    "Guard the holder\n"
    "from contact move\n"
    "effects.");

static const u8 sThroatSprayDesc[] = _(
    "Raises Sp. Atk. if\n"
    "the holder uses a\n"
    "sound-based move.");

static const u8 sEjectPackDesc[] = _(
    "Forces the user to\n"
    "switch if its stats\n"
    "are lowered.");

static const u8 sHeavyDutyBootsDesc[] = _(
    "Boots that prevent\n"
    "effects of traps\n"
    "set in the field.");

static const u8 sBlunderPolicyDesc[] = _(
    "Raises Speed if\n"
    "the user misses\n"
    "due to Accuracy.");

static const u8 sRoomServiceDesc[] = _(
    "Lowers Speed if\n"
    "Trick Room is\n"
    "active.");

static const u8 sUtilityUmbrellaDesc[] = _(
    "An umbrella that\n"
    "protects from\n"
    "weather effects.");

// Berries
static const u8 sCheriBerryDesc[] = _(
    "Objet tenu qui\n"
    "soigne la paralysie\n"
    "pendant un combat.");

static const u8 sChestoBerryDesc[] = _(
    "Objet tenu qui\n"
    "réveille les {PKMN}\n"
    "dormant au combat.");

static const u8 sPechaBerryDesc[] = _(
    "Objet tenu qui soi-\n"
    "gne du poison\n"
    "pendant un combat.");

static const u8 sRawstBerryDesc[] = _(
    "Objet tenu qui\n"
    "soigne une brûlure\n"
    "pendant un combat.");

static const u8 sAspearBerryDesc[] = _(
    "Objet tenu qui dé-\n"
    "congèle les {PKMN}\n"
    "pendant un combat.");

static const u8 sLeppaBerryDesc[] = _(
    "Objet tenu qui\n"
    "restaure 10 PP\n"
    "pendant un combat.");

static const u8 sOranBerryDesc[] = _(
    "Objet tenu qui\n"
    "restaure 10 PV\n"
    "pendant un combat.");

static const u8 sPersimBerryDesc[] = _(
    "Objet tenu qui\n"
    "soigne la confusion\n"
    "pendant un combat.");

static const u8 sLumBerryDesc[] = _(
    "Objet tenu qui\n"
    "restaure le statut\n"
    "pendant un combat.");

static const u8 sSitrusBerryDesc[] = _(
#if I_SITRUS_BERRY_HEAL >= GEN_4
    "Objet tenu qui\n"
    "restaure 30 PV\n"
    "pendant un combat.");
#else
    "Objet tenu qui\n"
    "restaure 30 PV\n"
    "pendant un combat.");
#endif

static const u8 sFigyBerryDesc[] = _(
    "Objet tenu qui res-\n"
    "taure les PV. Peut\n"
    "rendre confus.");

static const u8 sWikiBerryDesc[] = _(
    "Objet tenu qui res-\n"
    "taure les PV. Peut\n"
    "rendre confus.");

static const u8 sMagoBerryDesc[] = _(
    "Objet tenu qui res-\n"
    "taure les PV. Peut\n"
    "rendre confus.");

static const u8 sAguavBerryDesc[] = _(
    "Objet tenu qui res-\n"
    "taure les PV. Peut\n"
    "rendre confus.");

static const u8 sIapapaBerryDesc[] = _(
    "Objet tenu qui res-\n"
    "taure les PV. Peut\n"
    "rendre confus.");

static const u8 sRazzBerryDesc[] = _(
    "Ingrédient {POKEBLOCK}.\n"
    "Plantez-la pour\n"
    "avoir un FRAMBY.");

static const u8 sBlukBerryDesc[] = _(
    "Ingrédient {POKEBLOCK}.\n"
    "Plantez-la pour\n"
    "avoir un REMU.");

static const u8 sNanabBerryDesc[] = _(
    "Ingrédient {POKEBLOCK}.\n"
    "Plantez-la pour\n"
    "avoir un NANAB.");

static const u8 sWepearBerryDesc[] = _(
    "Ingrédient {POKEBLOCK}.\n"
    "Plantez-la pour\n"
    "avoir un REPOI.");

static const u8 sPinapBerryDesc[] = _(
    "Ingrédient {POKEBLOCK}.\n"
    "Plantez-la pour\n"
    "avoir un NANANA.");

static const u8 sPomegBerryDesc[] = _(
    "Rend un POKéMON\n"
    "amical, baisse les\n"
    "PV de base.");

static const u8 sKelpsyBerryDesc[] = _(
    "Rend un POKéMON\n"
    "amical, baisse\n"
    "l’ATTAQUE de base.");

static const u8 sQualotBerryDesc[] = _(
    "Rend un POKéMON\n"
    "amical, baisse la\n"
    "DEF. de base.");

static const u8 sHondewBerryDesc[] = _(
    "Rend un POKéMON\n"
    "amical, baisse\n"
    "l’ATQ. SPE. de base.");

static const u8 sGrepaBerryDesc[] = _(
    "Rend un POKéMON\n"
    "amical, baisse la\n"
    "DEF. SPE. de base.");

static const u8 sTamatoBerryDesc[] = _(
    "Rend un POKéMON\n"
    "amical, baisse la\n"
    "VITESSE de base.");

static const u8 sCornnBerryDesc[] = _(
    "Ingrédient {POKEBLOCK}.\n"
    "Plantez-la pour\n"
    "avoir un SIAM.");

static const u8 sMagostBerryDesc[] = _(
    "Ingrédient {POKEBLOCK}.\n"
    "Plantez-la pour\n"
    "avoir un MANGOU.");

static const u8 sRabutaBerryDesc[] = _(
    "Ingrédient {POKEBLOCK}.\n"
    "Plantez-la pour\n"
    "avoir un RABUTA.");

static const u8 sNomelBerryDesc[] = _(
    "Ingrédient {POKEBLOCK}.\n"
    "Plantez-la pour\n"
    "avoir un TRONCI.");

static const u8 sSpelonBerryDesc[] = _(
    "Ingrédient {POKEBLOCK}.\n"
    "Plantez-la pour\n"
    "avoir un KIWAN.");

static const u8 sPamtreBerryDesc[] = _(
    "Ingrédient {POKEBLOCK}.\n"
    "Plantez-la pour\n"
    "avoir un PALMA.");

static const u8 sWatmelBerryDesc[] = _(
    "Ingrédient {POKEBLOCK}.\n"
    "Plantez-la pour\n"
    "avoir un STEKPA.");

static const u8 sDurinBerryDesc[] = _(
    "Ingrédient {POKEBLOCK}.\n"
    "Plantez-la pour\n"
    "avoir un DURIN.");

static const u8 sBelueBerryDesc[] = _(
    "Ingrédient {POKEBLOCK}.\n"
    "Plantez-la pour\n"
    "avoir un MYRTE.");

static const u8 sChilanBerryDesc[] = _(
    "A hold item that\n"
    "weakens a Normal\n"
    "move.");

static const u8 sOccaBerryDesc[] = _(
    "A hold item that\n"
    "weakens a Fire\n"
    "move if weak to it.");

static const u8 sPasshoBerryDesc[] = _(
    "A hold item that\n"
    "weakens a Water\n"
    "move if weak to it.");

static const u8 sWacanBerryDesc[] = _(
    "A hold item that\n"
    "weakens a Electric\n"
    "move if weak to it.");

static const u8 sRindoBerryDesc[] = _(
    "A hold item that\n"
    "weakens a Grass\n"
    "move if weak to it.");

static const u8 sYacheBerryDesc[] = _(
    "A hold item that\n"
    "weakens a Ice\n"
    "move if weak to it.");

static const u8 sChopleBerryDesc[] = _(
    "A hold item that\n"
    "weakens a Fighting\n"
    "move if weak to it.");

static const u8 sKebiaBerryDesc[] = _(
    "A hold item that\n"
    "weakens a Poison\n"
    "move if weak to it.");

static const u8 sShucaBerryDesc[] = _(
    "A hold item that\n"
    "weakens a Ground\n"
    "move if weak to it.");

static const u8 sCobaBerryDesc[] = _(
    "A hold item that\n"
    "weakens a Flying\n"
    "move if weak to it.");

static const u8 sPayapaBerryDesc[] = _(
    "A hold item that\n"
    "weakens a Psychic\n"
    "move if weak to it.");

static const u8 sTangaBerryDesc[] = _(
    "A hold item that\n"
    "weakens a Bug\n"
    "move if weak to it.");

static const u8 sChartiBerryDesc[] = _(
    "A hold item that\n"
    "weakens a Rock\n"
    "move if weak to it.");

static const u8 sKasibBerryDesc[] = _(
    "A hold item that\n"
    "weakens a Ghost\n"
    "move if weak to it.");

static const u8 sHabanBerryDesc[] = _(
    "A hold item that\n"
    "weakens a Dragon\n"
    "move if weak to it.");

static const u8 sColburBerryDesc[] = _(
    "A hold item that\n"
    "weakens a Dark\n"
    "move if weak to it.");

static const u8 sBabiriBerryDesc[] = _(
    "A hold item that\n"
    "weakens a Steel\n"
    "move if weak to it.");

static const u8 sRoseliBerryDesc[] = _(
    "A hold item that\n"
    "weakens a Fairy\n"
    "move if weak to it.");

static const u8 sLiechiBerryDesc[] = _(
    "Objet tenu qui\n"
    "monte l’ATTAQUE\n"
    "si nécessaire.");

static const u8 sGanlonBerryDesc[] = _(
    "Objet tenu qui\n"
    "monte la DEFENSE\n"
    "si nécessaire.");

static const u8 sSalacBerryDesc[] = _(
    "Objet tenu qui\n"
    "monte la VITESSE\n"
    "si nécessaire.");

static const u8 sPetayaBerryDesc[] = _(
    "Objet tenu qui\n"
    "monte l’ATQ. SPE.\n"
    "si nécessaire.");

static const u8 sApicotBerryDesc[] = _(
    "Objet tenu qui\n"
    "monte la DEF. SPE.\n"
    "si nécessaire.");

static const u8 sLansatBerryDesc[] = _(
    "Objet tenu qui mon-\n"
    "te le taux de criti-\n"
    "ques si nécessaire.");

static const u8 sStarfBerryDesc[] = _(
    "Objet tenu qui\n"
    "booste une stat\n"
    "si nécessaire.");

static const u8 sEnigmaBerryDesc[] = _(
    "Ingrédient {POKEBLOCK}.\n"
    "Plantez-la pour\n"
    "avoir un ENIGMA.");

static const u8 sMicleBerryDesc[] = _(
    "When held, it ups\n"
    "the Accuracy of a\n"
    "move in a pinch.");

static const u8 sCustapBerryDesc[] = _(
    "It allows a Pokémon\n"
    "in a pinch to move\n"
    "first just once.");

static const u8 sJabocaBerryDesc[] = _(
    "If hit by a physical\n"
    "move, it will hurt\n"
    "the attacker a bit.");

static const u8 sRowapBerryDesc[] = _(
    "If hit by a special\n"
    "move, it will hurt\n"
    "the attacker a bit.");

static const u8 sKeeBerryDesc[] = _(
    "If hit by a physical\n"
    "move, it raises the\n"
    "Defense a bit.");

static const u8 sMarangaBerryDesc[] = _(
    "If hit by a special\n"
    "move, it raises the\n"
    "Sp. Def. a bit.");

static const u8 sEnigmaBerryEReaderDesc[] = _(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow a mystery.");

// TMs/HMs
static const u8 sTM01Desc[] = _(
    "Puissant, mais peut\n"
    "apeurer le lanceur\n"
    "s’il est touché.");

static const u8 sTM02Desc[] = _(
    "Attrape l’ennemi et\n"
    "le lacère d’un féro-\n"
    "ce coup de griffe.");

static const u8 sTM03Desc[] = _(
    "Génère des ultra-\n"
    "sons qui rendent\n"
    "confus.");

static const u8 sTM04Desc[] = _(
    "Concentration pour\n"
    "monter l’ATQ. SPE.\n"
    "et la DEF. SPE.");

static const u8 sTM05Desc[] = _(
    "Un horrible hurle-\n"
    "ment. Fait fuir pour\n"
    "terminer le combat.");

static const u8 sTM06Desc[] = _(
    "Empoisonne l’ennemi\n"
    "avec une toxine de\n"
    "plus en plus forte.");

static const u8 sTM07Desc[] = _(
    "Lance une tempête\n"
    "de grêle. Ne blesse\n"
    "pas le type GLACE.");

static const u8 sTM08Desc[] = _(
    "Se gonfle pour\n"
    "monter l’ATTAQUE\n"
    "et la DEFENSE.");

static const u8 sTM09Desc[] = _(
    "Mitraille l’ennemi\n"
    "avec 2 à 5 graines\n"
    "de suite.");

static const u8 sTM10Desc[] = _(
    "La puissance de\n"
    "l’attaque dépend\n"
    "du POKéMON lanceur.");

static const u8 sTM11Desc[] = _(
    "Améliore les\n"
    "attaques FEU\n"
    "pendant 5 tours.");

static const u8 sTM12Desc[] = _(
    "Provoque l’ennemi.\n"
    "L’oblige à utiliser\n"
    "des attaques.");

static const u8 sTM13Desc[] = _(
    "Envoie un rayon\n"
    "de glace pouvant\n"
    "geler l’ennemi.");

static const u8 sTM14Desc[] = _(
    "Violente tempête\n"
    "de neige pouvant\n"
    "geler l’ennemi.");

static const u8 sTM15Desc[] = _(
    "Puissant. Oblige le\n"
    "lanceur à rechar-\n"
    "ger le tour suivant.");

static const u8 sTM16Desc[] = _(
    "Crée un mur lumi-\n"
    "neux. Baisse les\n"
    "dégâts d’ATQ. SPE.");

static const u8 sTM17Desc[] = _(
    "Ignore les dégâts,\n"
    "mais peut échouer\n"
    "si réutilisée.");

static const u8 sTM18Desc[] = _(
    "Améliore les\n"
    "attaques EAU\n"
    "pendant 5 tours.");

static const u8 sTM19Desc[] = _(
    "Une attaque qui\n"
    "aspire la moitié des\n"
    "dégâts infligés.");

static const u8 sTM20Desc[] = _(
    "Force mystique em-\n"
    "pêchant tout chan-\n"
    "gement de statut.");

static const u8 sTM21Desc[] = _(
    "Attaque plus puis-\n"
    "sante si le lanceur\n"
    "vous déteste.");

static const u8 sTM22Desc[] = _(
    "Absorbe la lumière\n"
    "et attaque le tour\n"
    "suivant.");

static const u8 sTM23Desc[] = _(
    "Frappe l’ennemi\n"
    "avec sa queue. Peut\n"
    "baisser la DEFENSE.");

static const u8 sTM24Desc[] = _(
    "Forte attaque\n"
    "électrique pouvant\n"
    "paralyser l’ennemi.");

static const u8 sTM25Desc[] = _(
    "Une attaque fou-\n"
    "droyante pouvant\n"
    "paralyser l’ennemi.");

static const u8 sTM26Desc[] = _(
    "Séisme sans effet\n"
    "sur les adversaires\n"
    "volants.");

static const u8 sTM27Desc[] = _(
    "Attaque dont la\n"
    "puissance dépend\n"
    "de l’amitié.");

static const u8 sTM28Desc[] = _(
    "Creuse sous terre\n"
    "au 1{SUPER_ER} tour et\n"
    "frappe au 2{SUPER_E}.");

static const u8 sTM29Desc[] = _(
    "Puissante attaque\n"
    "PSY pouvant\n"
    "baisser la DEF. SPE.");

static const u8 sTM30Desc[] = _(
    "Projette une gran-\n"
    "de tache qui peut\n"
    "baisser la DEF. SPE.");

static const u8 sTM31Desc[] = _(
    "Détruit les barriè-\n"
    "res comme MUR\n"
    "LUMIERE et blesse.");

static const u8 sTM32Desc[] = _(
    "Crée de fausses\n"
    "copies pour aug-\n"
    "menter l’esquive.");

static const u8 sTM33Desc[] = _(
    "Crée un mur lumi-\n"
    "neux. Affaiblit les\n"
    "att. physiques.");

static const u8 sTM34Desc[] = _(
    "Envoie un choc\n"
    "électrique impos-\n"
    "sible à esquiver.");

static const u8 sTM35Desc[] = _(
    "Envoie un torrent\n"
    "de flammes pouvant\n"
    "brûler l’ennemi.");

static const u8 sTM36Desc[] = _(
    "Envoie des détri-\n"
    "tus pour blesser.\n"
    "Peut empoisonner.");

static const u8 sTM37Desc[] = _(
    "Une tempête de\n"
    "sable qui dure\n"
    "plusieurs tours.");

static const u8 sTM38Desc[] = _(
    "Puissante attaque\n"
    "enflammée pouvant\n"
    "brûler l’ennemi.");

static const u8 sTM39Desc[] = _(
    "Bloque l’ennemi\n"
    "avec des rocs. Peut\n"
    "baisser la VITESSE.");

static const u8 sTM40Desc[] = _(
    "Une attaque\n"
    "extrêmement rapide\n"
    "et inévitable.");

static const u8 sTM41Desc[] = _(
    "Empêche la\n"
    "réutilisation\n"
    "d’une attaque.");

static const u8 sTM42Desc[] = _(
    "Améliore l’ATTAQUE\n"
    "si brûlé, paralysé\n"
    "ou empoisonné.");

static const u8 sTM43Desc[] = _(
    "Les effets\n"
    "de l’attaque\n"
    "dépendent du lieu.");

static const u8 sTM44Desc[] = _(
    "Le lanceur dort 2\n"
    "tours et regagne\n"
    "PV et statut.");

static const u8 sTM45Desc[] = _(
    "Le genre opposé\n"
    "a moins de chances\n"
    "d’attaquer.");

static const u8 sTM46Desc[] = _(
    "Peut voler l’objet\n"
    "tenu par l’ennemi\n"
    "pendant l’attaque.");

static const u8 sTM47Desc[] = _(
    "Frappe l’ennemi en\n"
    "déployant ses ailes\n"
    "d’acier.");

static const u8 sTM48Desc[] = _(
    "Le lanceur et\n"
    "la cible échangent\n"
    "leurs capacités.");

static const u8 sTM49Desc[] = _(
    "Vole les effets de\n"
    "la prochaine\n"
    "attaque ennemie.");

static const u8 sTM50Desc[] = _(
    "Attaque à pleine\n"
    "puissance, mais\n"
    "baisse ATQ. SPE.");

static const u8 sTM51Desc[] = _( // Todo
    "?????");

static const u8 sTM52Desc[] = _( // Todo
    "?????");

static const u8 sTM53Desc[] = _( // Todo
    "?????");

static const u8 sTM54Desc[] = _( // Todo
    "?????");

static const u8 sTM55Desc[] = _( // Todo
    "?????");

static const u8 sTM56Desc[] = _( // Todo
    "?????");

static const u8 sTM57Desc[] = _( // Todo
    "?????");

static const u8 sTM58Desc[] = _( // Todo
    "?????");

static const u8 sTM59Desc[] = _( // Todo
    "?????");

static const u8 sTM60Desc[] = _( // Todo
    "?????");

static const u8 sTM61Desc[] = _( // Todo
    "?????");

static const u8 sTM62Desc[] = _( // Todo
    "?????");

static const u8 sTM63Desc[] = _( // Todo
    "?????");

static const u8 sTM64Desc[] = _( // Todo
    "?????");

static const u8 sTM65Desc[] = _( // Todo
    "?????");

static const u8 sTM66Desc[] = _( // Todo
    "?????");

static const u8 sTM67Desc[] = _( // Todo
    "?????");

static const u8 sTM68Desc[] = _( // Todo
    "?????");

static const u8 sTM69Desc[] = _( // Todo
    "?????");

static const u8 sTM70Desc[] = _( // Todo
    "?????");

static const u8 sTM71Desc[] = _( // Todo
    "?????");

static const u8 sTM72Desc[] = _( // Todo
    "?????");

static const u8 sTM73Desc[] = _( // Todo
    "?????");

static const u8 sTM74Desc[] = _( // Todo
    "?????");

static const u8 sTM75Desc[] = _( // Todo
    "?????");

static const u8 sTM76Desc[] = _( // Todo
    "?????");

static const u8 sTM77Desc[] = _( // Todo
    "?????");

static const u8 sTM78Desc[] = _( // Todo
    "?????");

static const u8 sTM79Desc[] = _( // Todo
    "?????");

static const u8 sTM80Desc[] = _( // Todo
    "?????");

static const u8 sTM81Desc[] = _( // Todo
    "?????");

static const u8 sTM82Desc[] = _( // Todo
    "?????");

static const u8 sTM83Desc[] = _( // Todo
    "?????");

static const u8 sTM84Desc[] = _( // Todo
    "?????");

static const u8 sTM85Desc[] = _( // Todo
    "?????");

static const u8 sTM86Desc[] = _( // Todo
    "?????");

static const u8 sTM87Desc[] = _( // Todo
    "?????");

static const u8 sTM88Desc[] = _( // Todo
    "?????");

static const u8 sTM89Desc[] = _( // Todo
    "?????");

static const u8 sTM90Desc[] = _( // Todo
    "?????");

static const u8 sTM91Desc[] = _( // Todo
    "?????");

static const u8 sTM92Desc[] = _( // Todo
    "?????");

static const u8 sTM93Desc[] = _( // Todo
    "?????");

static const u8 sTM94Desc[] = _( // Todo
    "?????");

static const u8 sTM95Desc[] = _( // Todo
    "?????");

static const u8 sTM96Desc[] = _( // Todo
    "?????");

static const u8 sTM97Desc[] = _( // Todo
    "?????");

static const u8 sTM98Desc[] = _( // Todo
    "?????");

static const u8 sTM99Desc[] = _( // Todo
    "?????");

static const u8 sTM100Desc[] = _( // Todo
    "?????");

static const u8 sHM01Desc[] = _(
    "Coupe l’ennemi avec\n"
    "des lames, des\n"
    "griffes, etc.");

static const u8 sHM02Desc[] = _(
    "S’envole au premier\n"
    "tour et frappe au\n"
    "second.");

static const u8 sHM03Desc[] = _(
    "Crée une énorme\n"
    "vague qui s’écrase\n"
    "sur l’ennemi.");

static const u8 sHM04Desc[] = _(
    "Accumule de la\n"
    "puissance, puis\n"
    "frappe l’ennemi.");

static const u8 sHM05Desc[] = _(
    "Explosion lumi-\n"
    "neuse baissant\n"
    "la précision.");

static const u8 sHM06Desc[] = _(
    "Une attaque\n"
    "puissante qui peut\n"
    "baisser la DEFENSE.");

static const u8 sHM07Desc[] = _(
    "Attaque rapide qui\n"
    "permet de franchir\n"
    "des cascades.");

static const u8 sHM08Desc[] = _(
    "Plonge en apnée\n"
    "au premier tour et\n"
    "frappe au second.");

// Charms
static const u8 sOvalCharmDesc[] = _(
    "Raises the chance\n"
    "of finding eggs\n"
    "at the daycare.");

static const u8 sShinyCharmDesc[] = _(
    "A charm that will\n"
    "raise the chance\n"
    "of Shiny Pokémon.");

static const u8 sCatchingCharmDesc[] = _(
    "A charm that raises\n"
    "the chance of\n"
    "Critical Captures.");

static const u8 sExpCharmDesc[] = _(
    "A charm that raises\n"
    "the amount of Exp.\n"
    "earned in battle.");

// Form-changing Key Items
static const u8 sRotomCatalogDesc[] = _(
    "A catalog full of\n"
    "deviced liked by\n"
    "Rotom.");

static const u8 sGracideaDesc[] = _(
    "Bouquets made with\n"
    "it are offered as a\n"
    "token of gratitude.");

static const u8 sRevealGlassDesc[] = _(
    "This glass returns\n"
    "a Pokémon back to\n"
    "its original form.");

static const u8 sDNASplicersDesc[] = _(
    "Splicer that fuses\n"
    "Kyurem and a\n"
    "certain Pokémon.");

static const u8 sZygardeCubeDesc[] = _(
    "An item to store\n"
    "Zygarde Cores and\n"
    "Cells.");

static const u8 sPrisonBottleDesc[] = _(
    "A bottle used to\n"
    "seal a certain\n"
    "Pokémon long ago.");

static const u8 sNSolarizerDesc[] = _(
    "A device to fuse\n"
    "and split Necrozma\n"
    "using a Solgaleo.");

static const u8 sNLunarizerDesc[] = _(
    "A device to fuse\n"
    "and split Necrozma\n"
    "using a Lunala.");

static const u8 sReinsOfUnityDesc[] = _(
    "Reins that unite\n"
    "Calyrex with its\n"
    "beloved steed.");

// Battle Mechanic Key Items
static const u8 sMegaRingDesc[] = _(
    "Enables {PKMN} holding\n"
    "their Mega Stone to\n"
    "Mega Evolve.");

static const u8 sZPowerRingDesc[] = _(
    "A strange ring\n"
    "that enables\n"
    "Z-Move usage.");

static const u8 sDynamaxBandDesc[] = _(
    "A band carrying a\n"
    "Wishing Star that\n"
    "allows Dynamaxing.");

// Misc. Key Items
static const u8 sBicycleDesc[] = _(
    "Un vélo pour aller\n"
    "plus vite qu’avec\n"
    "les CHAUSSURES.");

static const u8 sMachBikeDesc[] = _(
    "Un vélo pliable\n"
    "pour aller 2 fois\n"
    "plus vite qu’à pied.");

static const u8 sAcroBikeDesc[] = _(
    "Un vélo pliable\n"
    "pour faire des\n"
    "sauts.");

static const u8 sOldRodDesc[] = _(
    "Canne pour pêcher\n"
    "des POKéMON\n"
    "sauvages.");

static const u8 sGoodRodDesc[] = _(
    "Une bonne canne\n"
    "pour pêcher des\n"
    "POKéMON sauvages.");

static const u8 sSuperRodDesc[] = _(
    "La meilleure canne\n"
    "pour pêcher des\n"
    "POKéMON sauvages.");

static const u8 sDowsingMachineDesc[] = _(
    "A device that\n"
    "signals an invisible\n"
    "item by sound.");

static const u8 sTownMapDesc[] = _(
    "Carte pouvant être\n"
    "lue partout. Montre\n"
    "la position.");

static const u8 sVsSeekerDesc[] = _(
    "Montre ceux qui\n"
    "veulent se battre.\n"
    "Rechargeable.");

static const u8 sTMCaseDesc[] = _(
    "Une boîte pour\n"
    "ranger les CT et\n"
    "les CS.");

static const u8 sBerryPouchDesc[] = _(
    "Un petit sac pour\n"
    "transporter les\n"
    "BAIES.");

static const u8 sPokemonBoxLinkDesc[] = _(
    "This device grants\n"
    "access to the {PKMN}\n"
    "Storage System.");

static const u8 sCoinCaseDesc[] = _(
    "Une boîte qui peut\n"
    "contenir jusqu’à\n"
    "9 999 JETONS.");

static const u8 sPowderJarDesc[] = _(
    "Stores Berry\n"
    "Powder made using\n"
    "a Berry Crusher.");

static const u8 sWailmerPailDesc[] = _(
    "Outil utilisé pour\n"
    "arroser les BAIES\n"
    "et les plantes.");

static const u8 sPokeRadarDesc[] = _(
    "A tool used to\n"
    "search out Pokémon\n"
    "hiding in grass.");

static const u8 sPokeblockCaseDesc[] = _(
    "Boîte pour ranger\n"
    "les {POKEBLOCK}S créés\n"
    "avec le MIXEUR.");

static const u8 sSootSackDesc[] = _(
    "Un sac utilisé pour\n"
    "ramasser des cen-\n"
    "dres volcaniques.");

static const u8 sPokeFluteDesc[] = _(
    "Une flûte pouvant\n"
    "réveiller n’importe\n"
    "quel POKéMON.");

static const u8 sFameCheckerDesc[] = _(
    "Stocke les infos\n"
    "sur les gens\n"
    "importants.");

static const u8 sTeachyTVDesc[] = _(
    "Un programme qui\n"
    "donne des conseils\n"
    "aux DRESSEURS.");

// Story Key Items
static const u8 sSSTicketDesc[] = _(
    "Un ticket requis\n"
    "pour embarquer\n"
    "à bord d’un ferry.");

static const u8 sEonTicketDesc[] = _(
    "Un ticket de ferry\n"
    "pour une île\n"
    "lointaine, au sud.");

static const u8 sMysticTicketDesc[] = _(
    "Le ticket requis\n"
    "pour aller au\n"
    "ROC NOMBRI.");

static const u8 sAuroraTicketDesc[] = _(
    "Le ticket requis\n"
    "pour aller sur\n"
    "l’ILE AURORE.");

static const u8 sOldSeaMapDesc[] = _(
    "Une vieille carte\n"
    "montrant la route\n"
    "vers une île.");

static const u8 sLetterDesc[] = _(
    "Lettre pour PIERRE\n"
    "du PRESIDENT de la\n"
    "DEVON SARL.");

static const u8 sDevonPartsDesc[] = _(
    "A package that\n"
    "contains Devon's\n"
    "machine parts.");

static const u8 sGoGogglesDesc[] = _(
    "Lunettes proté-\n"
    "geant les yeux des\n"
    "tempêtes de sable.");

static const u8 sDevonScopeDesc[] = _(
    "Un appareil DEVON\n"
    "qui signale les\n"
    "POKéMON invisibles.");

static const u8 sBasementKeyDesc[] = _(
    "La clé de NEW\n"
    "LAVANDIA, située\n"
    "sous LAVANDIA.");

static const u8 sScannerDesc[] = _(
    "Un appareil trouvé\n"
    "dans l’EPAVE.");

static const u8 sStorageKeyDesc[] = _(
    "La clé de\n"
    "l’entrepôt\n"
    "de l’EPAVE.");

static const u8 sKeyToRoom1Desc[] = _(
    "Une clé pour ouvrir\n"
    "une des portes de\n"
    "l’EPAVE.");

static const u8 sKeyToRoom2Desc[] = _(
    "Une clé pour ouvrir\n"
    "une des portes de\n"
    "l’EPAVE.");

static const u8 sKeyToRoom4Desc[] = _(
    "Une clé pour ouvrir\n"
    "une des portes de\n"
    "l’EPAVE.");

static const u8 sKeyToRoom6Desc[] = _(
    "Une clé pour ouvrir\n"
    "une des portes de\n"
    "l’EPAVE.");

static const u8 sMeteoriteDesc[] = _(
    "Météorite venant \n"
    "du SITE METEORE.");

static const u8 sMagmaEmblemDesc[] = _(
    "Un objet portant le\n"
    "sceau de la\n"
    "TEAM MAGMA.");

static const u8 sContestPassDesc[] = _(
    "La carte requise\n"
    "pour participer aux\n"
    "CONCOURS POKéMON.");

static const u8 sOaksParcelDesc[] = _(
    "Un paquet pour le\n"
    "PROF. CHEN d’une\n"
    "BOUTIQUE {PKMN}.");

static const u8 sSecretKeyDesc[] = _(
    "La clé de l’entrée\n"
    "de l’ARENE de\n"
    "CRAMOIS’ILE.");

static const u8 sBikeVoucherDesc[] = _(
    "Bon à échanger\n"
    "contre un vélo aux\n"
    "CYCLES A GOGO.");

static const u8 sGoldTeethDesc[] = _(
    "Une dent en or\n"
    "du gardien du\n"
    "PARC SAFARI.");

static const u8 sCardKeyDesc[] = _(
    "Carte magnétique\n"
    "pouvant ouvrir\n"
    "la SYLPHE SARL.");

static const u8 sLiftKeyDesc[] = _(
    "Clé pour l’ascen-\n"
    "seur du REPAIRE\n"
    "de la TEAM ROCKET.");

static const u8 sSilphScopeDesc[] = _(
    "Un appareil de la\n"
    "SYLPHE pour voir\n"
    "les {PKMN} invisibles.");

static const u8 sTriPassDesc[] = _(
    "Un passe pour\n"
    "accéder aux\n"
    "ILES 1, 2 et 3.");

static const u8 sRainbowPassDesc[] = _(
    "Passe pour le ferry\n"
    "de CARMIN SUR MER\n"
    "aux ILES SEVII.");

static const u8 sTeaDesc[] = _(
    "Un thé préparé par\n"
    "une vieille femme.\n"
    "Etanche la soif.");

static const u8 sRubyDesc[] = _(
    "Une pierre rouge\n"
    "qui symbolise\n"
    "la passion.");

static const u8 sSapphireDesc[] = _(
    "Une pierre bleue\n"
    "qui symbolise\n"
    "l’honnêteté.");

static const u8 sAbilityShieldDesc[] = _(
    "Ability changes are\n"
    "prevented for this\n"
    "items's holder.");

static const u8 sClearAmuletDesc[] = _(
    "Stat lowering is\n"
    "prevented for this\n"
    "items's holder.");

static const u8 sPunchingGloveDesc[] = _(
    "Powers up punching\n"
    "moves and removes\n"
    "their contact.");

static const u8 sCovertCloakDesc[] = _(
    "Protects the holder\n"
    "from secondary\n"
    "move effects.");

static const u8 sLoadedDiceDesc[] = _(
    "Rolls high numbers.\n"
    "Multihit strikes\n"
    "hit more times.");

static const u8 sAuspiciousArmorDesc[] = _(
    "Armor inhabited by\n"
    "auspicious wishes.\n"
    "Causes evolution.");

static const u8 sBoosterEnergyDesc[] = _(
    "Encapsuled energy\n"
    "ups Pokémon with\n"
    "certain Abilities.");

static const u8 sBigBambooShootDesc[] = _(
    "A large and rare\n"
    "bamboo shoot. Best\n"
    "sold to gourmands.");

static const u8 sGimmighoulCoinDesc[] = _(
    "Gimmighoul hoard\n"
    "and treasure these\n"
    "curious coins.");

static const u8 sLeadersCrestDesc[] = _(
    "A shard of an old\n"
    "blade of some sort.\n"
    "Held by Bisharp.");

static const u8 sMaliciousArmorDesc[] = _(
    "Armor inhabited by\n"
    "malicious will.\n"
    "Causes evolution.");

static const u8 sMirrorHerbDesc[] = _(
    "Mirrors an enemy's\n"
    "stat increases\n"
    "but only once.");

static const u8 sScrollOfDarknessDesc[] = _(
    "A peculiar scroll\n"
    "with secrets of\n"
    "the dark path.");

static const u8 sScrollOfWatersDesc[] = _(
    "A peculiar scroll\n"
    "with secrets of\n"
    "the water path.");

static const u8 sTeraOrbDesc[] = _(
    "Energy charges can\n"
    "be used to cause\n"
    "Terastallization.");

static const u8 sTinyBambooShootDesc[] = _(
    "A small and rare\n"
    "bamboo shoot. Best\n"
    "sold to gourmands.");

static const u8 sTeraShardDesc[] = _(
    "These shards may\n"
    "form when a Tera\n"
    "Pokémon faints.");

static const u8 sAdamantCrystalDesc[] = _(
    "A large, glowing gem\n"
    "that lets Dialga\n"
    "change form.");

static const u8 sGriseousCoreDesc[] = _(
    "A large, glowing gem\n"
    "that lets Giratina\n"
    "change form.");

static const u8 sLustrousGlobeDesc[] = _(
    "A large, glowing gem\n"
    "that lets Palkia\n"
    "change form.");

static const u8 sBerserkGene[] = _(
    "Sharply boosts\n"
    "Attack, but causes\n"
    "lasting confusion.");
