
#if B_BINDING_TURNS >= GEN_5
#define BINDING_TURNS "4 ou 5"
#else
#define BINDING_TURNS "2 ou 5"
#endif

static const u8 sNullDescription[] = _(
    "");

static const u8 sPoundDescription[] = _(
    "Ecrase l’ennemi avec les\n"
    "pattes avant ou la queue.");

static const u8 sKarateChopDescription[] = _(
    "Une attaque tranchante à\n"
    "taux de critiques élevé.");

static const u8 sDoubleSlapDescription[] = _(
    "Gifle rapidement l’ennemi\n"
    "de 2 à 5 fois.");

static const u8 sCometPunchDescription[] = _(
    "Frappe rapidement l’ennemi\n"
    "de 2 à 5 fois.");

static const u8 sMegaPunchDescription[] = _(
    "Un coup de poing d’une\n"
    "puissance incroyable.");

static const u8 sPayDayDescription[] = _(
    "Lance des pièces. L’argent\n"
    "est récupéré plus tard.");

static const u8 sFirePunchDescription[] = _(
    "Un poing de feu pouvant\n"
    "brûler l’ennemi.");

static const u8 sIcePunchDescription[] = _(
    "Un poing de glace pouvant\n"
#if B_USE_FROSTBITE == TRUE
    "leave the foe with frostbite.");
#else
    "geler l’ennemi.");
#endif

static const u8 sThunderPunchDescription[] = _(
    "Un poing électrique\n"
    "pouvant paralyser l’ennemi.");

static const u8 sScratchDescription[] = _(
    "Lacère l’ennemi avec \n"
    "des griffes acérées.");

static const u8 sViseGripDescription[] = _(
    "Empoigne l’ennemi avec\n"
    "de puissantes pinces.");

static const u8 sGuillotineDescription[] = _(
    "Un puissant coup de pince\n"
    "qui peut mettre K.O.");

static const u8 sRazorWindDescription[] = _(
    "Une attaque en 2 tours qui\n"
    "frappe au 2{SUPER_E} tour.");

static const u8 sSwordsDanceDescription[] = _(
    "Une danse de combat pour\n"
    "booster l’ATTAQUE.");

static const u8 sCutDescription[] = _(
    "Coupe l’ennemi avec des\n"
    "lames, des griffes, etc.");

static const u8 sGustDescription[] = _(
    "Envoie une rafale de vent\n"
    "en battant des ailes.");

static const u8 sWingAttackDescription[] = _(
    "Frappe l’ennemi en \n"
    "déployant les ailes.");

static const u8 sWhirlwindDescription[] = _(
    "Envoie une rafale de vent\n"
    "et met fin au combat.");

static const u8 sFlyDescription[] = _(
    "S’envole au premier tour\n"
    "et frappe au second.");

static const u8 sBindDescription[] = _(
    "Ligote l’ennemi et l’écrase\n"
    "pendant "BINDING_TURNS" tours.");

static const u8 sSlamDescription[] = _(
    "Fouette l’ennemi avec une\n"
    "queue, une liane, etc.");

static const u8 sVineWhipDescription[] = _(
    "Fouette l’ennemi avec de\n"
    "fines lianes.");

static const u8 sStompDescription[] = _(
    "Ecrase avec un énorme pied.\n"
    "Peut apeurer l’ennemi.");

static const u8 sDoubleKickDescription[] = _(
    "Un double coup de pied qui\n"
    "frappe l’ennemi deux fois.");

static const u8 sMegaKickDescription[] = _(
    "Un coup de pied super\n"
    "puissant et intense.");

static const u8 sJumpKickDescription[] = _(
    "Un coup de pied sauté. Peut\n"
    "blesser le lanceur si raté.");

static const u8 sRollingKickDescription[] = _(
    "Un coup de pied tournoyant\n"
    "et extrêmement rapide.");

static const u8 sSandAttackDescription[] = _(
    "Lance du sable et baisse\n"
    "la précision de l’ennemi.");

static const u8 sHeadbuttDescription[] = _(
    "Une charge qui peut\n"
    "apeurer l’ennemi.");

static const u8 sHornAttackDescription[] = _(
    "Frappe l’ennemi d’un coup\n"
    "de corne pointue.");

static const u8 sFuryAttackDescription[] = _(
    "Frappe l’ennemi 2 à 5 fois\n"
    "avec des cornes, etc.");

static const u8 sHornDrillDescription[] = _(
    "Empale l’ennemi d’un coup de\n"
    "corne. Met K.O. en un coup.");

static const u8 sTackleDescription[] = _(
    "Charge l’ennemi avec un\n"
    "violent plaquage.");

static const u8 sBodySlamDescription[] = _(
    "Charge l’ennemi et peut\n"
    "Le paralyser.");

static const u8 sWrapDescription[] = _(
    "Ligote l’ennemi et l’étouffe\n"
    BINDING_TURNS" fois avec des lianes.");

static const u8 sTakeDownDescription[] = _(
    "Une charge violente qui\n"
    "blesse aussi le lanceur.");

static const u8 sThrashDescription[] = _(
    "Une attaque furieuse de 2 à\n"
    "3 tours. Lanceur confus.");

static const u8 sDoubleEdgeDescription[] = _(
    "Une dangereuse charge qui\n"
    "blesse aussi le lanceur.");

static const u8 sTailWhipDescription[] = _(
    "Remue la queue pour baisser\n"
    "la DEFENSE de l’ennemi.");

static const u8 sPoisonStingDescription[] = _(
    "Une attaque de dards, etc.,\n"
    "pouvant empoisonner.");

static const u8 sTwineedleDescription[] = _(
    "Les dards des pattes avant\n"
    "frappent deux fois.");

static const u8 sPinMissileDescription[] = _(
    "Envoie des dards qui\n"
    "frappent 2 à 5 fois.");

static const u8 sLeerDescription[] = _(
    "Lance un regard noir\n"
    "et baisse la DEFENSE.");

static const u8 sBiteDescription[] = _(
    "Mord méchamment l’ennemi\n"
    "et peut l’apeurer.");

static const u8 sGrowlDescription[] = _(
    "Rugit gentiment et baisse\n"
    "l’ATTAQUE de l’ennemi.");

static const u8 sRoarDescription[] = _(
    "Fait fuir l’ennemi pour\n"
    "mettre fin au combat.");

static const u8 sSingDescription[] = _(
    "Berceuse plongeant l’ennemi\n"
    "dans un profond sommeil.");

static const u8 sSupersonicDescription[] = _(
    "Etranges ondes sonores\n"
    "pouvant rendre confus.");

static const u8 sSonicBoomDescription[] = _(
    "Envoie des ondes de choc\n"
    "infligeant 20 PV de dégâts.");

static const u8 sDisableDescription[] = _(
    "Empêche l’utilisation d’une\n"
    "des attaques de l’ennemi.");

static const u8 sAcidDescription[] = _(
    "Pulvérise un acide. Peut\n"
    "baisser la DEFENSE ennemie.");

static const u8 sEmberDescription[] = _(
    "Une faible attaque de feu\n"
    "pouvant brûler l’ennemi.");

static const u8 sFlamethrowerDescription[] = _(
    "Une puissante attaque de\n"
    "feu pouvant brûler l’ennemi.");

static const u8 sMistDescription[] = _(
    "Crée une brume stoppant\n"
    "la réduction des capacités.");

static const u8 sWaterGunDescription[] = _(
    "Attaque l’ennemi en\n"
    "projetant de l’eau.");

static const u8 sHydroPumpDescription[] = _(
    "Envoie un puissant jet\n"
    "d’eau pour frapper l’ennemi.");

static const u8 sSurfDescription[] = _(
    "Crée une énorme vague qui\n"
    "s’écrase sur l’ennemi.");

static const u8 sIceBeamDescription[] = _(
    "Envoie un rayon de glace\n"
#if B_USE_FROSTBITE == TRUE
    "beam. May cause frostbite.");
#else
    "pouvant geler l’ennemi.");
#endif

static const u8 sBlizzardDescription[] = _(
    "Déclenche une tempête\n"
#if B_USE_FROSTBITE == TRUE
    "storm. May cause frostbite.");
#else
    "pouvant geler l’ennemi.");
#endif

static const u8 sPsybeamDescription[] = _(
    "Etrange rayon pouvant\n"
    "rendre l’ennemi confus.");

static const u8 sBubbleBeamDescription[] = _(
    "Envoie des bulles pouvant\n"
    "baisser la VITESSE.");

static const u8 sAuroraBeamDescription[] = _(
    "Envoie un rayon arc-en-ciel\n"
    "pouvant baisser l’ATTAQUE.");

static const u8 sHyperBeamDescription[] = _(
    "Puissant, mais immobilise\n"
    "le lanceur pour un tour.");

static const u8 sPeckDescription[] = _(
    "Attaque l’ennemi avec un\n"
    "bec pointu, etc.");

static const u8 sDrillPeckDescription[] = _(
    "Une attaque utilisant le\n"
    "bec comme une perceuse.");

static const u8 sSubmissionDescription[] = _(
    "Une charge violente qui\n"
    "blesse aussi le lanceur.");

static const u8 sLowKickDescription[] = _(
    "Un coup de pied faisant\n"
    "plus mal aux ennemis lourds.");

static const u8 sCounterDescription[] = _(
    "Renvoie toute attaque\n"
    "physique 2 fois plus fort.");

static const u8 sSeismicTossDescription[] = _(
    "Inflige des dégâts selon\n"
    "le niveau du lanceur.");

static const u8 sStrengthDescription[] = _(
    "Accumule de la puissance,\n"
    "puis frappe l’ennemi.");

static const u8 sAbsorbDescription[] = _(
    "Une attaque absorbant la\n"
    "moitié des dégâts infligés.");

static const u8 sMegaDrainDescription[] = _(
    "Une attaque absorbant la\n"
    "moitié des dégâts infligés.");

static const u8 sLeechSeedDescription[] = _(
    "Plante des graines pour\n"
    "voler des PV à chaque tour.");

static const u8 sGrowthDescription[] = _(
    "Développe le corps et\n"
    "augmente l’ATQ. SPE.");

static const u8 sRazorLeafDescription[] = _(
    "Tranche avec des feuilles.\n"
    "Taux de critiques élevé.");

static const u8 sSolarBeamDescription[] = _(
    "Absorbe la lumière et\n"
    "attaque le tour suivant.");

static const u8 sPoisonPowderDescription[] = _(
    "Répand une poudre toxique\n"
    "pouvant empoisonner.");

static const u8 sStunSporeDescription[] = _(
    "Répand une poudre pouvant\n"
    "paralyser l’ennemi.");

static const u8 sSleepPowderDescription[] = _(
    "Répand une poudre pouvant\n"
    "endormir l’ennemi.");

static const u8 sPetalDanceDescription[] = _(
    "Une attaque furieuse de 2 à\n"
    "3 tours. Lanceur confus.");

static const u8 sStringShotDescription[] = _(
    "Ligote l’ennemi afin de\n"
    "réduire sa VITESSE.");

static const u8 sDragonRageDescription[] = _(
    "Envoie des ondes de choc\n"
    "infligeant 40 PV de dégâts.");

static const u8 sFireSpinDescription[] = _(
    "Encercle l’ennemi de flammes\n"
    "pendant "BINDING_TURNS" tours.");

static const u8 sThunderShockDescription[] = _(
    "Une attaque électrique\n"
    "pouvant paralyser l’ennemi.");

static const u8 sThunderboltDescription[] = _(
    "Forte attaque électrique\n"
    "pouvant paralyser l’ennemi.");

static const u8 sThunderWaveDescription[] = _(
    "Un faible choc électrique\n"
    "qui paralyse l’ennemi.");

static const u8 sThunderDescription[] = _(
    "Une attaque foudroyante\n"
    "pouvant paralyser l’ennemi.");

static const u8 sRockThrowDescription[] = _(
    "Envoie des cailloux pour\n"
    "frapper l’ennemi.");

static const u8 sEarthquakeDescription[] = _(
    "Secousse sans effet sur\n"
    "les adversaires volants.");

static const u8 sFissureDescription[] = _(
    "Fait tomber l’ennemi dans\n"
    "une crevasse et le met K.O.");

static const u8 sDigDescription[] = _(
    "Creuse sous terre au 1{SUPER_ER}\n"
    "tour et frappe au 2{SUPER_E}.");

static const u8 sToxicDescription[] = _(
    "Empoisonne l’ennemi avec\n"
    "une puissante toxine.");

static const u8 sConfusionDescription[] = _(
    "Une attaque PSY pouvant\n"
    "rendre l’ennemi confus.");

static const u8 sPsychicDescription[] = _(
    "Une puissante attaque PSY\n"
    "pouvant baisser la DEF. SPE.");

static const u8 sHypnosisDescription[] = _(
    "Une attaque hypnotique\n"
    "pouvant endormir l’ennemi.");

static const u8 sMeditateDescription[] = _(
    "Méditation pacifique pour\n"
    "augmenter l’ATTAQUE.");

static const u8 sAgilityDescription[] = _(
    "Relaxation du corps pour\n"
    "booster la VITESSE.");

static const u8 sQuickAttackDescription[] = _(
    "Attaque fulgurante qui\n"
    "permet de frapper d’abord.");

static const u8 sRageDescription[] = _(
    "Augmente l’ATTAQUE du\n"
    "lanceur à chaque coup reçu.");

static const u8 sTeleportDescription[] = _(
    "Capacité PSY permettant de\n"
    "prendre aussitôt la fuite.");

static const u8 sNightShadeDescription[] = _(
    "Inflige des dégâts selon\n"
    "le niveau du lanceur.");

static const u8 sMimicDescription[] = _(
    "Imite une des attaques\n"
    "utilisées par l’ennemi.");

static const u8 sScreechDescription[] = _(
    "Cri strident qui baisse la\n"
    "DEFENSE ennemie.");

static const u8 sDoubleTeamDescription[] = _(
    "Crée des images-miroirs\n"
    "pour augmenter l’esquive.");

static const u8 sRecoverDescription[] = _(
    "Regagne jusqu’à la moitié\n"
    "des PV max du lanceur.");

static const u8 sHardenDescription[] = _(
    "Contracte les muscles pour\n"
    "augmenter la DEFENSE.");

static const u8 sMinimizeDescription[] = _(
    "Rapetisse le lanceur pour\n"
    "augmenter l’esquive.");

static const u8 sSmokescreenDescription[] = _(
    "Baisse la précision ennemie\n"
    "utilisant fumée, encre, etc.");

static const u8 sConfuseRayDescription[] = _(
    "Un horrible rayon qui rend\n"
    "l’ennemi confus.");

static const u8 sWithdrawDescription[] = _(
    "Se recroqueville dans sa\n"
    "carapace. Monte la DEFENSE.");

static const u8 sDefenseCurlDescription[] = _(
    "S’enroule, cache ses points\n"
    "faibles. Monte la DEFENSE.");

static const u8 sBarrierDescription[] = _(
    "Crée une barrière pour\n"
    "booster la DEFENSE.");

static const u8 sLightScreenDescription[] = _(
    "Crée un mur lumineux et\n"
    "réduit les dégâts d’ATQ. SP.");

static const u8 sHazeDescription[] = _(
    "Crée un nuage noir annulant\n"
    "tout changement d’état.");

static const u8 sReflectDescription[] = _(
    "Crée un mur lumineux.\n"
    "Affaiblit att. physiques.");

static const u8 sFocusEnergyDescription[] = _(
    "Concentration permettant\n"
    "un taux de critiques élevé.");

static const u8 sBideDescription[] = _(
    "Encaisse les attaques sur 2\n"
    "tours et renvoie le double.");

static const u8 sMetronomeDescription[] = _(
    "Remue un doigt et lance une\n"
    "attaque POKéMON au hasard.");

static const u8 sMirrorMoveDescription[] = _(
    "Contre l’attaque de l’ennemi\n"
    "avec la même attaque.");

static const u8 sSelfDestructDescription[] = _(
    "Inflige de sérieux dégâts,\n"
    "mais met le lanceur K.O.");

static const u8 sEggBombDescription[] = _(
    "Envoie violemment un œuf\n"
    "en direction de l’ennemi.");

static const u8 sLickDescription[] = _(
    "Blesse avec un long coup de\n"
    "langue. Peut paralyser.");

static const u8 sSmogDescription[] = _(
    "Un gaz nocif pouvant\n"
    "empoisonner l’ennemi.");

static const u8 sSludgeDescription[] = _(
    "Blesse en envoyant des\n"
    "détritus. Peut empoisonner.");

static const u8 sBoneClubDescription[] = _(
    "Cogne l’ennemi avec un os.\n"
    "Peut apeurer.");

static const u8 sFireBlastDescription[] = _(
    "Carbonise ce qui est touché.\n"
    "Peut brûler l’ennemi.");

static const u8 sWaterfallDescription[] = _(
    "Charge rapide permettant\n"
    "de franchir des cascades.");

static const u8 sClampDescription[] = _(
    "Piège l’ennemi et l’écrase\n"
    "pendant "BINDING_TURNS" tours.");

static const u8 sSwiftDescription[] = _(
    "Envoie des rayons en forme\n"
    "d’étoile. Touche toujours.");

static const u8 sSkullBashDescription[] = _(
    "Rentre la tête et attaque\n"
    "au tour suivant.");

static const u8 sSpikeCannonDescription[] = _(
    "Lance des pointes qui\n"
    "frappent 2 à 5 fois.");

static const u8 sConstrictDescription[] = _(
    "Etrangle pour blesser.\n"
    "Peut baisser la VITESSE.");

static const u8 sAmnesiaDescription[] = _(
    "Oublie quelque chose et\n"
    "booste la DEF. SPE.");

static const u8 sKinesisDescription[] = _(
    "Distrait l’ennemi.\n"
    "Peut baisser la précision.");

static const u8 sSoftBoiledDescription[] = _(
    "Regagne jusqu’à la moitié\n"
    "des PV max du lanceur.");

static const u8 sHighJumpKickDescription[] = _(
    "Coup de pied sauté. S’il est\n"
    "raté, le lanceur se blesse.");

static const u8 sGlareDescription[] = _(
    "Intimide l’ennemi et le\n"
    "paralyse de terreur.");

static const u8 sDreamEaterDescription[] = _(
    "Aspire la moitié des dégâts\n"
    "infligés à l’ennemi endormi.");

static const u8 sPoisonGasDescription[] = _(
    "Enveloppe l’ennemi d’un gaz\n"
    "toxique. Peut empoisonner.");

static const u8 sBarrageDescription[] = _(
    "Projette 2 à 5 fois des \n"
    "objets vers l’ennemi.");

static const u8 sLeechLifeDescription[] = _(
    "Une attaque qui aspire la\n"
    "moitié des dégâts infligés.");

static const u8 sLovelyKissDescription[] = _(
    "Demande un bisou en\n"
    "grimaçant. Peut endormir.");

static const u8 sSkyAttackDescription[] = _(
    "Cherche les points faibles\n"
    "et frappe au tour suivant.");

static const u8 sTransformDescription[] = _(
    "Modifie ses cellules pour\n"
    "copier l’ennemi.");

static const u8 sBubbleDescription[] = _(
    "Une attaque de bulles\n"
    "pouvant baisser la VITESSE.");

static const u8 sDizzyPunchDescription[] = _(
    "Un coup de poing cadencé.\n"
    "Peut rendre confus.");

static const u8 sSporeDescription[] = _(
    "Répand un nuage de spores\n"
    "qui endort à tous les coups.");

static const u8 sFlashDescription[] = _(
    "Explosion lumineuse qui\n"
    "fait baisser la précision.");

static const u8 sPsywaveDescription[] = _(
    "Envoie une onde PSY\n"
    "d’intensité variable.");

static const u8 sSplashDescription[] = _(
    "Eclabousse l’ennemi...\n"
    "N’a aucun effet.");

static const u8 sAcidArmorDescription[] = _(
    "Liquéfie le corps du lanceur\n"
    "et booste sa DEFENSE.");

static const u8 sCrabhammerDescription[] = _(
    "Cogne avec une pince.\n"
    "Taux de critiques élevé.");

static const u8 sExplosionDescription[] = _(
    "Inflige de sérieux dégâts,\n"
    "mais met le lanceur K.O.");

static const u8 sFurySwipesDescription[] = _(
    "Ecorche l’ennemi avec des\n"
    "griffes, etc., de 2 à 5 fois.");

static const u8 sBonemerangDescription[] = _(
    "Lance un boomerang en os\n"
    "qui frappe deux fois.");

static const u8 sRestDescription[] = _(
    "Le lanceur dort 2 tours\n"
    "et regagne PV et statut.");

static const u8 sRockSlideDescription[] = _(
    "Envoie de gros rochers.\n"
    "Peut apeurer l’ennemi.");

static const u8 sHyperFangDescription[] = _(
    "Blesse d’un coup de croc.\n"
    "Peut apeurer l’ennemi.");

static const u8 sSharpenDescription[] = _(
    "Réduit les polygones\n"
    "et augmente l’ATTAQUE.");

static const u8 sConversionDescription[] = _(
    "Change le type du lanceur\n"
    "en celui d’une cap. connue.");

static const u8 sTriAttackDescription[] = _(
    "Envoie trois types de\n"
    "rayons en même temps.");

static const u8 sSuperFangDescription[] = _(
    "Coup de croc qui fait\n"
    "baisser les PV de moitié.");

static const u8 sSlashDescription[] = _(
    "Coups de griffe, etc.\n"
    "Taux de critiques élevé.");

static const u8 sSubstituteDescription[] = _(
    "Crée un leurre avec 1/4\n"
    "des PV max du lanceur.");

static const u8 sStruggleDescription[] = _(
    "Fonctionne s’il ne reste\n"
    "plus de PP. Blesse un peu.");

static const u8 sSketchDescription[] = _(
    "Copie en permanence la\n"
    "dernière attaque ennemie.");

static const u8 sTripleKickDescription[] = _(
    "Trois coups de pied de plus\n"
    "en plus puissants.");

static const u8 sThiefDescription[] = _(
    "Peut voler l’objet tenu par\n"
    "l’ennemi pendant l’attaque.");

static const u8 sSpiderWebDescription[] = _(
    "Capture l’ennemi et empêche\n"
    "toute fuite ou changement.");

static const u8 sMindReaderDescription[] = _(
    "Pressent l’action pour\n"
    "réussir l’attaque suivante.");

static const u8 sNightmareDescription[] = _(
    "Inflige 1/4 de dégâts à un\n"
    "ennemi endormi chaque tour.");

static const u8 sFlameWheelDescription[] = _(
    "Une charge enflammée qui\n"
    "peut brûler l’ennemi.");

static const u8 sSnoreDescription[] = _(
    "Attaque sonore qui ne peut\n"
    "être lancée qu’endormi.");

static const u8 sCurseDescription[] = _(
    "Coup qui fonctionne autre-\n"
    "ment pour les SPECTRES.");

static const u8 sFlailDescription[] = _(
    "Inflige plus de dégâts si les\n"
    "PV du lanceur sont faibles.");

static const u8 sConversion2Description[] = _(
    "Permet de résister au type\n"
    "de la dernière attaque.");

static const u8 sAeroblastDescription[] = _(
    "Implosion à taux de\n"
    "coups critiques élevé.");

static const u8 sCottonSporeDescription[] = _(
    "Envoie des spores pour\n"
    "baisser la VITESSE.");

static const u8 sReversalDescription[] = _(
    "Inflige plus de dégâts si les\n"
    "PV du lanceur sont faibles.");

static const u8 sSpiteDescription[] = _(
    "Réduit méchamment les PP\n"
    "de la dernière att. ennemie.");

static const u8 sPowderSnowDescription[] = _(
    "Envoie une rafale de neige.\n"
    "Peut geler l’ennemi.");

static const u8 sProtectDescription[] = _(
    "Esquive l’attaque, mais\n"
    "peut échouer si réutilisé.");

static const u8 sMachPunchDescription[] = _(
    "Coup de poing fulgurant.\n"
    "Permet de frapper le 1{SUPER_ER}.");

static const u8 sScaryFaceDescription[] = _(
    "Effraie avec une grimace\n"
    "pour baisser la VITESSE.");

static const u8 sFeintAttackDescription[] = _(
    "Attire l’ennemi et frappe\n"
    "sans jamais échouer.");

static const u8 sSweetKissDescription[] = _(
    "Demande un bisou tout\n"
    "mignon. Peut rendre confus.");

static const u8 sBellyDrumDescription[] = _(
    "Améliore l’ATTAQUE en\n"
    "sacrifiant des PV.");

static const u8 sSludgeBombDescription[] = _(
    "Envoie des détritus pour\n"
    "blesser. Peut empoisonner.");

static const u8 sMudSlapDescription[] = _(
    "Envoie de la boue au visage\n"
    "pour baisser la précision.");

static const u8 sOctazookaDescription[] = _(
    "Jet d’encre qui blesse\n"
    "et baisse la précision.");

static const u8 sSpikesDescription[] = _(
    "Pointes blessant lors d’un\n"
    "changement d’adversaire.");

static const u8 sZapCannonDescription[] = _(
    "Puissant et paralysant, \n"
    "mais pas très précis.");

static const u8 sForesightDescription[] = _(
    "Empêche l’ennemi\n"
    "d’améliorer son esquive.");

static const u8 sDestinyBondDescription[] = _(
    "Si le lanceur est mis K.O.,\n"
    "l’ennemi le sera également.");

static const u8 sPerishSongDescription[] = _(
    "Un POKéMON qui entend ce\n"
    "requiem est K.O. en 3 tours.");

static const u8 sIcyWindDescription[] = _(
    "Attaque glaciale. Baisse\n"
    "la VITESSE de l’ennemi.");

static const u8 sDetectDescription[] = _(
    "Esquive l’attaque, mais\n"
    "peut échouer si réutilisé.");

static const u8 sBoneRushDescription[] = _(
    "Frappe l’ennemi 2 à 5 fois\n"
    "avec un os.");

static const u8 sLockOnDescription[] = _(
    "Le coup suivant sera réussi\n"
    "à coup sûr.");

static const u8 sOutrageDescription[] = _(
    "Une attaque furieuse sur 2\n"
    "à 3 tours. Lanceur confus.");

static const u8 sSandstormDescription[] = _(
    "Une tempête de sable qui\n"
    "souffle plusieurs tours.");

static const u8 sGigaDrainDescription[] = _(
    "Une attaque qui absorbe la\n"
    "moitié des dégâts infligés.");

static const u8 sEndureDescription[] = _(
    "Encaisse les attaques du\n"
    "tour et conserve 1 PV.");

static const u8 sCharmDescription[] = _(
    "Charme l’ennemi et baisse\n"
    "brusquement son ATTAQUE.");

static const u8 sRolloutDescription[] = _(
    "Une attaque sur 5 tours,\n"
    "de plus en plus puissante.");

static const u8 sFalseSwipeDescription[] = _(
    "Une attaque qui laisse au\n"
    "moins 1 PV à l’ennemi.");

static const u8 sSwaggerDescription[] = _(
    "Rend l’ennemi confus et\n"
    "booste l’ATTAQUE.");

static const u8 sMilkDrinkDescription[] = _(
    "Regagne jusqu’à la moitié\n"
    "des PV max du lanceur.");

static const u8 sSparkDescription[] = _(
    "Une charge électrique qui\n"
    "peut paralyser l’ennemi.");

static const u8 sFuryCutterDescription[] = _(
    "Une attaque qui s’inten-\n"
    "sifie après chaque coup.");

static const u8 sSteelWingDescription[] = _(
    "Frappe l’ennemi en \n"
    "déployant des ailes d’acier.");

static const u8 sMeanLookDescription[] = _(
    "Lance un regard méchant\n"
    "pour empêcher la fuite.");

static const u8 sAttractDescription[] = _(
    "Le genre opposé a moins de\n"
    "chances d’attaquer.");

static const u8 sSleepTalkDescription[] = _(
    "Utilise un coup connu\n"
    "au hasard en dormant.");

static const u8 sHealBellDescription[] = _(
    "Carillon apaisant qui soigne\n"
    "tout changement de statut.");

static const u8 sReturnDescription[] = _(
    "Attaque dont la puissance\n"
    "dépend de l’amitié.");

static const u8 sPresentDescription[] = _(
    "Cadeau en forme de bombe.\n"
    "Peut restaurer des PV.");

static const u8 sFrustrationDescription[] = _(
    "Attaque plus puissante si\n"
    "le DRESSEUR est mal aimé.");

static const u8 sSafeguardDescription[] = _(
    "Force mystique empêchant\n"
    "tout changement de statut.");

static const u8 sPainSplitDescription[] = _(
    "Ajoute les PV des deux com-\n"
    "battants et les partage.");

static const u8 sSacredFireDescription[] = _(
    "Une attaque de feu mys-\n"
    "tique pouvant brûler.");

static const u8 sMagnitudeDescription[] = _(
    "Un tremblement de terre\n"
    "d’intensité variable.");

static const u8 sDynamicPunchDescription[] = _(
    "Puissant et rend confus, \n"
    "mais pas très précis.");

static const u8 sMegahornDescription[] = _(
    "Une charge violente,\n"
    "toutes cornes en avant.");

static const u8 sDragonBreathDescription[] = _(
    "Frappe l’ennemi grâce à\n"
    "un souffle super puissant.");

static const u8 sBatonPassDescription[] = _(
    "Change de lanceur, mais\n"
    "garde les effets en cours.");

static const u8 sEncoreDescription[] = _(
    "Oblige l’ennemi à répéter sa\n"
    "dernière action 2 à 6 tours.");

static const u8 sPursuitDescription[] = _(
    "Inflige de sérieux dégâts\n"
    "lorsque l’ennemi change.");

static const u8 sRapidSpinDescription[] = _(
    "Frappe l’ennemi en\n"
    "tournant sur soi-même.");

static const u8 sSweetScentDescription[] = _(
    "Séduit l’ennemi pour\n"
    "baisser son esquive.");

static const u8 sIronTailDescription[] = _(
    "Attaque avec sa queue.\n"
    "Peut baisser la DEFENSE.");

static const u8 sMetalClawDescription[] = _(
    "Attaque avec des griffes.\n"
    "Peut augmenter l’ATTAQUE.");

static const u8 sVitalThrowDescription[] = _(
    "Attaque en dernier\n"
    "mais n’échoue jamais.");

static const u8 sMorningSunDescription[] = _(
    "Restaure les PV.\n"
    "Varie suivant le temps.");

static const u8 sSynthesisDescription[] = _(
    "Restaure les PV.\n"
    "Varie suivant le temps.");

static const u8 sMoonlightDescription[] = _(
    "Restaure les PV.\n"
    "Varie suivant le temps.");

static const u8 sHiddenPowerDescription[] = _(
    "L’efficacité de l’attaque\n"
    "dépend du lanceur.");

static const u8 sCrossChopDescription[] = _(
    "2 attaques tranchantes.\n"
    "Taux de critiques élevé.");

static const u8 sTwisterDescription[] = _(
    "Déclenche un terrible\n"
    "ouragan blessant l’ennemi.");

static const u8 sRainDanceDescription[] = _(
    "Améliore les attaques EAU\n"
    "pendant 5 tours.");

static const u8 sSunnyDayDescription[] = _(
    "Améliore les attaques FEU\n"
    "pendant 5 tours.");

static const u8 sCrunchDescription[] = _(
    "Utilise des crocs pointus.\n"
    "Peut baisser la DEF. SPE.");

static const u8 sMirrorCoatDescription[] = _(
    "Renvoie l’attaque spéciale\n"
    "ennemie 2 fois plus fort.");

static const u8 sPsychUpDescription[] = _(
    "Copie les effets de l’ennemi\n"
    "et les passe au lanceur.");

static const u8 sExtremeSpeedDescription[] = _(
    "Une attaque extrêmement\n"
    "rapide et puissante.");

static const u8 sAncientPowerDescription[] = _(
    "Une attaque pouvant aug-\n"
    "menter toutes les stats.");

static const u8 sShadowBallDescription[] = _(
    "Projette une grande tache\n"
    "qui peut baisser la DEF. SPE.");

static const u8 sFutureSightDescription[] = _(
    "Accumule de l’énergie pour\n"
    "frapper 2 tours plus tard.");

static const u8 sRockSmashDescription[] = _(
    "Une attaque puissante qui\n"
    "peut baisser la DEFENSE.");

static const u8 sWhirlpoolDescription[] = _(
    "Piège l’ennemi dans un tour-\n"
    "billon pendant "BINDING_TURNS" tours.");

static const u8 sBeatUpDescription[] = _(
    "Appelle un POKéMON qui\n"
    "se joint à l’attaque.");

static const u8 sFakeOutDescription[] = _(
    "Une attaque en début de\n"
    "bataille pour apeurer.");

static const u8 sUproarDescription[] = _(
#if B_UPROAR_TURNS >= GEN_5
    "Brouhaha de 2 à 5 tours.\n"
#else
    "Causes an uproar for 3\n"
#endif
    "Empêche de dormir.");

static const u8 sStockpileDescription[] = _(
    "Accumule de la puissance\n"
    "pendant 3 tours maximum.");

static const u8 sSpitUpDescription[] = _(
    "Libère la puissance\n"
    "précédemment accumulée.");

static const u8 sSwallowDescription[] = _(
    "Absorbe la puissance accu-\n"
    "mulée et restaure les PV.");

static const u8 sHeatWaveDescription[] = _(
    "Un souffle ardent pouvant\n"
    "brûler l’ennemi.");

static const u8 sHailDescription[] = _(
    "Tempête de grêle qui\n"
    "frappe à chaque tour.");

static const u8 sTormentDescription[] = _(
    "Perturbe l’ennemi. Empêche\n"
    "la réutilisation d’une att.");

static const u8 sFlatterDescription[] = _(
    "Rend l’ennemi confus, mais\n"
    "augmente son ATQ. SPE.");

static const u8 sWillOWispDescription[] = _(
    "Inflige une douloureuse \n"
    "brûlure à l’ennemi.");

static const u8 sMementoDescription[] = _(
    "Le lanceur est mis K.O. et\n"
    "baisse les cap. ennemies.");

static const u8 sFacadeDescription[] = _(
    "Améliore l’ATTAQUE si brûlé,\n"
    "paralysé ou empoisonné.");

static const u8 sFocusPunchDescription[] = _(
    "Lanceur apeuré si touché.\n"
    "Attaque puissante.");

static const u8 sSmellingSaltsDescription[] = _(
    "Utile contre les ennemis\n"
    "paralysés, mais les soigne.");

static const u8 sFollowMeDescription[] = _(
    "Attire l’attention. Les adv.\n"
    "n’attaquent que le lanceur.");

static const u8 sNaturePowerDescription[] = _(
    "Le type de l’attaque change\n"
    "selon le lieu du combat.");

static const u8 sChargeDescription[] = _(
    "Charge de la puissance pour\n"
    "l’att. électrique suivante.");

static const u8 sTauntDescription[] = _(
    "Provoque l’ennemi. L’oblige\n"
    "à utiliser ses attaques.");

static const u8 sHelpingHandDescription[] = _(
    "Améliore la puissance\n"
    "d’attaque du receveur.");

static const u8 sTrickDescription[] = _(
    "Oblige la cible à échanger\n"
    "les objets tenus.");

static const u8 sRolePlayDescription[] = _(
    "Imite la cible et copie\n"
    "sa capacité spéciale.");

static const u8 sWishDescription[] = _(
    "Un vœu qui restaure les PV.\n"
    "Demande un certain temps.");

static const u8 sAssistDescription[] = _(
    "Attaque au hasard avec un\n"
    "coup d’un des partenaires.");

static const u8 sIngrainDescription[] = _(
    "Plante des racines, regagne\n"
    "PV, ne peut plus changer.");

static const u8 sSuperpowerDescription[] = _(
    "Booste la force, mais\n"
    "baisse les capacités.");

static const u8 sMagicCoatDescription[] = _(
    "Renvoie les effets\n"
    "spéciaux vers le lanceur.");

static const u8 sRecycleDescription[] = _(
    "Recycle un objet pour\n"
    "l’utiliser une fois de plus.");

static const u8 sRevengeDescription[] = _(
    "Gagne en puissance quand\n"
    "blessé par l’ennemi.");

static const u8 sBrickBreakDescription[] = _(
    "Détruit les barrières comme\n"
    "PROTECTION et blesse.");

static const u8 sYawnDescription[] = _(
    "Fait bâiller l’ennemi, qui\n"
    "s’endort au tour suivant.");

static const u8 sKnockOffDescription[] = _(
    "Frappe l’objet tenu pour\n"
    "le rendre inutilisable.");

static const u8 sEndeavorDescription[] = _(
    "Gagne en puissance si PV\n"
    "inférieurs aux PV ennemis.");

static const u8 sEruptionDescription[] = _(
    "Inflige plus de dégâts si PV\n"
    "du lanceur sont élevés.");

static const u8 sSkillSwapDescription[] = _(
    "Le lanceur et la cible\n"
    "échangent leurs cap. spéc.");

static const u8 sImprisonDescription[] = _(
    "Empêche les ennemis d’uti-\n"
    "liser les coups du lanceur.");

static const u8 sRefreshDescription[] = _(
    "Soigne un empoisonnement,\n"
    "une paralysie, une brûlure.");

static const u8 sGrudgeDescription[] = _(
    "Si mis K.O., supprime les PP\n"
    "du dernier coup ennemi.");

static const u8 sSnatchDescription[] = _(
    "Vole les effets de la pro-\n"
    "chaine attaque de la cible.");

static const u8 sSecretPowerDescription[] = _(
    "Les effets de l’attaque\n"
    "dépendent du lieu.");

static const u8 sDiveDescription[] = _(
    "Plonge en apnée au premier\n"
    "tour et frappe au second.");

static const u8 sArmThrustDescription[] = _(
    "Coups de poing arrêtés qui\n"
    "frappent 2 à 5 fois.");

static const u8 sCamouflageDescription[] = _(
    "Change le type du POKéMON\n"
    "selon le lieu.");

static const u8 sTailGlowDescription[] = _(
    "Flash lumineux qui booste\n"
    "l’ATQ. SPE.");

static const u8 sLusterPurgeDescription[] = _(
    "Envoie une lueur intense.\n"
    "Peut baisser DEF. SPE.");

static const u8 sMistBallDescription[] = _(
    "Envoie une rafale de duvet.\n"
    "Peut baisser ATQ. SPE.");

static const u8 sFeatherDanceDescription[] = _(
    "Enveloppe l’ennemi de duvet\n"
    "et baisse l’ATTAQUE.");

static const u8 sTeeterDanceDescription[] = _(
    "Rend tous les POKéMON\n"
    "engagés confus.");

static const u8 sBlazeKickDescription[] = _(
    "Coup de pied à taux de cri-\n"
    "tiques élevé. Peut brûler.");

static const u8 sMudSportDescription[] = _(
    "Couvre le lanceur de boue.\n"
    "Augmente résist. électr.");

static const u8 sIceBallDescription[] = _(
    "Une attaque en 5 tours de\n"
    "plus en plus puissante.");

static const u8 sNeedleArmDescription[] = _(
    "Attaque avec des bras\n"
    "épineux. Peut apeurer.");

static const u8 sSlackOffDescription[] = _(
    "Se détend et récupère\n"
    "la moitié des PV maximum.");

static const u8 sHyperVoiceDescription[] = _(
    "Attaque bruyante blessant\n"
    "avec des ondes sonores.");

static const u8 sPoisonFangDescription[] = _(
    "Morsure pouvant sérieuse-\n"
    "ment empoisonner l’ennemi.");

static const u8 sCrushClawDescription[] = _(
    "Lacère avec des griffes.\n"
    "Peut baisser la DEFENSE.");

static const u8 sBlastBurnDescription[] = _(
    "Puissant, mais immobilise\n"
    "le lanceur au tour suivant.");

static const u8 sHydroCannonDescription[] = _(
    "Puissant, mais immobilise\n"
    "le lanceur au tour suivant.");

static const u8 sMeteorMashDescription[] = _(
    "Coup de poing météore.\n"
    "Peut augmenter l’ATTAQUE.");

static const u8 sAstonishDescription[] = _(
    "Une attaque qui peut cho-\n"
    "quer et apeurer l’ennemi.");

static const u8 sWeatherBallDescription[] = _(
    "Type et puissance de\n"
    "l’attaque selon le climat.");

static const u8 sAromatherapyDescription[] = _(
    "Parfum apaisant soignant\n"
    "les changements de statut.");

static const u8 sFakeTearsDescription[] = _(
    "Fait semblant de pleurer\n"
    "pour baisser la DEF. SPE.");

static const u8 sAirCutterDescription[] = _(
    "Un vent tranchant.\n"
    "Taux de critiques élevé.");

static const u8 sOverheatDescription[] = _(
    "Attaque à pleine puissance,\n"
    "mais baisse ATQ. SPE.");

static const u8 sOdorSleuthDescription[] = _(
    "Empêche l’ennemi\n"
    "d’augmenter son esquive.");

static const u8 sRockTombDescription[] = _(
    "Immobilise l’ennemi avec des\n"
    "rochers. Baisse la VITESSE.");

static const u8 sSilverWindDescription[] = _(
    "Attaque poudreuse qui peut\n"
    "augmenter les capacités.");

static const u8 sMetalSoundDescription[] = _(
    "Cri horrible qui baisse la\n"
    "DEF. SPE. énormément.");

static const u8 sGrassWhistleDescription[] = _(
    "Endort l’ennemi en sifflant\n"
    "une douce mélodie.");

static const u8 sTickleDescription[] = _(
    "Fait rire l’ennemi et baisse\n"
    "son ATTAQUE et sa DEFENSE.");

static const u8 sCosmicPowerDescription[] = _(
    "Pouvoir mystique qui monte\n"
    "la DEFENSE et la DEF. SPE.");

static const u8 sWaterSpoutDescription[] = _(
    "Inflige plus de dégâts si le\n"
    "lanceur a beaucoup de PV.");

static const u8 sSignalBeamDescription[] = _(
    "Un étrange rayon qui peut\n"
    "rendre l’ennemi confus.");

static const u8 sShadowPunchDescription[] = _(
    "Un coup de poing inévitable\n"
    "sortant de l’ombre.");

static const u8 sExtrasensoryDescription[] = _(
    "Pouvoir singulier qui peut\n"
    "apeurer l’ennemi.");

static const u8 sSkyUppercutDescription[] = _(
    "Un uppercut porté en\n"
    "direction du ciel.");

static const u8 sSandTombDescription[] = _(
    "Piège l’ennemi dans un \n"
    "cyclone sur "BINDING_TURNS" tours.");

static const u8 sSheerColdDescription[] = _(
    "Attaque glacée qui met K.O.\n"
    "quand elle est réussie.");

static const u8 sMuddyWaterDescription[] = _(
    "Attaque d’eau croupie.\n"
    "Peut baisser la précision.");

static const u8 sBulletSeedDescription[] = _(
    "Mitraille l’ennemi avec 2 à\n"
    "5 graines à la suite.");

static const u8 sAerialAceDescription[] = _(
    "Attaque extrêmement\n"
    "rapide et inévitable.");

static const u8 sIcicleSpearDescription[] = _(
    "Mitraille l’ennemi avec 2 à\n"
    "5 glaçons à la suite.");

static const u8 sIronDefenseDescription[] = _(
    "Endurcit le corps pour\n"
    "booster la DEFENSE.");

static const u8 sBlockDescription[] = _(
    "Bloque la route de l’ennemi\n"
    "pour empêcher sa fuite.");

static const u8 sHowlDescription[] = _(
    "Grogne pour se rassurer\n"
    "et booster l’ATTAQUE.");

static const u8 sDragonClawDescription[] = _(
    "Tranche l’ennemi avec\n"
    "des griffes acérées.");

static const u8 sFrenzyPlantDescription[] = _(
    "Puissant, mais immobilise\n"
    "le lanceur au tour suivant.");

static const u8 sBulkUpDescription[] = _(
    "Se gonfle pour booster\n"
    "l’ATTAQUE et la DEFENSE.");

static const u8 sBounceDescription[] = _(
    "Saute et tombe le tour\n"
    "suivant. Peut paralyser.");

static const u8 sMudShotDescription[] = _(
    "Envoie de la boue à l’ennemi\n"
    "pour réduire sa VITESSE.");

static const u8 sPoisonTailDescription[] = _(
    "Haut taux de critiques.\n"
    "Peut aussi empoisonner.");

static const u8 sCovetDescription[] = _(
    "Demande gentiment un objet\n"
    "détenu par l’ennemi.");

static const u8 sVoltTackleDescription[] = _(
    "Une dangereuse charge qui\n"
    "blesse aussi le lanceur.");

static const u8 sMagicalLeafDescription[] = _(
    "Envoie des feuilles ne\n"
    "pouvant être esquivées.");

static const u8 sWaterSportDescription[] = _(
    "Mouille le lanceur et aug-\n"
    "mente sa résistance au feu.");

static const u8 sCalmMindDescription[] = _(
    "Méditation pour augmenter\n"
    "l’ATQ. SPE. et la DEF. SPE.");

static const u8 sLeafBladeDescription[] = _(
    "Tranche avec une feuille.\n"
    "Taux de critiques élevé.");

static const u8 sDragonDanceDescription[] = _(
    "Danse mystique augmentant\n"
    "l’ATTAQUE et la VITESSE.");

static const u8 sRockBlastDescription[] = _(
    "Projette des rochers sur\n"
    "l’ennemi 2 à 5 fois de suite.");

static const u8 sShockWaveDescription[] = _(
    "Attaque électrique rapide\n"
    "et impossible à esquiver.");

static const u8 sWaterPulseDescription[] = _(
    "Envoi d’ondes aquatiques.\n"
    "Peut rendre confus.");

static const u8 sDoomDesireDescription[] = _(
    "Récupère la lumière pour\n"
    "frapper 2 tours plus tard.");

static const u8 sPsychoBoostDescription[] = _(
    "Attaque à pleine puissance,\n"
    "mais baisse ATQ. SPE.");

static const u8 sRoostDescription[] = _(
    "Restores the user's HP by\n"
    "half of its max HP.");

static const u8 sGravityDescription[] = _(
    "Gravity is intensified\n"
    "negating levitation.");

static const u8 sMiracleEyeDescription[] = _(
    "Negate evasiveness and\n"
    "Dark-type's immunities.");

static const u8 sWakeUpSlapDescription[] = _(
    "Powerful against sleeping\n"
    "foes, but also heals them.");

static const u8 sHammerArmDescription[] = _(
    "A swinging fist attack\n"
    "that also lowers Speed.");

static const u8 sGyroBallDescription[] = _(
    "A high-speed spin that does\n"
    "more damage to faster foes.");

static const u8 sHealingWishDescription[] = _(
    "The user faints to heal up\n"
    "the recipient.");

static const u8 sBrineDescription[] = _(
    "Does double damage to foes\n"
    "with half HP.");

static const u8 sNaturalGiftDescription[] = _(
    "The effectiveness varies\n"
    "with the held Berry.");

static const u8 sFeintDescription[] = _(
    "An attack that hits foes\n"
    "using moves like Protect.");

static const u8 sPluckDescription[] = _(
    "Eats the foe's held Berry\n"
    "gaining its effect.");

static const u8 sTailwindDescription[] = _(
    "Whips up a turbulent breeze\n"
    "that raises Speed.");

static const u8 sAcupressureDescription[] = _(
    "The user sharply raises\n"
    "one of its stats.");

static const u8 sMetalBurstDescription[] = _(
    "Retaliates any hit with\n"
    "greater power.");

static const u8 sUTurnDescription[] = _(
    "Does damage then switches\n"
    "out the user.");

static const u8 sCloseCombatDescription[] = _(
    "A strong attack but lowers\n"
    "the defensive stats.");

static const u8 sPaybackDescription[] = _(
    "An attack that gains power\n"
    "if the user moves last.");

static const u8 sAssuranceDescription[] = _(
    "An attack that gains power\n"
    "if the foe has been hurt.");

static const u8 sEmbargoDescription[] = _(
    "Prevents the foe from\n"
    "using any items.");

static const u8 sFlingDescription[] = _(
    "The effectiveness varies\n"
    "with the held item.");

static const u8 sPsychoShiftDescription[] = _(
    "Transfers status problems\n"
    "to the foe.");

static const u8 sTrumpCardDescription[] = _(
    "The less PP the move has\n"
    "the more damage it does.");

static const u8 sHealBlockDescription[] = _(
    "Prevents the foe from\n"
    "recovering any HP.");

static const u8 sWringOutDescription[] = _(
    "The higher the foe's HP\n"
    "the more damage caused.");

static const u8 sPowerTrickDescription[] = _(
    "The user swaps its Attack\n"
    "and Defense stats.");

static const u8 sGastroAcidDescription[] = _(
    "Stomach acid suppresses\n"
    "the foe's ability.");

static const u8 sLuckyChantDescription[] = _(
    "Prevents the foe from\n"
    "landing critical hits.");

static const u8 sMeFirstDescription[] = _(
    "Executes the foe's attack\n"
    "with greater power.");

static const u8 sCopycatDescription[] = _(
    "The user mimics the last\n"
    "move used by a foe.");

static const u8 sPowerSwapDescription[] = _(
    "Swaps changes to Attack\n"
    "and Sp. Atk with the foe.");

static const u8 sGuardSwapDescription[] = _(
    "Swaps changes to Defense\n"
    "and Sp. Def with the foe.");

static const u8 sPunishmentDescription[] = _(
    "Does more damage if the\n"
    "foe has powered up.");

static const u8 sLastResortDescription[] = _(
    "Can only be used if every\n"
    "other move has been used.");

static const u8 sWorrySeedDescription[] = _(
    "Plants a seed on the foe\n"
    "giving it Insomnia.");

static const u8 sSuckerPunchDescription[] = _(
    "Strikes first if the foe\n"
    "is preparing an attack.");

static const u8 sToxicSpikesDescription[] = _(
    "Sets spikes that poison a\n"
    "foe switching in.");

static const u8 sHeartSwapDescription[] = _(
    "Swaps any stat changes\n"
    "with the foe.");

static const u8 sAquaRingDescription[] = _(
    "Forms a veil of water\n"
    "that restores HP.");

static const u8 sMagnetRiseDescription[] = _(
    "The user levitates with\n"
    "electromagnetism.");

static const u8 sFlareBlitzDescription[] = _(
    "A charge that may burn the\n"
    "foe. Also hurts the user.");

static const u8 sForcePalmDescription[] = _(
    "A shock wave attack that\n"
    "may paralyze the foe.");

static const u8 sAuraSphereDescription[] = _(
    "Attacks with an aura blast\n"
    "that cannot be evaded.");

static const u8 sRockPolishDescription[] = _(
    "Polishes the body to\n"
    "sharply raise Speed.");

static const u8 sPoisonJabDescription[] = _(
    "A stabbing attack that\n"
    "may poison the foe.");

static const u8 sDarkPulseDescription[] = _(
    "Attacks with a horrible\n"
    "aura. May cause flinching.");

static const u8 sNightSlashDescription[] = _(
    "Hits as soon as possible.\n"
    "High critical-hit ratio.");

static const u8 sAquaTailDescription[] = _(
    "The user swings its tail\n"
    "like a wave to attack.");

static const u8 sSeedBombDescription[] = _(
    "A barrage of hard seeds\n"
    "is fired at the foe.");

static const u8 sAirSlashDescription[] = _(
    "Attacks with a blade of\n"
    "air. May cause flinching.");

static const u8 sXScissorDescription[] = _(
    "Slashes the foe with crossed\n"
    "scythes, claws, etc.");

static const u8 sBugBuzzDescription[] = _(
    "A damaging sound wave that\n"
    "may lower Sp. Def.");

static const u8 sDragonPulseDescription[] = _(
    "Generates a shock wave to\n"
    "damage the foe.");

static const u8 sDragonRushDescription[] = _(
    "Tackles the foe with menace.\n"
    "May cause flinching.");

static const u8 sPowerGemDescription[] = _(
    "Attacks with rays of light\n"
    "that sparkle like diamonds.");

static const u8 sVacuumWaveDescription[] = _(
    "Whirls its fists to send\n"
    "a wave that strikes first.");

static const u8 sFocusBlastDescription[] = _(
    "Attacks at full power.\n"
    "May lower Sp. Def.");

static const u8 sEnergyBallDescription[] = _(
    "Draws power from nature to\n"
    "attack. May lower Sp. Def.");

static const u8 sBraveBirdDescription[] = _(
    "A low altitude charge that\n"
    "also hurts the user.");

static const u8 sEarthPowerDescription[] = _(
    "Makes the ground erupt with\n"
    "power. May lower Sp. Def.");

static const u8 sSwitcherooDescription[] = _(
    "Swaps items with the foe\n"
    "faster than the eye can see.");

static const u8 sNastyPlotDescription[] = _(
    "Thinks bad thoughts to\n"
    "sharply boost Sp. Atk.");

static const u8 sBulletPunchDescription[] = _(
    "Punches as fast as a bul-\n"
    "let. It always hits first.");

static const u8 sIceShardDescription[] = _(
    "Hurls a chunk of ice that\n"
    "always strike first.");

static const u8 sShadowClawDescription[] = _(
    "Strikes with a shadow claw.\n"
    "High critical-hit ratio.");

static const u8 sThunderFangDescription[] = _(
    "May cause flinching or\n"
    "leave the foe paralyzed.");

static const u8 sIceFangDescription[] = _(
    "May cause flinching or\n"
    "leave the foe frozen.");

static const u8 sFireFangDescription[] = _(
    "May cause flinching or\n"
    "leave the foe with a burn.");

static const u8 sShadowSneakDescription[] = _(
    "Extends the user's shadow\n"
    "to strike first.");

static const u8 sMudBombDescription[] = _(
    "Throws a blob of mud to\n"
    "damage and cut accuracy.");

static const u8 sPsychoCutDescription[] = _(
    "Tears with psychic blades.\n"
    "High critical-hit ratio.");

static const u8 sZenHeadbuttDescription[] = _(
    "Hits with a strong head-\n"
    "butt. May cause flinching.");

static const u8 sMirrorShotDescription[] = _(
    "Emits a flash of energy to\n"
    "damage and cut accuracy.");

static const u8 sFlashCannonDescription[] = _(
    "Releases a blast of light\n"
    "that may lower Sp. Def.");

static const u8 sRockClimbDescription[] = _(
    "A charging attack that may\n"
    "confuse the foe.");

static const u8 sDefogDescription[] = _(
    "Removes obstacles and\n"
    "lowers evasion.");

static const u8 sTrickRoomDescription[] = _(
    "Slower Pokémon get to move\n"
    "first for 5 turns.");

static const u8 sDracoMeteorDescription[] = _(
    "Casts comets onto the foe.\n"
    "Harshly lowers the Sp. Atk.");

static const u8 sDischargeDescription[] = _(
    "Zaps the foes with electri-\n"
    "city. May paralyze them.");

static const u8 sPowerWhipDescription[] = _(
    "Violently lashes the foe\n"
    "with vines or tentacles.");

static const u8 sCrossPoisonDescription[] = _(
    "A slash that may poison a\n"
    "foe and do critical damage.");

static const u8 sGunkShotDescription[] = _(
    "Shoots filthy garbage at\n"
    "the foe. May also poison.");

static const u8 sIronHeadDescription[] = _(
    "Slams the foe with a hard\n"
    "head. May cause flinching.");

static const u8 sMagnetBombDescription[] = _(
    "Launches a magnet that\n"
    "strikes without fail.");

static const u8 sStoneEdgeDescription[] = _(
    "Stabs the foe with stones.\n"
    "High critical-hit ratio.");

static const u8 sCaptivateDescription[] = _(
    "Makes the opposite gender\n"
    "sharply reduce its Sp. Atk.");

static const u8 sStealthRockDescription[] = _(
    "Sets floating stones that\n"
    "hurt a foe switching in.");

static const u8 sGrassKnotDescription[] = _(
    "A snare attack that does\n"
    "more damage to heavier foes.");

static const u8 sChatterDescription[] = _(
    "Attacks with a sound wave\n"
    "that causes confusion.");

static const u8 sJudgmentDescription[] = _(
    "The type varies with the\n"
    "kind of Plate held.");

static const u8 sChargeBeamDescription[] = _(
    "Fires a beam of electricity.\n"
    "May raise Sp. Atk.");

static const u8 sWoodHammerDescription[] = _(
    "Slams the body into a foe.\n"
    "The user gets hurt too.");

static const u8 sAquaJetDescription[] = _(
    "Strikes first by dashing\n"
    "at the foe at a high speed.");

static const u8 sAttackOrderDescription[] = _(
    "Underlings pummel the foe.\n"
    "High critical-hit ratio.");

static const u8 sDefendOrderDescription[] = _(
    "Raises Defense and Sp. Def\n"
    "with a living shield.");

static const u8 sHealOrderDescription[] = _(
    "The user's underlings show\n"
    "up to heal half its max HP.");

static const u8 sHeadSmashDescription[] = _(
    "A life-risking headbutt that\n"
    "seriously hurts the user.");

static const u8 sDoubleHitDescription[] = _(
    "Slams the foe with a tail\n"
    "etc. Strikes twice.");

static const u8 sRoarOfTimeDescription[] = _(
    "Powerful, but leaves the\n"
    "user immobile the next turn.");

static const u8 sSpacialRendDescription[] = _(
    "Tears the foe, and space.\n"
    "High critical-hit ratio.");

static const u8 sMagmaStormDescription[] = _(
    "Traps the foe in a vortex\n"
    "of fire for "BINDING_TURNS" turns.");

static const u8 sDarkVoidDescription[] = _(
    "Drags the foe into total\n"
    "darkness, inducing Sleep.");

static const u8 sSeedFlareDescription[] = _(
    "Generates a shock wave that\n"
    "sharply reduces Sp. Def.");

static const u8 sOminousWindDescription[] = _(
    "A repulsive attack that may\n"
    "raise all stats.");

static const u8 sShadowForceDescription[] = _(
    "Vanishes on the first turn\n"
    "then strikes the next turn.");

static const u8 sHoneClawsDescription[] = _(
    "Sharpens its claws to raise\n"
    "Attack and Accuracy.");

static const u8 sWideGuardDescription[] = _(
    "Evades wide-ranging attacks\n"
    "for one turn.");

static const u8 sGuardSplitDescription[] = _(
    "Averages changes to Defense\n"
    "and Sp. Def with the foe.");

static const u8 sPowerSplitDescription[] = _(
    "Averages changes to Attack\n"
    "and Sp. Atk with the foe.");

static const u8 sWonderRoomDescription[] = _(
    "Defense and Sp. Def stats\n"
    "are swapped for 5 turns.");

static const u8 sPsyshockDescription[] = _(
    "Attacks with a psychic wave\n"
    "that does physical damage.");

static const u8 sTailSlapDescription[] = _(
    "Strikes the foe with its\n"
    "tail 2 to 5 times.");

static const u8 sVenoshockDescription[] = _(
    "Does double damage if the\n"
    "foe is poisoned.");

static const u8 sAutotomizeDescription[] = _(
    "Sheds additional weight to\n"
    "sharply boost Speed.");

static const u8 sRagePowderDescription[] = _(
    "Scatters powder to make\n"
    "foes attack only the user.");

static const u8 sTelekinesisDescription[] = _(
    "Makes the foe float. It is\n"
    "easier to hit for 3 turns.");

static const u8 sMagicRoomDescription[] = _(
    "Hold items lose their\n"
    "effects for 5 turns.");

static const u8 sSmackDownDescription[] = _(
    "Throws a rock to knock the\n"
    "foe down to the ground.");

static const u8 sStormThrowDescription[] = _(
    "This attack always results\n"
    "in a critical hit.");

static const u8 sFlameBurstDescription[] = _(
    "A bursting flame that does\n"
    "damage to all foes.");

static const u8 sSludgeWaveDescription[] = _(
    "Swamps the foe with a wave\n"
    "of sludge. May also poison.");

static const u8 sQuiverDanceDescription[] = _(
    "Dances to raise Sp. Atk\n"
    "Sp. Def and Speed.");

static const u8 sHeavySlamDescription[] = _(
    "Does more damage if the\n"
    "user outweighs the foe.");

static const u8 sSynchronoiseDescription[] = _(
    "An odd shock wave that only\n"
    "damages same-type foes.");

static const u8 sElectroBallDescription[] = _(
    "Hurls an orb that does more\n"
    "damage to slower foes.");

static const u8 sSoakDescription[] = _(
    "Sprays water at the foe\n"
    "making it Water-type.");

static const u8 sFlameChargeDescription[] = _(
    "Attacks in a cloak of\n"
    "flames. Raises Speed.");

static const u8 sCoilDescription[] = _(
    "Coils up to raise Attack\n"
    "Defense and Accuracy.");

static const u8 sLowSweepDescription[] = _(
    "Attacks the foe's legs\n"
    "lowering its Speed.");

static const u8 sAcidSprayDescription[] = _(
    "Sprays a hide-melting acid.\n"
    "Sharply reduces Sp. Def.");

static const u8 sFoulPlayDescription[] = _(
    "The higher the foe's Attack\n"
    "the more damage caused.");

static const u8 sSimpleBeamDescription[] = _(
    "A beam that changes the\n"
    "foe's ability to Simple.");

static const u8 sEntrainmentDescription[] = _(
    "Makes the foe mimic the\n"
    "user, gaining its ability.");

static const u8 sAfterYouDescription[] = _(
    "Helps out the foe, letting\n"
    "it move next.");

static const u8 sRoundDescription[] = _(
    "A song that inflicts damage.\n"
    "Others can join in too.");

static const u8 sEchoedVoiceDescription[] = _(
    "Does more damage every turn\n"
    "it is used.");

static const u8 sChipAwayDescription[] = _(
    "Strikes through the foe's\n"
    "stat changes.");

static const u8 sClearSmogDescription[] = _(
    "Attacks with white haze that\n"
    "eliminates all stat changes.");

static const u8 sStoredPowerDescription[] = _(
    "The higher the user's stats\n"
    "the more damage caused.");

static const u8 sQuickGuardDescription[] = _(
    "Evades priority attacks\n"
    "for one turn.");

static const u8 sAllySwitchDescription[] = _(
    "The user switches places\n"
    "with its partner.");

static const u8 sScaldDescription[] = _(
    "Shoots boiling water at the\n"
    "foe. May inflict a burn.");

static const u8 sShellSmashDescription[] = _(
    "Raises offensive stats, but\n"
    "lowers defensive stats.");

static const u8 sHealPulseDescription[] = _(
    "Recovers up to half the\n"
    "target's maximum HP.");

static const u8 sHexDescription[] = _(
    "Does double damage if the\n"
    "foe has a status problem.");

static const u8 sSkyDropDescription[] = _(
    "Takes the foe into the sky\n"
    "then drops it the next turn.");

static const u8 sShiftGearDescription[] = _(
    "Rotates its gears to raise\n"
    "Attack and Speed.");

static const u8 sCircleThrowDescription[] = _(
    "Knocks the foe away to end\n"
    "the battle.");

static const u8 sIncinerateDescription[] = _(
    "Burns up Berries and Gems\n"
    "preventing their use.");

static const u8 sQuashDescription[] = _(
    "Suppresses the foe, making\n"
    "it move last.");

static const u8 sAcrobaticsDescription[] = _(
    "Does double damage if the\n"
    "user has no item.");

static const u8 sReflectTypeDescription[] = _(
    "The user reflects the foe's\n"
    "type, copying it.");

static const u8 sRetaliateDescription[] = _(
    "An attack that does more\n"
    "damage if an ally fainted.");

static const u8 sFinalGambitDescription[] = _(
    "The user faints to damage\n"
    "the foe equal to its HP.");

static const u8 sBestowDescription[] = _(
    "The user gives its held\n"
    "item to the foe.");

static const u8 sInfernoDescription[] = _(
    "Powerful and sure to inflict\n"
    "a burn, but inaccurate.");

static const u8 sWaterPledgeDescription[] = _(
    "Attacks with a column of\n"
    "water. May make a rainbow.");

static const u8 sFirePledgeDescription[] = _(
    "Attacks with a column of\n"
    "fire. May burn the grass.");

static const u8 sGrassPledgeDescription[] = _(
    "Attacks with a column of\n"
    "grass. May create a swamp.");

static const u8 sStruggleBugDescription[] = _(
    "Resisting, the user attacks\n"
    "the foe. Lowers Sp. Atk.");

static const u8 sBulldozeDescription[] = _(
    "Stomps down on the ground.\n"
    "Lowers Speed.");

static const u8 sWorkUpDescription[] = _(
    "The user is roused.\n"
    "Ups Attack and Sp. Atk.");

static const u8 sElectrowebDescription[] = _(
    "Snares the foe with an\n"
    "electric net. Lowers Speed.");

static const u8 sWildChargeDescription[] = _(
    "An electrical tackle that\n"
    "also hurts the user.");

static const u8 sDrillRunDescription[] = _(
    "Spins its body like a drill.\n"
    "High critical-hit ratio.");

static const u8 sDualChopDescription[] = _(
    "Attacks with brutal hits\n"
    "that strike twice.");

static const u8 sHeartStampDescription[] = _(
    "A sudden blow after a cute\n"
    "act. May cause flinching.");

static const u8 sRazorShellDescription[] = _(
    "Tears at the foe with sharp\n"
    "shells. May lower Defense.");

static const u8 sLeafTornadoDescription[] = _(
    "Circles the foe with leaves\n"
    "to damage and cut accuracy.");

static const u8 sSteamrollerDescription[] = _(
    "Crushes the foe with its\n"
    "body. May cause flinching.");

static const u8 sCottonGuardDescription[] = _(
    "Wraps its body in cotton.\n"
    "Drastically raises Defense.");

static const u8 sNightDazeDescription[] = _(
    "Looses a pitch-black shock\n"
    "wave. May lower accuracy.");

static const u8 sHurricaneDescription[] = _(
    "Traps the foe in a fierce\n"
    "wind. May cause confusion.");

static const u8 sHeadChargeDescription[] = _(
    "A charge using guard hair.\n"
    "It hurts the user a little.");

static const u8 sGearGrindDescription[] = _(
    "Throws two steel gears\n"
    "that strike twice.");

static const u8 sTechnoBlastDescription[] = _(
    "The type varies with the\n"
    "kind of Drive held.");

static const u8 sRelicSongDescription[] = _(
    "Attacks with an ancient\n"
    "song. May induce sleep.");

static const u8 sSecretSwordDescription[] = _(
    "Cuts with a long horn that\n"
    "does physical damage.");

static const u8 sGlaciateDescription[] = _(
    "Blows very cold air at the\n"
    "foe. It lowers their Speed.");

static const u8 sBoltStrikeDescription[] = _(
    "Strikes with a great amount\n"
    "of lightning. May paralyze.");

static const u8 sBlueFlareDescription[] = _(
    "Engulfs the foe in a blue\n"
    "flame. May inflict a burn.");

static const u8 sFieryDanceDescription[] = _(
    "Dances cloaked in flames.\n"
    "May raise Sp. Atk.");

static const u8 sFreezeShockDescription[] = _(
    "A powerful 2-turn move that\n"
    "may paralyze the foe.");

static const u8 sIceBurnDescription[] = _(
    "A powerful 2-turn move that\n"
    "may inflict a burn.");

static const u8 sSnarlDescription[] = _(
    "Yells and rants at the foe\n"
    "lowering its Sp. Atk.");

static const u8 sIcicleCrashDescription[] = _(
    "Drops large icicles on the\n"
    "foe. May cause flinching.");

static const u8 sVCreateDescription[] = _(
    "Very powerful, but lowers\n"
    "Defense, Sp. Def and Speed.");

static const u8 sFusionFlareDescription[] = _(
    "Summons a fireball. Works\n"
    "well with a thunderbolt.");

static const u8 sFusionBoltDescription[] = _(
    "Summons a thunderbolt.\n"
    "Works well with a fireball.");

static const u8 sFlyingPressDescription[] = _(
    "This attack does Fighting\n"
    "and Flying-type damage.");

static const u8 sMatBlockDescription[] = _(
    "Evades damaging moves\n"
    "for one turn.");

static const u8 sBelchDescription[] = _(
    "Lets out a loud belch.\n"
    "Must eat a Berry to use it.");

static const u8 sRototillerDescription[] = _(
    "Ups the Attack and Sp. Atk\n"
    "of Grass-type Pokémon.");

static const u8 sStickyWebDescription[] = _(
    "Weaves a sticky net that\n"
    "slows foes switching in.");

static const u8 sFellStingerDescription[] = _(
    "If it knocks out a foe\n"
    "the Attack stat is raised.");

static const u8 sTrickOrTreatDescription[] = _(
    "Goes trick-or-treating\n"
    "making the foe Ghost-type.");

static const u8 sNobleRoarDescription[] = _(
    "Intimidates the foe, to cut\n"
    "Attack and Sp. Atk.");

static const u8 sIonDelugeDescription[] = _(
    "Electrifies Normal-type\n"
    "moves with charged atoms.");

static const u8 sParabolicChargeDescription[] = _(
    "Damages adjacent Pokémon and\n"
    "heals up by half of it.");

static const u8 sForestsCurseDescription[] = _(
    "Puts a curse on the foe\n"
    "making the foe Grass-type.");

static const u8 sPetalBlizzardDescription[] = _(
    "Stirs up a violent storm\n"
    "of petals to attack.");

static const u8 sFreezeDryDescription[] = _(
    "Super effective on Water-\n"
    "types. May cause freezing.");

static const u8 sDisarmingVoiceDescription[] = _(
    "Lets out a charming cry\n"
    "that cannot be evaded.");

static const u8 sPartingShotDescription[] = _(
    "Lowers the foe's Attack and\n"
    "Sp. Atk, then switches out.");

static const u8 sTopsyTurvyDescription[] = _(
    "Swaps all stat changes that\n"
    "affect the target.");

static const u8 sDrainingKissDescription[] = _(
    "An attack that absorbs over\n"
    "half the damage inflicted.");

static const u8 sCraftyShieldDescription[] = _(
    "Evades status moves for\n"
    "one turn.");

static const u8 sFlowerShieldDescription[] = _(
    "Raises the Defense of\n"
    "Grass-type Pokémon.");

static const u8 sGrassyTerrainDescription[] = _(
    "The ground turns to grass\n"
    "for 5 turns. Restores HP.");

static const u8 sMistyTerrainDescription[] = _(
    "Covers the ground with mist\n"
    "for 5 turns. Blocks status.");

static const u8 sElectrifyDescription[] = _(
    "Electrifies the foe, making\n"
    "its next move Electric-type.");

static const u8 sPlayRoughDescription[] = _(
    "Plays rough with the foe.\n"
    "May lower Attack.");

static const u8 sFairyWindDescription[] = _(
    "Stirs up a fairy wind to\n"
    "strike the foe.");

static const u8 sMoonblastDescription[] = _(
    "Attacks with the power of\n"
    "the moon. May lower Sp. Atk.");

static const u8 sBoomburstDescription[] = _(
    "Attacks everything with a\n"
    "destructive sound wave.");

static const u8 sFairyLockDescription[] = _(
    "Locks down the battlefield\n"
    "preventing escape next turn.");

static const u8 sKingsShieldDescription[] = _(
    "Evades damage, and sharply\n"
    "reduces Attack if struck.");

static const u8 sPlayNiceDescription[] = _(
    "Befriend the foe, lowering\n"
    "its Attack without fail.");

static const u8 sConfideDescription[] = _(
    "Shares a secret with the\n"
    "foe, lowering Sp. Atk.");

static const u8 sDiamondStormDescription[] = _(
    "Whips up a storm of\n"
    "diamonds. May up Defense.");

static const u8 sSteamEruptionDescription[] = _(
    "Immerses the foe in heated\n"
    "steam. May inflict a burn.");

static const u8 sHyperspaceHoleDescription[] = _(
    "Uses a warp hole to attack.\n"
    "Can't be evaded.");

static const u8 sWaterShurikenDescription[] = _(
    "Throws 2 to 5 stars that\n"
    "are sure to strike first.");

static const u8 sMysticalFireDescription[] = _(
    "Breathes a special, hot\n"
    "fire. Lowers Sp. Atk.");

static const u8 sSpikyShieldDescription[] = _(
    "Evades attack, and damages\n"
    "the foe if struck.");

static const u8 sAromaticMistDescription[] = _(
    "Raises the Sp. Def of a\n"
    "partner Pokémon.");

static const u8 sEerieImpulseDescription[] = _(
    "Exposes the foe to a pulse\n"
    "that sharply cuts Sp. Atk.");

static const u8 sVenomDrenchDescription[] = _(
    "Lowers the Attack, Sp. Atk\n"
    "and Speed of a poisoned foe.");

static const u8 sPowderDescription[] = _(
    "Damages the foe if it uses\n"
    "a Fire-type move.");

static const u8 sGeomancyDescription[] = _(
    "Raises Sp. Atk, Sp. Def and\n"
    "Speed on the 2nd turn.");

static const u8 sMagneticFluxDescription[] = _(
    "Boosts the defenses of\n"
    "those with Plus or Minus.");

static const u8 sHappyHourDescription[] = _(
    "Doubles the amount of\n"
    "Prize Money received.");

static const u8 sElectricTerrainDescription[] = _(
    "Electrifies the ground for\n"
    "5 turns. Prevents sleep.");

static const u8 sDazzlingGleamDescription[] = _(
    "Damages foes by emitting\n"
    "a bright flash.");

static const u8 sCelebrateDescription[] = _(
    "Congratulates you on your\n"
    "special day.");

static const u8 sHoldHandsDescription[] = _(
    "The user and ally hold hands\n"
    "making them happy.");

static const u8 sBabyDollEyesDescription[] = _(
    "Lowers the foe's Attack\n"
    "before it can move.");

static const u8 sNuzzleDescription[] = _(
    "Rubs its cheecks against\n"
    "the foe, paralyzing it.");

static const u8 sInfestationDescription[] = _(
    "The foe is infested and\n"
    "attacked for "BINDING_TURNS" turns.");

static const u8 sPowerUpPunchDescription[] = _(
    "A hard punch that raises\n"
    "the user's Attack.");

static const u8 sThousandArrowsDescription[] = _(
    "Can hit Flying foes, then\n"
    "knocks them to the ground.");

static const u8 sThousandWavesDescription[] = _(
    "Those hit by the wave can\n"
    "no longer escape.");

static const u8 sLandsWrathDescription[] = _(
    "Gathers the energy of the\n"
    "land to attack every foe.");

static const u8 sLightOfRuinDescription[] = _(
    "Fires a great beam of light\n"
    "that also hurts the user.");

static const u8 sOriginPulseDescription[] = _(
    "Beams of glowing blue light\n"
    "blast both foes.");

static const u8 sPrecipiceBladesDescription[] = _(
    "Fearsome blades of stone\n"
    "attack both foes.");

static const u8 sLavaPlumeDescription[] = _(
    "Scarlet flames torch\n"
    "everything around the user.");

static const u8 sLeafStormDescription[] = _(
    "Whips up a storm of leaves.\n"
    "Harshly lowers the Sp. Atk.");

static const u8 sShoreUpDescription[] = _(
    "Restores the user's HP.\n"
    "More HP in a sandstorm.");

static const u8 sFirstImpressionDescription[] = _(
    "Hits hard and first.\n"
    "Only works first turn.");

static const u8 sBanefulBunkerDescription[] = _(
    "Protects user and poisons\n"
    "foes on contact.");

static const u8 sSpiritShackleDescription[] = _(
    "After being hit, foes can\n"
    "no longer escape.");

static const u8 sDarkestLariatDescription[] = _(
    "Swings the arms to strike\n"
    "It ignores stat changes.");

static const u8 sSparklingAriaDescription[] = _(
    "Sings with bubbles. Cures\n"
    "burns on contact.");

static const u8 sIceHammerDescription[] = _(
    "Swings the fist to strike.\n"
    "Lowers the user's Speed.");

static const u8 sFloralHealingDescription[] = _(
    "Restores an ally's HP.\n"
    "Heals more on grass.");

static const u8 sHighHorsepowerDescription[] = _(
    "Slams hard into the foe with\n"
    "its entire body.");

static const u8 sStrengthSapDescription[] = _(
    "Saps the foe's Attack to\n"
    "heal HP, then drops Attack.");

static const u8 sSolarBladeDescription[] = _(
    "Charges first turn, then\n"
    "chops with a blade of light.");

static const u8 sLeafageDescription[] = _(
    "Attacks with a flurry of\n"
    "small leaves.");

static const u8 sSpotlightDescription[] = _(
    "Makes the foe attack the\n"
    "spotlighted Pokémon.");

static const u8 sToxicThreadDescription[] = _(
    "Attacks with a thread that\n"
    "poisons and drops Speed.");

static const u8 sLaserFocusDescription[] = _(
    "Guarantees the next move\n"
    "will be a critical hit.");

static const u8 sGearUpDescription[] = _(
    "Boosts the attacks of\n"
    "those with Plus or Minus.");

static const u8 sThroatChopDescription[] = _(
    "Chops the throat to disable\n"
    "sound moves for a while.");

static const u8 sPollenPuffDescription[] = _(
    "Explodes on foes, but\n"
    "restores ally's HP.");

static const u8 sAnchorShotDescription[] = _(
    "Strangles the foe with a\n"
    "chain. The foe can't escape.");

static const u8 sPsychicTerrainDescription[] = _(
    "The ground turns weird for\n"
    "5 turns. Blocks priority.");

static const u8 sLungeDescription[] = _(
    "Lunges at the foe to lower\n"
    "its Attack stat.");

static const u8 sFireLashDescription[] = _(
    "Whips the foe with fire\n"
    "lowering its Defense.");

static const u8 sPowerTripDescription[] = _(
    "It hits harder the more\n"
    "stat boosts the user has.");

static const u8 sBurnUpDescription[] = _(
    "Burns out the user fully\n"
    "removing the Fire type.");

static const u8 sSpeedSwapDescription[] = _(
    "Swaps user's Speed with\n"
    "the target's.");

static const u8 sSmartStrikeDescription[] = _(
    "Hits with an accurate\n"
    "horn that never misses.");

static const u8 sPurifyDescription[] = _(
    "Cures the foe's status\n"
    "to restore HP.");

static const u8 sRevelationDanceDescription[] = _(
    "Dances with mystical power.\n"
    "Matches user's first type.");

static const u8 sCoreEnforcerDescription[] = _(
    "Hits with a ray that\n"
    "nullifies the foe's ability.");

static const u8 sTropKickDescription[] = _(
    "An intense kick from the\n"
    "tropics. Lowers Attack.");

static const u8 sInstructDescription[] = _(
    "Orders the target to use\n"
    "its last move again.");

static const u8 sBeakBlastDescription[] = _(
    "Heats up beak to attack.\n"
    "Burns foe on contact.");

static const u8 sClangingScalesDescription[] = _(
    "Makes a big noise with\n"
    "its scales. Drops Defense.");

static const u8 sDragonHammerDescription[] = _(
    "Swings its whole body\n"
    "like a hammer to damage.");

static const u8 sBrutalSwingDescription[] = _(
    "Violently swings around\n"
    "to hurt everyone nearby.");

static const u8 sAuroraVeilDescription[] = _(
    "Weakens all attacks, but\n"
    "only usable with hail.");

static const u8 sShellTrapDescription[] = _(
    "Sets a shell trap that\n"
    "damages on contact.");

static const u8 sFleurCannonDescription[] = _(
    "A strong ray that harshly\n"
    "lowers Sp. Attack.");

static const u8 sPsychicFangsDescription[] = _(
    "Chomps with psychic fangs.\n"
    "Destroys any barriers.");

static const u8 sStompingTantrumDescription[] = _(
    "Stomps around angrily.\n"
    "Stronger after a failure.");

static const u8 sShadowBoneDescription[] = _(
    "Strikes with a haunted\n"
    "bone. Might drop Defense.");

static const u8 sAccelerockDescription[] = _(
    "Hits with a high-speed\n"
    "rock that always goes first.");

static const u8 sLiquidationDescription[] = _(
    "Slams the foe with water.\n"
    "Can lower Defense.");

static const u8 sPrismaticLaserDescription[] = _(
    "A high power laser that\n"
    "forces recharge next turn.");

static const u8 sSpectralThiefDescription[] = _(
    "Steals the target's stat\n"
    "boosts, then attacks.");

static const u8 sSunsteelStrikeDescription[] = _(
    "A sun-fueled strike that\n"
    "ignores abilities.");

static const u8 sMoongeistBeamDescription[] = _(
    "A moon-powered beam that\n"
    "ignores abilities.");

static const u8 sTearfulLookDescription[] = _(
    "The user tears up, dropping\n"
    "Attack and Sp. Attack.");

static const u8 sZingZapDescription[] = _(
    "An electrified impact that\n"
    "can cause flinching.");

static const u8 sNaturesMadnessDescription[] = _(
    "Halves the foe's HP with\n"
    "the power of nature.");

static const u8 sMultiAttackDescription[] = _(
    "An attack that changes\n"
    "with Memories.");

static const u8 sMindBlownDescription[] = _(
    "It explodes the user's head\n"
    "to damage everything around.");

static const u8 sPlasmaFistsDescription[] = _(
    "Hits with electrical fists.\n"
    "Normal moves become Electric.");

static const u8 sPhotonGeyserDescription[] = _(
    "User's highest attack stat\n"
    "determines its category.");

static const u8 sZippyZapDescription[] = _(
    "Electric bursts always go\n"
    "first and land a critical hit.");

static const u8 sSplishySplashDescription[] = _(
    "A huge electrified wave that\n"
    "may paralyze the foe.");

static const u8 sFloatyFallDescription[] = _(
    "Floats in air and dives at\n"
    "angle. May cause flinching.");

static const u8 sPikaPapowDescription[] = _(
    "Pikachu's love increases its\n"
    "power. It never misses.");

static const u8 sBouncyBubbleDescription[] = _(
    "An attack that absorbs\n"
#if B_UPDATED_MOVE_DATA >= GEN_8
    "all the damage inflicted.");
#else
    "half the damage inflicted.");
#endif

static const u8 sBuzzyBuzzDescription[] = _(
    "Shoots a jolt of electricity\n"
    "that always paralyzes.");

static const u8 sSizzlySlideDescription[] = _(
    "User cloaked in fire charges.\n"
    "Leaves the foe with a burn.");

static const u8 sGlitzyGlowDescription[] = _(
    "Telekinetic force that sets\n"
    "wall, lowering Sp. Atk damage.");

static const u8 sBaddyBadDescription[] = _(
    "Acting badly, attacks. Sets\n"
    "wall, lowering Attack damage.");

static const u8 sSappySeedDescription[] = _(
    "Giant stalk scatters seeds\n"
    "that drain HP every turn.");

static const u8 sFreezyFrostDescription[] = _(
    "Crystal from cold haze hits.\n"
    "Eliminates all stat changes.");

static const u8 sSparklySwirlDescription[] = _(
    "Wrap foe with whirlwind of\n"
    "scent. Heals party's status.");

static const u8 sVeeveeVolleyDescription[] = _(
    "Eevee's love increases its\n"
    "power. It never misses.");

static const u8 sDoubleIronBashDescription[] = _(
    "The user spins and hits with\n"
    "its arms. May cause flinch.");

// GEN 8
static const u8 sDynamaxCannonDescription[] = _(
    "Fires a strong beam. Deals\n"
    "2x damage to Dynamaxed foes.");

static const u8 sSnipeShotDescription[] = _(
    "The user ignores effects\n"
    "that draw in moves.");

static const u8 sJawLockDescription[] = _(
    "Prevents the user and\n"
    "the target from escaping.");

static const u8 sStuffCheeksDescription[] = _(
    "Consumes the user's Berry,\n"
    "then sharply raises Def.");

static const u8 sNoRetreatDescription[] = _(
    "Raises all of the user's\n"
    "stats but prevents escape.");

static const u8 sTarShotDescription[] = _(
    "Lowers the foe's Speed and\n"
    "makes it weak to Fire.");

static const u8 sMagicPowderDescription[] = _(
    "Magic powder changes the\n"
    "target into a Psychic-type.");

static const u8 sDragonDartsDescription[] = _(
    "The user attacks twice. Two\n"
    "targets are hit once each.");

static const u8 sTeatimeDescription[] = _(
    "All Pokémon have teatime\n"
    "and eat their Berries.");

static const u8 sOctolockDescription[] = _(
    "Traps the foe to lower Def\n"
    "and Sp. Def fall each turn.");

static const u8 sBoltBeakDescription[] = _(
    "Double power if the user\n"
    "moves before the target.");

static const u8 sFishiousRendDescription[] = _(
    "Double power if the user\n"
    "moves before the target.");

static const u8 sCourtChangeDescription[] = _(
    "The user swaps effects on\n"
    "either side of the field.");

static const u8 sClangorousSoulDescription[] = _(
    "The user uses some of its\n"
    "HP to raise all its stats.");

static const u8 sBodyPressDescription[] = _(
    "Does more damage the\n"
    "higher the user's Def.");

static const u8 sDecorateDescription[] = _(
    "The user sharply raises\n"
    "the target's Atk and Sp.Atk");

static const u8 sDrumBeatingDescription[] = _(
    "Plays a drum to attack.\n"
    "The foe's Speed is lowered.");

static const u8 sSnapTrapDescription[] = _(
    "Snares the target in a snap\n"
    "trap for four to five turns.");

static const u8 sPyroBallDescription[] = _(
    "Launches a fiery ball at the\n"
    "target. It may cause a burn.");

static const u8 sBehemothBladeDescription[] = _(
    "Strikes as a sword. Deals 2x\n"
    "damage to Dynamaxed foes.");

static const u8 sBehemothBashDescription[] = _(
    "Attacks as a shield. Deals 2x\n"
    "damage to Dynamaxed foes.");

static const u8 sAuraWheelDescription[] = _(
    "Raises Speed to attack. The\n"
    "Type is based on its form.");

static const u8 sBreakingSwipeDescription[] = _(
    "Swings its tail to attack.\n"
    "Lowers the Atk of those hit.");

static const u8 sBranchPokeDescription[] = _(
    "The user pokes the target\n"
    "with a pointed branch.");

static const u8 sOverdriveDescription[] = _(
    "The user twangs its guitar,\n"
    "causing strong vibrations.");

static const u8 sAppleAcidDescription[] = _(
    "Attacks with tart apple acid\n"
    "to lower the foe's Sp. Def.");

static const u8 sGravAppleDescription[] = _(
    "Drops an apple from above.\n"
    "Lowers the foe's Defense.");

static const u8 sSpiritBreakDescription[] = _(
    "Attacks with spirit-breaking\n"
    "force. Lowers Sp. Atk.");

static const u8 sStrangeSteamDescription[] = _(
    "Emits a strange steam to\n"
    "potentially confuse the foe.");

static const u8 sLifeDewDescription[] = _(
    "Scatters water to restore\n"
    "the HP of itself and allies.");

static const u8 sObstructDescription[] = _(
    "Protects itself, harshly\n"
    "lowering Def on contact.");

static const u8 sFalseSurrenderDescription[] = _(
    "Bows to stab the foe\n"
    "with hair. It never misses.");

static const u8 sMeteorAssaultDescription[] = _(
    "Attacks with a thick leek.\n"
    "The user must then rest.");

static const u8 sEternabeamDescription[] = _(
    "Eternatus' strongest move.\n"
    "The user rests next turn.");

static const u8 sSteelBeamDescription[] = _(
    "Fires a beam of steel from\n"
    "its body. It hurts the user.");

static const u8 sExpandingForceDescription[] = _(
    "Power goes up and damages\n"
    "all foes on Psychic Terrain.");

static const u8 sSteelRollerDescription[] = _(
    "Destroys terrain. Fails if\n"
    "ground isn't terrain.");

static const u8 sScaleShotDescription[] = _(
    "Shoots scales 2 to 5 times.\n"
    "Ups Speed, lowers defense.");

static const u8 sMeteorBeamDescription[] = _(
    "A 2-turn move that raises\n"
    "Sp. Attack before attacking.");

static const u8 sShellSideArmDescription[] = _(
    "Deals better of physical and\n"
    "special damage. May poison.");

static const u8 sMistyExplosionDescription[] = _(
    "Hit everything and faint.\n"
    "Powers up on Misty Terrain.");

static const u8 sGrassyGlideDescription[] = _(
    "Gliding on ground, hits. Goes\n"
    "first on Grassy Terrain.");

static const u8 sRisingVoltageDescription[] = _(
    "This move's power doubles\n"
    "when on Electric Terrain.");

static const u8 sTerrainPulseDescription[] = _(
    "Type and power changes\n"
    "depending on the terrain.");

static const u8 sSkitterSmackDescription[] = _(
    "User skitters behind foe to\n"
    "attack. Lowers foe's Sp. Atk.");

static const u8 sBurningJealousyDescription[] = _(
    "Foes that have stats upped\n"
    "during the turn get burned.");

static const u8 sLashOutDescription[] = _(
    "If stats lowered during this\n"
    "turn, power is doubled.");

static const u8 sPoltergeistDescription[] = _(
    "Control foe's item to attack.\n"
    "Fails if foe has no item.");

static const u8 sCorrosiveGasDescription[] = _(
    "Highly acidic gas melts items\n"
    "held by surrounding Pokémon.");

static const u8 sCoachingDescription[] = _(
    "Properly coaches allies to\n"
    "up their Attack and Defense.");

static const u8 sFlipTurnDescription[] = _(
    "Attacks and rushes back to\n"
    "switch with a party Pokémon.");

static const u8 sTripleAxelDescription[] = _(
    "A 3-kick attack that gets\n"
    "more powerful with each hit.");

static const u8 sDualWingbeatDescription[] = _(
    "User slams the target with\n"
    "wings and hits twice in a row.");

static const u8 sScorchingSandsDescription[] = _(
    "Throws scorching sand at\n"
    "the target. May leave a burn.");

static const u8 sJungleHealingDescription[] = _(
    "Heals HP and status of\n"
    "itself and allies in battle.");

static const u8 sWickedBlowDescription[] = _(
    "Mastering the Dark style,\n"
    "strikes with a critical hit.");

static const u8 sSurgingStrikesDescription[] = _(
    "Mastering the Water style,\n"
    "strikes with 3 critical hits.");

static const u8 sThunderCageDescription[] = _(
    "Traps the foe in a cage of\n"
    "electricity for "BINDING_TURNS" turns.");

static const u8 sDragonEnergyDescription[] = _(
    "The higher the user's HP\n"
    "the more damage caused.");

static const u8 sFreezingGlareDescription[] = _(
    "Shoots psychic power from\n"
#if B_USE_FROSTBITE == TRUE
    "the eyes. May frostbite.");
#else
    "the eyes. May freeze the foe.");
#endif

static const u8 sFieryWrathDescription[] = _(
    "An attack fueled by your\n"
    "wrath. May cause flinching.");

static const u8 sThunderousKickDescription[] = _(
    "Uses a lightning-like kick\n"
    "to hit. Lowers foe's Defense.");

static const u8 sGlacialLanceDescription[] = _(
    "Strikes by hurling a blizzard-\n"
    "cloaked icicle lance at foes.");

static const u8 sAstralBarrageDescription[] = _(
    "Strikes by sending a frightful\n"
    "amount of ghosts at foes.");

static const u8 sEerieSpellDescription[] = _(
    "Attacks with psychic power.\n"
    "Foe's last move has 3 PP cut.");

static const u8 sDireClawDescription[] = _(
    "High critical hit chance. May\n"
    "paralyze, poison or drowse.");

static const u8 sPsyshieldBashDescription[] = _(
    "Hits a foe with psychic\n"
    "energy. May raise Defense.");

static const u8 sPowerShiftDescription[] = _(
    "The user swaps its Attack\n"
    "and Defense stats.");

static const u8 sStoneAxeDescription[] = _(
    "High critical hit ratio. Sets\n"
    "Splinters that hurt the foe.");

static const u8 sSpringtideStormDescription[] = _(
    "Wraps a foe in fierce winds.\n"
    "Varies with the user's form.");

static const u8 sMysticalPowerDescription[] = _(
    "A mysterious power strikes,\n"
    "raising the user's Sp. Atk.");

static const u8 sRagingFuryDescription[] = _(
    "A rampage of 2 to 3 turns\n"
    "that confuses the user.");

static const u8 sWaveCrashDescription[] = _(
    "A slam shrouded in water.\n"
    "It also hurts the user.");

static const u8 sChloroblastDescription[] = _(
    "A user-hurting blast of\n"
    "amassed chlorophyll.");

static const u8 sMountainGaleDescription[] = _(
    "Giant chunks of ice damage\n"
    "the foe. It may flinch.");

static const u8 sVictoryDanceDescription[] = _(
    "Dances to raise Attack,\n"
    "Defense and Speed.");

static const u8 sHeadlongRushDescription[] = _(
    "Hits with a full-body tackle.\n"
    "Lowers the users's defenses.");

static const u8 sBarbBarrageDescription[] = _(
    "Can poison on impact. Powers\n"
    "up against poisoned foes.");

static const u8 sEsperWingDescription[] = _(
    "High critical hit ratio.\n"
    "Ups the user's Speed.");

static const u8 sBitterMaliceDescription[] = _(
    "A spine-chilling resentment.\n"
    "May lower the foe's Attack.");

static const u8 sShelterDescription[] = _(
    "The user hardens their skin,\n"
    "sharply raising its Defense.");

static const u8 sTripleArrowsDescription[] = _(
    "High critical hit ratio.\n"
    "May lower Defense or flinch.");

static const u8 sInfernalParadeDescription[] = _(
    "Hurts a foe harder if it has\n"
    "an ailment. May leave a burn.");

static const u8 sCeaselessEdgeDescription[] = _(
    "High critical hit ratio. Sets\n"
    "Splinters that hurt the foe.");

static const u8 sBleakwindStormDescription[] = _(
    "Hits with brutal, cold winds.\n"
    "May lower the foe's Speed.");

static const u8 sWildboltStormDescription[] = _(
    "Hits with a brutal tempest.\n"
    "May inflict paralysis.");

static const u8 sSandsearStormDescription[] = _(
    "Hits with brutally hot sand.\n"
    "May inflict a burn.");

static const u8 sLunarBlessingDescription[] = _(
    "The user heals and cures\n"
    "itself and its ally.");

static const u8 sTakeHeartDescription[] = _(
    "The user lifts its spirits to\n"
    "heal and strengthen itself.");

static const u8 sTeraBlastDescription[] = _(
    "If the user's Terastallized,\n"
    "it hits with its Tera-type.");

static const u8 sSilkTrapDescription[] =_(
    "Protects itself, lowering\n"
    "Speed on contact.");

static const u8 sAxeKickDescription[] = _(
    "May miss and hurt the kicker.\n"
    "May cause confusion.");

static const u8 sLastRespectsDescription[] = _(
    "This move deals more damage\n"
    "for each defeated ally.");

static const u8 sLuminaCrashDescription[] = _(
    "A mind-affecting light\n"
    "harshly lowers Sp. Def.");

static const u8 sOrderUpDescription[] = _(
    "Boosts a user's stats\n"
    "depending on Tatsugiri.");

static const u8 sJetPunchDescription[] = _(
    "A punch is thrown at blinding\n"
    "speed to strike first.");

static const u8 sSpicyExtractDescription[] = _(
    "Sharply ups target's Attack,\n"
    "harshly lowers its Defense.");

static const u8 sSpinOutDescription[] = _(
    "Furiously strains its legs.\n"
    "Harshly lowers user's Speed.");

static const u8 sPopulationBombDescription[] = _(
    "The user's fellows hit one\n"
    "to ten times in a row.");

static const u8 sIceSpinnerDescription[] = _(
    "Ice-covered feet hit a foe\n"
    "and destroy the terrain.");

static const u8 sGlaiveRushDescription[] = _(
    "Foe attacks next turn can't\n"
    "miss and do double damage.");

static const u8 sRevivalBlessingDescription[] = _(
    "Revives a fainted party {PKMN}\n"
    "and restores half of its HP.");

static const u8 sSaltCureDescription[] = _(
    "Hurts foe every turn. Double\n"
    "damage to Steel and Water.");

static const u8 sTripleDiveDescription[] = _(
    "Hits target with splashes\n"
    "of water 3 times in a row.");

static const u8 sMortalSpinDescription[] = _(
    "Erases trap moves and Leech\n"
    "Seed. Poisons adjecent foes.");

static const u8 sDoodleDescription[] = _(
    "Changes user's and ally's\n"
    "Ability into the target's.");

static const u8 sFilletAwayDescription[] = _(
    "Sharply boosts offenses and\n"
    "Speed by using its own HP.");

static const u8 sKowtowCleaveDescription[] = _(
    "User slashes the foe after\n"
    "kowtowing. It never misses.");

static const u8 sFlowerTrickDescription[] = _(
    "Rigged bouquet. Always gets\n"
    "a critical hit, never missing.");

static const u8 sTorchSongDescription[] = _(
    "Flames scorch the target.\n"
    "Boosts the user's Sp. Atk.");

static const u8 sAquaStepDescription[] = _(
    "Hits with light, fluid dance\n"
    "steps. Ups the user's Speed.");

static const u8 sRagingBullDescription[] = _(
    "Tackle that breaks barriers.\n"
    "User's form determines type.");

static const u8 sMakeItRainDescription[] = _(
    "Lowers the user's Sp. Atk.\n"
    "Money is recovered after.");

static const u8 sRuinationDescription[] = _(
    "Summons a ruinous disaster\n"
    "and cuts half the foe's HP.");

static const u8 sCollisionCourseDescription[] = _(
    "Prehistoric explosion that's\n"
    "stronger if supereffective.");

static const u8 sElectroDriftDescription[] = _(
    "Futuristic electricity. It's\n"
    "stronger if supereffective.");

static const u8 sShedTailDescription[] = _(
    "Creates a Substitute for\n"
    "itself before switching out.");

static const u8 sChillyReceptionDescription[] =_(
    "Bad joke summons snowstorm.\n"
    "The user also switches out.");

static const u8 sTidyUpDescription[] = _(
    "User tidies up hazards and\n"
    "raises its Attack and Speed.");

static const u8 sSnowscapeDescription[] = _(
    "Summons a snowstorm that\n"
    "lasts for five turns.");

static const u8 sPounceDescription[] = _(
    "The user pounces on the foe,\n"
    "lowering its Speed.");

static const u8 sTrailblazeDescription[] = _(
    "The user attacks suddenly,\n"
    "raising its Speed.");

static const u8 sChillingWaterDescription[] = _(
    "A shower with ice-cold water\n"
    "lowers the target's Attack.");

static const u8 sHyperDrillDescription[] = _(
    "A spinning pointed part\n"
    "bypasses a foe's Protect.");

static const u8 sTwinBeamDescription[] = _(
    "Mystical eye-beams that hit\n"
    "the target twice in a row.");

static const u8 sRageFistDescription[] = _(
    "The more the user has been\n"
    "hit, the stronger the move.");

static const u8 sArmorCannonDescription[] = _(
    "A strong attack but lowers\n"
    "the defensive stats.");

static const u8 sBitterBladeDescription[] = _(
    "An attack that absorbs\n"
    "half the damage inflicted.");

static const u8 sDoubleShockDescription[] = _(
    "Discharges all electricity,\n"
    "losing the Electric type.");

static const u8 sGigatonHammerDescription[] = _(
    "Swings a huge hammer. Can't\n"
    "be used twice in a row.");

static const u8 sComeuppanceDescription[] = _(
    "Retaliates strongly against\n"
    "who last hurt the user.");

static const u8 sAquaCutterDescription[] = _(
    "Pressurized water cut with a\n"
    "high critical-hit ratio.");

static const u8 sBlazingTorqueDescription[] = _(
    "---");

static const u8 sWickedTorqueDescription[] = _(
    "---");

static const u8 sNoxiousTorqueDescription[] = _(
    "---");

static const u8 sCombatTorqueDescription[] = _(
    "---");

static const u8 sMagicalTorqueDescription[] = _(
    "---");

static const u8 sPsybladeDescription[] = _(
    "This move's power increases\n"
    "when on Electric Terrain.");

static const u8 sHydroSteamDescription[] = _(
    "This move's power increases\n"
    "under harsh sunlight.");

const u8 gNotDoneYetDescription[] = _(
    "This move can't be used. Its\n"
    "effect is in development.");

#undef BINDING_TURNS

// MOVE_NONE is ignored in this table. Make sure to always subtract 1 before getting the right pointer.
const u8 *const gMoveDescriptionPointers[MOVES_COUNT - 1] =
{
    [MOVE_POUND - 1] = sPoundDescription,
    [MOVE_KARATE_CHOP - 1] = sKarateChopDescription,
    [MOVE_DOUBLE_SLAP - 1] = sDoubleSlapDescription,
    [MOVE_COMET_PUNCH - 1] = sCometPunchDescription,
    [MOVE_MEGA_PUNCH - 1] = sMegaPunchDescription,
    [MOVE_PAY_DAY - 1] = sPayDayDescription,
    [MOVE_FIRE_PUNCH - 1] = sFirePunchDescription,
    [MOVE_ICE_PUNCH - 1] = sIcePunchDescription,
    [MOVE_THUNDER_PUNCH - 1] = sThunderPunchDescription,
    [MOVE_SCRATCH - 1] = sScratchDescription,
    [MOVE_VISE_GRIP - 1] = sViseGripDescription,
    [MOVE_GUILLOTINE - 1] = sGuillotineDescription,
    [MOVE_RAZOR_WIND - 1] = sRazorWindDescription,
    [MOVE_SWORDS_DANCE - 1] = sSwordsDanceDescription,
    [MOVE_CUT - 1] = sCutDescription,
    [MOVE_GUST - 1] = sGustDescription,
    [MOVE_WING_ATTACK - 1] = sWingAttackDescription,
    [MOVE_WHIRLWIND - 1] = sWhirlwindDescription,
    [MOVE_FLY - 1] = sFlyDescription,
    [MOVE_BIND - 1] = sBindDescription,
    [MOVE_SLAM - 1] = sSlamDescription,
    [MOVE_VINE_WHIP - 1] = sVineWhipDescription,
    [MOVE_STOMP - 1] = sStompDescription,
    [MOVE_DOUBLE_KICK - 1] = sDoubleKickDescription,
    [MOVE_MEGA_KICK - 1] = sMegaKickDescription,
    [MOVE_JUMP_KICK - 1] = sJumpKickDescription,
    [MOVE_ROLLING_KICK - 1] = sRollingKickDescription,
    [MOVE_SAND_ATTACK - 1] = sSandAttackDescription,
    [MOVE_HEADBUTT - 1] = sHeadbuttDescription,
    [MOVE_HORN_ATTACK - 1] = sHornAttackDescription,
    [MOVE_FURY_ATTACK - 1] = sFuryAttackDescription,
    [MOVE_HORN_DRILL - 1] = sHornDrillDescription,
    [MOVE_TACKLE - 1] = sTackleDescription,
    [MOVE_BODY_SLAM - 1] = sBodySlamDescription,
    [MOVE_WRAP - 1] = sWrapDescription,
    [MOVE_TAKE_DOWN - 1] = sTakeDownDescription,
    [MOVE_THRASH - 1] = sThrashDescription,
    [MOVE_DOUBLE_EDGE - 1] = sDoubleEdgeDescription,
    [MOVE_TAIL_WHIP - 1] = sTailWhipDescription,
    [MOVE_POISON_STING - 1] = sPoisonStingDescription,
    [MOVE_TWINEEDLE - 1] = sTwineedleDescription,
    [MOVE_PIN_MISSILE - 1] = sPinMissileDescription,
    [MOVE_LEER - 1] = sLeerDescription,
    [MOVE_BITE - 1] = sBiteDescription,
    [MOVE_GROWL - 1] = sGrowlDescription,
    [MOVE_ROAR - 1] = sRoarDescription,
    [MOVE_SING - 1] = sSingDescription,
    [MOVE_SUPERSONIC - 1] = sSupersonicDescription,
    [MOVE_SONIC_BOOM - 1] = sSonicBoomDescription,
    [MOVE_DISABLE - 1] = sDisableDescription,
    [MOVE_ACID - 1] = sAcidDescription,
    [MOVE_EMBER - 1] = sEmberDescription,
    [MOVE_FLAMETHROWER - 1] = sFlamethrowerDescription,
    [MOVE_MIST - 1] = sMistDescription,
    [MOVE_WATER_GUN - 1] = sWaterGunDescription,
    [MOVE_HYDRO_PUMP - 1] = sHydroPumpDescription,
    [MOVE_SURF - 1] = sSurfDescription,
    [MOVE_ICE_BEAM - 1] = sIceBeamDescription,
    [MOVE_BLIZZARD - 1] = sBlizzardDescription,
    [MOVE_PSYBEAM - 1] = sPsybeamDescription,
    [MOVE_BUBBLE_BEAM - 1] = sBubbleBeamDescription,
    [MOVE_AURORA_BEAM - 1] = sAuroraBeamDescription,
    [MOVE_HYPER_BEAM - 1] = sHyperBeamDescription,
    [MOVE_PECK - 1] = sPeckDescription,
    [MOVE_DRILL_PECK - 1] = sDrillPeckDescription,
    [MOVE_SUBMISSION - 1] = sSubmissionDescription,
    [MOVE_LOW_KICK - 1] = sLowKickDescription,
    [MOVE_COUNTER - 1] = sCounterDescription,
    [MOVE_SEISMIC_TOSS - 1] = sSeismicTossDescription,
    [MOVE_STRENGTH - 1] = sStrengthDescription,
    [MOVE_ABSORB - 1] = sAbsorbDescription,
    [MOVE_MEGA_DRAIN - 1] = sMegaDrainDescription,
    [MOVE_LEECH_SEED - 1] = sLeechSeedDescription,
    [MOVE_GROWTH - 1] = sGrowthDescription,
    [MOVE_RAZOR_LEAF - 1] = sRazorLeafDescription,
    [MOVE_SOLAR_BEAM - 1] = sSolarBeamDescription,
    [MOVE_POISON_POWDER - 1] = sPoisonPowderDescription,
    [MOVE_STUN_SPORE - 1] = sStunSporeDescription,
    [MOVE_SLEEP_POWDER - 1] = sSleepPowderDescription,
    [MOVE_PETAL_DANCE - 1] = sPetalDanceDescription,
    [MOVE_STRING_SHOT - 1] = sStringShotDescription,
    [MOVE_DRAGON_RAGE - 1] = sDragonRageDescription,
    [MOVE_FIRE_SPIN - 1] = sFireSpinDescription,
    [MOVE_THUNDER_SHOCK - 1] = sThunderShockDescription,
    [MOVE_THUNDERBOLT - 1] = sThunderboltDescription,
    [MOVE_THUNDER_WAVE - 1] = sThunderWaveDescription,
    [MOVE_THUNDER - 1] = sThunderDescription,
    [MOVE_ROCK_THROW - 1] = sRockThrowDescription,
    [MOVE_EARTHQUAKE - 1] = sEarthquakeDescription,
    [MOVE_FISSURE - 1] = sFissureDescription,
    [MOVE_DIG - 1] = sDigDescription,
    [MOVE_TOXIC - 1] = sToxicDescription,
    [MOVE_CONFUSION - 1] = sConfusionDescription,
    [MOVE_PSYCHIC - 1] = sPsychicDescription,
    [MOVE_HYPNOSIS - 1] = sHypnosisDescription,
    [MOVE_MEDITATE - 1] = sMeditateDescription,
    [MOVE_AGILITY - 1] = sAgilityDescription,
    [MOVE_QUICK_ATTACK - 1] = sQuickAttackDescription,
    [MOVE_RAGE - 1] = sRageDescription,
    [MOVE_TELEPORT - 1] = sTeleportDescription,
    [MOVE_NIGHT_SHADE - 1] = sNightShadeDescription,
    [MOVE_MIMIC - 1] = sMimicDescription,
    [MOVE_SCREECH - 1] = sScreechDescription,
    [MOVE_DOUBLE_TEAM - 1] = sDoubleTeamDescription,
    [MOVE_RECOVER - 1] = sRecoverDescription,
    [MOVE_HARDEN - 1] = sHardenDescription,
    [MOVE_MINIMIZE - 1] = sMinimizeDescription,
    [MOVE_SMOKESCREEN - 1] = sSmokescreenDescription,
    [MOVE_CONFUSE_RAY - 1] = sConfuseRayDescription,
    [MOVE_WITHDRAW - 1] = sWithdrawDescription,
    [MOVE_DEFENSE_CURL - 1] = sDefenseCurlDescription,
    [MOVE_BARRIER - 1] = sBarrierDescription,
    [MOVE_LIGHT_SCREEN - 1] = sLightScreenDescription,
    [MOVE_HAZE - 1] = sHazeDescription,
    [MOVE_REFLECT - 1] = sReflectDescription,
    [MOVE_FOCUS_ENERGY - 1] = sFocusEnergyDescription,
    [MOVE_BIDE - 1] = sBideDescription,
    [MOVE_METRONOME - 1] = sMetronomeDescription,
    [MOVE_MIRROR_MOVE - 1] = sMirrorMoveDescription,
    [MOVE_SELF_DESTRUCT - 1] = sSelfDestructDescription,
    [MOVE_EGG_BOMB - 1] = sEggBombDescription,
    [MOVE_LICK - 1] = sLickDescription,
    [MOVE_SMOG - 1] = sSmogDescription,
    [MOVE_SLUDGE - 1] = sSludgeDescription,
    [MOVE_BONE_CLUB - 1] = sBoneClubDescription,
    [MOVE_FIRE_BLAST - 1] = sFireBlastDescription,
    [MOVE_WATERFALL - 1] = sWaterfallDescription,
    [MOVE_CLAMP - 1] = sClampDescription,
    [MOVE_SWIFT - 1] = sSwiftDescription,
    [MOVE_SKULL_BASH - 1] = sSkullBashDescription,
    [MOVE_SPIKE_CANNON - 1] = sSpikeCannonDescription,
    [MOVE_CONSTRICT - 1] = sConstrictDescription,
    [MOVE_AMNESIA - 1] = sAmnesiaDescription,
    [MOVE_KINESIS - 1] = sKinesisDescription,
    [MOVE_SOFT_BOILED - 1] = sSoftBoiledDescription,
    [MOVE_HIGH_JUMP_KICK - 1] = sHighJumpKickDescription,
    [MOVE_GLARE - 1] = sGlareDescription,
    [MOVE_DREAM_EATER - 1] = sDreamEaterDescription,
    [MOVE_POISON_GAS - 1] = sPoisonGasDescription,
    [MOVE_BARRAGE - 1] = sBarrageDescription,
    [MOVE_LEECH_LIFE - 1] = sLeechLifeDescription,
    [MOVE_LOVELY_KISS - 1] = sLovelyKissDescription,
    [MOVE_SKY_ATTACK - 1] = sSkyAttackDescription,
    [MOVE_TRANSFORM - 1] = sTransformDescription,
    [MOVE_BUBBLE - 1] = sBubbleDescription,
    [MOVE_DIZZY_PUNCH - 1] = sDizzyPunchDescription,
    [MOVE_SPORE - 1] = sSporeDescription,
    [MOVE_FLASH - 1] = sFlashDescription,
    [MOVE_PSYWAVE - 1] = sPsywaveDescription,
    [MOVE_SPLASH - 1] = sSplashDescription,
    [MOVE_ACID_ARMOR - 1] = sAcidArmorDescription,
    [MOVE_CRABHAMMER - 1] = sCrabhammerDescription,
    [MOVE_EXPLOSION - 1] = sExplosionDescription,
    [MOVE_FURY_SWIPES - 1] = sFurySwipesDescription,
    [MOVE_BONEMERANG - 1] = sBonemerangDescription,
    [MOVE_REST - 1] = sRestDescription,
    [MOVE_ROCK_SLIDE - 1] = sRockSlideDescription,
    [MOVE_HYPER_FANG - 1] = sHyperFangDescription,
    [MOVE_SHARPEN - 1] = sSharpenDescription,
    [MOVE_CONVERSION - 1] = sConversionDescription,
    [MOVE_TRI_ATTACK - 1] = sTriAttackDescription,
    [MOVE_SUPER_FANG - 1] = sSuperFangDescription,
    [MOVE_SLASH - 1] = sSlashDescription,
    [MOVE_SUBSTITUTE - 1] = sSubstituteDescription,
    [MOVE_STRUGGLE - 1] = sStruggleDescription,
    [MOVE_SKETCH - 1] = sSketchDescription,
    [MOVE_TRIPLE_KICK - 1] = sTripleKickDescription,
    [MOVE_THIEF - 1] = sThiefDescription,
    [MOVE_SPIDER_WEB - 1] = sSpiderWebDescription,
    [MOVE_MIND_READER - 1] = sMindReaderDescription,
    [MOVE_NIGHTMARE - 1] = sNightmareDescription,
    [MOVE_FLAME_WHEEL - 1] = sFlameWheelDescription,
    [MOVE_SNORE - 1] = sSnoreDescription,
    [MOVE_CURSE - 1] = sCurseDescription,
    [MOVE_FLAIL - 1] = sFlailDescription,
    [MOVE_CONVERSION_2 - 1] = sConversion2Description,
    [MOVE_AEROBLAST - 1] = sAeroblastDescription,
    [MOVE_COTTON_SPORE - 1] = sCottonSporeDescription,
    [MOVE_REVERSAL - 1] = sReversalDescription,
    [MOVE_SPITE - 1] = sSpiteDescription,
    [MOVE_POWDER_SNOW - 1] = sPowderSnowDescription,
    [MOVE_PROTECT - 1] = sProtectDescription,
    [MOVE_MACH_PUNCH - 1] = sMachPunchDescription,
    [MOVE_SCARY_FACE - 1] = sScaryFaceDescription,
    [MOVE_FEINT_ATTACK - 1] = sFeintAttackDescription,
    [MOVE_SWEET_KISS - 1] = sSweetKissDescription,
    [MOVE_BELLY_DRUM - 1] = sBellyDrumDescription,
    [MOVE_SLUDGE_BOMB - 1] = sSludgeBombDescription,
    [MOVE_MUD_SLAP - 1] = sMudSlapDescription,
    [MOVE_OCTAZOOKA - 1] = sOctazookaDescription,
    [MOVE_SPIKES - 1] = sSpikesDescription,
    [MOVE_ZAP_CANNON - 1] = sZapCannonDescription,
    [MOVE_FORESIGHT - 1] = sForesightDescription,
    [MOVE_DESTINY_BOND - 1] = sDestinyBondDescription,
    [MOVE_PERISH_SONG - 1] = sPerishSongDescription,
    [MOVE_ICY_WIND - 1] = sIcyWindDescription,
    [MOVE_DETECT - 1] = sDetectDescription,
    [MOVE_BONE_RUSH - 1] = sBoneRushDescription,
    [MOVE_LOCK_ON - 1] = sLockOnDescription,
    [MOVE_OUTRAGE - 1] = sOutrageDescription,
    [MOVE_SANDSTORM - 1] = sSandstormDescription,
    [MOVE_GIGA_DRAIN - 1] = sGigaDrainDescription,
    [MOVE_ENDURE - 1] = sEndureDescription,
    [MOVE_CHARM - 1] = sCharmDescription,
    [MOVE_ROLLOUT - 1] = sRolloutDescription,
    [MOVE_FALSE_SWIPE - 1] = sFalseSwipeDescription,
    [MOVE_SWAGGER - 1] = sSwaggerDescription,
    [MOVE_MILK_DRINK - 1] = sMilkDrinkDescription,
    [MOVE_SPARK - 1] = sSparkDescription,
    [MOVE_FURY_CUTTER - 1] = sFuryCutterDescription,
    [MOVE_STEEL_WING - 1] = sSteelWingDescription,
    [MOVE_MEAN_LOOK - 1] = sMeanLookDescription,
    [MOVE_ATTRACT - 1] = sAttractDescription,
    [MOVE_SLEEP_TALK - 1] = sSleepTalkDescription,
    [MOVE_HEAL_BELL - 1] = sHealBellDescription,
    [MOVE_RETURN - 1] = sReturnDescription,
    [MOVE_PRESENT - 1] = sPresentDescription,
    [MOVE_FRUSTRATION - 1] = sFrustrationDescription,
    [MOVE_SAFEGUARD - 1] = sSafeguardDescription,
    [MOVE_PAIN_SPLIT - 1] = sPainSplitDescription,
    [MOVE_SACRED_FIRE - 1] = sSacredFireDescription,
    [MOVE_MAGNITUDE - 1] = sMagnitudeDescription,
    [MOVE_DYNAMIC_PUNCH - 1] = sDynamicPunchDescription,
    [MOVE_MEGAHORN - 1] = sMegahornDescription,
    [MOVE_DRAGON_BREATH - 1] = sDragonBreathDescription,
    [MOVE_BATON_PASS - 1] = sBatonPassDescription,
    [MOVE_ENCORE - 1] = sEncoreDescription,
    [MOVE_PURSUIT - 1] = sPursuitDescription,
    [MOVE_RAPID_SPIN - 1] = sRapidSpinDescription,
    [MOVE_SWEET_SCENT - 1] = sSweetScentDescription,
    [MOVE_IRON_TAIL - 1] = sIronTailDescription,
    [MOVE_METAL_CLAW - 1] = sMetalClawDescription,
    [MOVE_VITAL_THROW - 1] = sVitalThrowDescription,
    [MOVE_MORNING_SUN - 1] = sMorningSunDescription,
    [MOVE_SYNTHESIS - 1] = sSynthesisDescription,
    [MOVE_MOONLIGHT - 1] = sMoonlightDescription,
    [MOVE_HIDDEN_POWER - 1] = sHiddenPowerDescription,
    [MOVE_CROSS_CHOP - 1] = sCrossChopDescription,
    [MOVE_TWISTER - 1] = sTwisterDescription,
    [MOVE_RAIN_DANCE - 1] = sRainDanceDescription,
    [MOVE_SUNNY_DAY - 1] = sSunnyDayDescription,
    [MOVE_CRUNCH - 1] = sCrunchDescription,
    [MOVE_MIRROR_COAT - 1] = sMirrorCoatDescription,
    [MOVE_PSYCH_UP - 1] = sPsychUpDescription,
    [MOVE_EXTREME_SPEED - 1] = sExtremeSpeedDescription,
    [MOVE_ANCIENT_POWER - 1] = sAncientPowerDescription,
    [MOVE_SHADOW_BALL - 1] = sShadowBallDescription,
    [MOVE_FUTURE_SIGHT - 1] = sFutureSightDescription,
    [MOVE_ROCK_SMASH - 1] = sRockSmashDescription,
    [MOVE_WHIRLPOOL - 1] = sWhirlpoolDescription,
    [MOVE_BEAT_UP - 1] = sBeatUpDescription,
    [MOVE_FAKE_OUT - 1] = sFakeOutDescription,
    [MOVE_UPROAR - 1] = sUproarDescription,
    [MOVE_STOCKPILE - 1] = sStockpileDescription,
    [MOVE_SPIT_UP - 1] = sSpitUpDescription,
    [MOVE_SWALLOW - 1] = sSwallowDescription,
    [MOVE_HEAT_WAVE - 1] = sHeatWaveDescription,
    [MOVE_HAIL - 1] = sHailDescription,
    [MOVE_TORMENT - 1] = sTormentDescription,
    [MOVE_FLATTER - 1] = sFlatterDescription,
    [MOVE_WILL_O_WISP - 1] = sWillOWispDescription,
    [MOVE_MEMENTO - 1] = sMementoDescription,
    [MOVE_FACADE - 1] = sFacadeDescription,
    [MOVE_FOCUS_PUNCH - 1] = sFocusPunchDescription,
    [MOVE_SMELLING_SALTS - 1] = sSmellingSaltsDescription,
    [MOVE_FOLLOW_ME - 1] = sFollowMeDescription,
    [MOVE_NATURE_POWER - 1] = sNaturePowerDescription,
    [MOVE_CHARGE - 1] = sChargeDescription,
    [MOVE_TAUNT - 1] = sTauntDescription,
    [MOVE_HELPING_HAND - 1] = sHelpingHandDescription,
    [MOVE_TRICK - 1] = sTrickDescription,
    [MOVE_ROLE_PLAY - 1] = sRolePlayDescription,
    [MOVE_WISH - 1] = sWishDescription,
    [MOVE_ASSIST - 1] = sAssistDescription,
    [MOVE_INGRAIN - 1] = sIngrainDescription,
    [MOVE_SUPERPOWER - 1] = sSuperpowerDescription,
    [MOVE_MAGIC_COAT - 1] = sMagicCoatDescription,
    [MOVE_RECYCLE - 1] = sRecycleDescription,
    [MOVE_REVENGE - 1] = sRevengeDescription,
    [MOVE_BRICK_BREAK - 1] = sBrickBreakDescription,
    [MOVE_YAWN - 1] = sYawnDescription,
    [MOVE_KNOCK_OFF - 1] = sKnockOffDescription,
    [MOVE_ENDEAVOR - 1] = sEndeavorDescription,
    [MOVE_ERUPTION - 1] = sEruptionDescription,
    [MOVE_SKILL_SWAP - 1] = sSkillSwapDescription,
    [MOVE_IMPRISON - 1] = sImprisonDescription,
    [MOVE_REFRESH - 1] = sRefreshDescription,
    [MOVE_GRUDGE - 1] = sGrudgeDescription,
    [MOVE_SNATCH - 1] = sSnatchDescription,
    [MOVE_SECRET_POWER - 1] = sSecretPowerDescription,
    [MOVE_DIVE - 1] = sDiveDescription,
    [MOVE_ARM_THRUST - 1] = sArmThrustDescription,
    [MOVE_CAMOUFLAGE - 1] = sCamouflageDescription,
    [MOVE_TAIL_GLOW - 1] = sTailGlowDescription,
    [MOVE_LUSTER_PURGE - 1] = sLusterPurgeDescription,
    [MOVE_MIST_BALL - 1] = sMistBallDescription,
    [MOVE_FEATHER_DANCE - 1] = sFeatherDanceDescription,
    [MOVE_TEETER_DANCE - 1] = sTeeterDanceDescription,
    [MOVE_BLAZE_KICK - 1] = sBlazeKickDescription,
    [MOVE_MUD_SPORT - 1] = sMudSportDescription,
    [MOVE_ICE_BALL - 1] = sIceBallDescription,
    [MOVE_NEEDLE_ARM - 1] = sNeedleArmDescription,
    [MOVE_SLACK_OFF - 1] = sSlackOffDescription,
    [MOVE_HYPER_VOICE - 1] = sHyperVoiceDescription,
    [MOVE_POISON_FANG - 1] = sPoisonFangDescription,
    [MOVE_CRUSH_CLAW - 1] = sCrushClawDescription,
    [MOVE_BLAST_BURN - 1] = sBlastBurnDescription,
    [MOVE_HYDRO_CANNON - 1] = sHydroCannonDescription,
    [MOVE_METEOR_MASH - 1] = sMeteorMashDescription,
    [MOVE_ASTONISH - 1] = sAstonishDescription,
    [MOVE_WEATHER_BALL - 1] = sWeatherBallDescription,
    [MOVE_AROMATHERAPY - 1] = sAromatherapyDescription,
    [MOVE_FAKE_TEARS - 1] = sFakeTearsDescription,
    [MOVE_AIR_CUTTER - 1] = sAirCutterDescription,
    [MOVE_OVERHEAT - 1] = sOverheatDescription,
    [MOVE_ODOR_SLEUTH - 1] = sOdorSleuthDescription,
    [MOVE_ROCK_TOMB - 1] = sRockTombDescription,
    [MOVE_SILVER_WIND - 1] = sSilverWindDescription,
    [MOVE_METAL_SOUND - 1] = sMetalSoundDescription,
    [MOVE_GRASS_WHISTLE - 1] = sGrassWhistleDescription,
    [MOVE_TICKLE - 1] = sTickleDescription,
    [MOVE_COSMIC_POWER - 1] = sCosmicPowerDescription,
    [MOVE_WATER_SPOUT - 1] = sWaterSpoutDescription,
    [MOVE_SIGNAL_BEAM - 1] = sSignalBeamDescription,
    [MOVE_SHADOW_PUNCH - 1] = sShadowPunchDescription,
    [MOVE_EXTRASENSORY - 1] = sExtrasensoryDescription,
    [MOVE_SKY_UPPERCUT - 1] = sSkyUppercutDescription,
    [MOVE_SAND_TOMB - 1] = sSandTombDescription,
    [MOVE_SHEER_COLD - 1] = sSheerColdDescription,
    [MOVE_MUDDY_WATER - 1] = sMuddyWaterDescription,
    [MOVE_BULLET_SEED - 1] = sBulletSeedDescription,
    [MOVE_AERIAL_ACE - 1] = sAerialAceDescription,
    [MOVE_ICICLE_SPEAR - 1] = sIcicleSpearDescription,
    [MOVE_IRON_DEFENSE - 1] = sIronDefenseDescription,
    [MOVE_BLOCK - 1] = sBlockDescription,
    [MOVE_HOWL - 1] = sHowlDescription,
    [MOVE_DRAGON_CLAW - 1] = sDragonClawDescription,
    [MOVE_FRENZY_PLANT - 1] = sFrenzyPlantDescription,
    [MOVE_BULK_UP - 1] = sBulkUpDescription,
    [MOVE_BOUNCE - 1] = sBounceDescription,
    [MOVE_MUD_SHOT - 1] = sMudShotDescription,
    [MOVE_POISON_TAIL - 1] = sPoisonTailDescription,
    [MOVE_COVET - 1] = sCovetDescription,
    [MOVE_VOLT_TACKLE - 1] = sVoltTackleDescription,
    [MOVE_MAGICAL_LEAF - 1] = sMagicalLeafDescription,
    [MOVE_WATER_SPORT - 1] = sWaterSportDescription,
    [MOVE_CALM_MIND - 1] = sCalmMindDescription,
    [MOVE_LEAF_BLADE - 1] = sLeafBladeDescription,
    [MOVE_DRAGON_DANCE - 1] = sDragonDanceDescription,
    [MOVE_ROCK_BLAST - 1] = sRockBlastDescription,
    [MOVE_SHOCK_WAVE - 1] = sShockWaveDescription,
    [MOVE_WATER_PULSE - 1] = sWaterPulseDescription,
    [MOVE_DOOM_DESIRE - 1] = sDoomDesireDescription,
    [MOVE_PSYCHO_BOOST - 1] = sPsychoBoostDescription,
    [MOVE_ROOST - 1] = sRoostDescription,
    [MOVE_GRAVITY - 1] = sGravityDescription,
    [MOVE_MIRACLE_EYE - 1] = sMiracleEyeDescription,
    [MOVE_WAKE_UP_SLAP - 1] = sWakeUpSlapDescription,
    [MOVE_HAMMER_ARM - 1] = sHammerArmDescription,
    [MOVE_GYRO_BALL - 1] = sGyroBallDescription,
    [MOVE_HEALING_WISH - 1] = sHealingWishDescription,
    [MOVE_BRINE - 1] = sBrineDescription,
    [MOVE_NATURAL_GIFT - 1] = sNaturalGiftDescription,
    [MOVE_FEINT - 1] = sFeintDescription,
    [MOVE_PLUCK - 1] = sPluckDescription,
    [MOVE_TAILWIND - 1] = sTailwindDescription,
    [MOVE_ACUPRESSURE - 1] = sAcupressureDescription,
    [MOVE_METAL_BURST - 1] = sMetalBurstDescription,
    [MOVE_U_TURN - 1] = sUTurnDescription,
    [MOVE_CLOSE_COMBAT - 1] = sCloseCombatDescription,
    [MOVE_PAYBACK - 1] = sPaybackDescription,
    [MOVE_ASSURANCE - 1] = sAssuranceDescription,
    [MOVE_EMBARGO - 1] = sEmbargoDescription,
    [MOVE_FLING - 1] = sFlingDescription,
    [MOVE_PSYCHO_SHIFT - 1] = sPsychoShiftDescription,
    [MOVE_TRUMP_CARD - 1] = sTrumpCardDescription,
    [MOVE_HEAL_BLOCK - 1] = sHealBlockDescription,
    [MOVE_WRING_OUT - 1] = sWringOutDescription,
    [MOVE_POWER_TRICK - 1] = sPowerTrickDescription,
    [MOVE_GASTRO_ACID - 1] = sGastroAcidDescription,
    [MOVE_LUCKY_CHANT - 1] = sLuckyChantDescription,
    [MOVE_ME_FIRST - 1] = sMeFirstDescription,
    [MOVE_COPYCAT - 1] = sCopycatDescription,
    [MOVE_POWER_SWAP - 1] = sPowerSwapDescription,
    [MOVE_GUARD_SWAP - 1] = sGuardSwapDescription,
    [MOVE_PUNISHMENT - 1] = sPunishmentDescription,
    [MOVE_LAST_RESORT - 1] = sLastResortDescription,
    [MOVE_WORRY_SEED - 1] = sWorrySeedDescription,
    [MOVE_SUCKER_PUNCH - 1] = sSuckerPunchDescription,
    [MOVE_TOXIC_SPIKES - 1] = sToxicSpikesDescription,
    [MOVE_HEART_SWAP - 1] = sHeartSwapDescription,
    [MOVE_AQUA_RING - 1] = sAquaRingDescription,
    [MOVE_MAGNET_RISE - 1] = sMagnetRiseDescription,
    [MOVE_FLARE_BLITZ - 1] = sFlareBlitzDescription,
    [MOVE_FORCE_PALM - 1] = sForcePalmDescription,
    [MOVE_AURA_SPHERE - 1] = sAuraSphereDescription,
    [MOVE_ROCK_POLISH - 1] = sRockPolishDescription,
    [MOVE_POISON_JAB - 1] = sPoisonJabDescription,
    [MOVE_DARK_PULSE - 1] = sDarkPulseDescription,
    [MOVE_NIGHT_SLASH - 1] = sNightSlashDescription,
    [MOVE_AQUA_TAIL - 1] = sAquaTailDescription,
    [MOVE_SEED_BOMB - 1] = sSeedBombDescription,
    [MOVE_AIR_SLASH - 1] = sAirSlashDescription,
    [MOVE_X_SCISSOR - 1] = sXScissorDescription,
    [MOVE_BUG_BUZZ - 1] = sBugBuzzDescription,
    [MOVE_DRAGON_PULSE - 1] = sDragonPulseDescription,
    [MOVE_DRAGON_RUSH - 1] = sDragonRushDescription,
    [MOVE_POWER_GEM - 1] = sPowerGemDescription,
    [MOVE_DRAIN_PUNCH - 1] = sMegaDrainDescription,
    [MOVE_VACUUM_WAVE - 1] = sVacuumWaveDescription,
    [MOVE_FOCUS_BLAST - 1] = sFocusBlastDescription,
    [MOVE_ENERGY_BALL - 1] = sEnergyBallDescription,
    [MOVE_BRAVE_BIRD - 1] = sBraveBirdDescription,
    [MOVE_EARTH_POWER - 1] = sEarthPowerDescription,
    [MOVE_SWITCHEROO - 1] = sSwitcherooDescription,
    [MOVE_GIGA_IMPACT - 1] = sHyperBeamDescription,
    [MOVE_NASTY_PLOT - 1] = sNastyPlotDescription,
    [MOVE_BULLET_PUNCH - 1] = sBulletPunchDescription,
    [MOVE_AVALANCHE - 1] = sRevengeDescription,
    [MOVE_ICE_SHARD - 1] = sIceShardDescription,
    [MOVE_SHADOW_CLAW - 1] = sShadowClawDescription,
    [MOVE_THUNDER_FANG - 1] = sThunderFangDescription,
    [MOVE_ICE_FANG - 1] = sIceFangDescription,
    [MOVE_FIRE_FANG - 1] = sFireFangDescription,
    [MOVE_SHADOW_SNEAK - 1] = sShadowSneakDescription,
    [MOVE_MUD_BOMB - 1] = sMudBombDescription,
    [MOVE_PSYCHO_CUT - 1] = sPsychoCutDescription,
    [MOVE_ZEN_HEADBUTT - 1] = sZenHeadbuttDescription,
    [MOVE_MIRROR_SHOT - 1] = sMirrorShotDescription,
    [MOVE_FLASH_CANNON - 1] = sFlashCannonDescription,
    [MOVE_ROCK_CLIMB - 1] = sRockClimbDescription,
    [MOVE_DEFOG - 1] = sDefogDescription,
    [MOVE_TRICK_ROOM - 1] = sTrickRoomDescription,
    [MOVE_DRACO_METEOR - 1] = sDracoMeteorDescription,
    [MOVE_DISCHARGE - 1] = sDischargeDescription,
    [MOVE_LAVA_PLUME - 1] = sLavaPlumeDescription,
    [MOVE_LEAF_STORM - 1] = sLeafStormDescription,
    [MOVE_POWER_WHIP - 1] = sPowerWhipDescription,
    [MOVE_ROCK_WRECKER - 1] = sHyperBeamDescription,
    [MOVE_CROSS_POISON - 1] = sCrossPoisonDescription,
    [MOVE_GUNK_SHOT - 1] = sGunkShotDescription,
    [MOVE_IRON_HEAD - 1] = sIronHeadDescription,
    [MOVE_MAGNET_BOMB - 1] = sMagnetBombDescription,
    [MOVE_STONE_EDGE - 1] = sStoneEdgeDescription,
    [MOVE_CAPTIVATE - 1] = sCaptivateDescription,
    [MOVE_STEALTH_ROCK - 1] = sStealthRockDescription,
    [MOVE_GRASS_KNOT - 1] = sGrassKnotDescription,
    [MOVE_CHATTER - 1] = sChatterDescription,
    [MOVE_JUDGMENT - 1] = sJudgmentDescription,
    [MOVE_BUG_BITE - 1] = sPluckDescription,
    [MOVE_CHARGE_BEAM - 1] = sChargeBeamDescription,
    [MOVE_WOOD_HAMMER - 1] = sWoodHammerDescription,
    [MOVE_AQUA_JET - 1] = sAquaJetDescription,
    [MOVE_ATTACK_ORDER - 1] = sAttackOrderDescription,
    [MOVE_DEFEND_ORDER - 1] = sDefendOrderDescription,
    [MOVE_HEAL_ORDER - 1] = sHealOrderDescription,
    [MOVE_HEAD_SMASH - 1] = sHeadSmashDescription,
    [MOVE_DOUBLE_HIT - 1] = sDoubleHitDescription,
    [MOVE_ROAR_OF_TIME - 1] = sRoarOfTimeDescription,
    [MOVE_SPACIAL_REND - 1] = sSpacialRendDescription,
    [MOVE_LUNAR_DANCE - 1] = sHealingWishDescription,
    [MOVE_CRUSH_GRIP - 1] = sWringOutDescription,
    [MOVE_MAGMA_STORM - 1] = sMagmaStormDescription,
    [MOVE_DARK_VOID - 1] = sDarkVoidDescription,
    [MOVE_SEED_FLARE - 1] = sSeedFlareDescription,
    [MOVE_OMINOUS_WIND - 1] = sOminousWindDescription,
    [MOVE_SHADOW_FORCE - 1] = sShadowForceDescription,
    [MOVE_HONE_CLAWS - 1] = sHoneClawsDescription,
    [MOVE_WIDE_GUARD - 1] = sWideGuardDescription,
    [MOVE_GUARD_SPLIT - 1] = sGuardSplitDescription,
    [MOVE_POWER_SPLIT - 1] = sPowerSplitDescription,
    [MOVE_WONDER_ROOM - 1] = sWonderRoomDescription,
    [MOVE_PSYSHOCK - 1] = sPsyshockDescription,
    [MOVE_VENOSHOCK - 1] = sVenoshockDescription,
    [MOVE_AUTOTOMIZE - 1] = sAutotomizeDescription,
    [MOVE_RAGE_POWDER - 1] = sRagePowderDescription,
    [MOVE_TELEKINESIS - 1] = sTelekinesisDescription,
    [MOVE_MAGIC_ROOM - 1] = sMagicRoomDescription,
    [MOVE_SMACK_DOWN - 1] = sSmackDownDescription,
    [MOVE_STORM_THROW - 1] = sStormThrowDescription,
    [MOVE_FLAME_BURST - 1] = sFlameBurstDescription,
    [MOVE_SLUDGE_WAVE - 1] = sSludgeWaveDescription,
    [MOVE_QUIVER_DANCE - 1] = sQuiverDanceDescription,
    [MOVE_HEAVY_SLAM - 1] = sHeavySlamDescription,
    [MOVE_SYNCHRONOISE - 1] = sSynchronoiseDescription,
    [MOVE_ELECTRO_BALL - 1] = sElectroBallDescription,
    [MOVE_SOAK - 1] = sSoakDescription,
    [MOVE_FLAME_CHARGE - 1] = sFlameChargeDescription,
    [MOVE_COIL - 1] = sCoilDescription,
    [MOVE_LOW_SWEEP - 1] = sLowSweepDescription,
    [MOVE_ACID_SPRAY - 1] = sAcidSprayDescription,
    [MOVE_FOUL_PLAY - 1] = sFoulPlayDescription,
    [MOVE_SIMPLE_BEAM - 1] = sSimpleBeamDescription,
    [MOVE_ENTRAINMENT - 1] = sEntrainmentDescription,
    [MOVE_AFTER_YOU - 1] = sAfterYouDescription,
    [MOVE_ROUND - 1] = sRoundDescription,
    [MOVE_ECHOED_VOICE - 1] = sEchoedVoiceDescription,
    [MOVE_CHIP_AWAY - 1] = sChipAwayDescription,
    [MOVE_CLEAR_SMOG - 1] = sClearSmogDescription,
    [MOVE_STORED_POWER - 1] = sStoredPowerDescription,
    [MOVE_QUICK_GUARD - 1] = sQuickGuardDescription,
    [MOVE_ALLY_SWITCH - 1] = sAllySwitchDescription,
    [MOVE_SCALD - 1] = sScaldDescription,
    [MOVE_SHELL_SMASH - 1] = sShellSmashDescription,
    [MOVE_HEAL_PULSE - 1] = sHealPulseDescription,
    [MOVE_HEX - 1] = sHexDescription,
    [MOVE_SKY_DROP - 1] = sSkyDropDescription,
    [MOVE_SHIFT_GEAR - 1] = sShiftGearDescription,
    [MOVE_CIRCLE_THROW - 1] = sCircleThrowDescription,
    [MOVE_INCINERATE - 1] = sIncinerateDescription,
    [MOVE_QUASH - 1] = sQuashDescription,
    [MOVE_ACROBATICS - 1] = sAcrobaticsDescription,
    [MOVE_REFLECT_TYPE - 1] = sReflectTypeDescription,
    [MOVE_RETALIATE - 1] = sRetaliateDescription,
    [MOVE_FINAL_GAMBIT - 1] = sFinalGambitDescription,
    [MOVE_BESTOW - 1] = sBestowDescription,
    [MOVE_INFERNO - 1] = sInfernoDescription,
    [MOVE_WATER_PLEDGE - 1] = sWaterPledgeDescription,
    [MOVE_FIRE_PLEDGE - 1] = sFirePledgeDescription,
    [MOVE_GRASS_PLEDGE - 1] = sGrassPledgeDescription,
    [MOVE_VOLT_SWITCH - 1] = sUTurnDescription,
    [MOVE_STRUGGLE_BUG - 1] = sStruggleBugDescription,
    [MOVE_BULLDOZE - 1] = sBulldozeDescription,
    [MOVE_FROST_BREATH - 1] = sStormThrowDescription,
    [MOVE_DRAGON_TAIL - 1] = sCircleThrowDescription,
    [MOVE_WORK_UP - 1] = sWorkUpDescription,
    [MOVE_ELECTROWEB - 1] = sElectrowebDescription,
    [MOVE_WILD_CHARGE - 1] = sWildChargeDescription,
    [MOVE_DRILL_RUN - 1] = sDrillRunDescription,
    [MOVE_DUAL_CHOP - 1] = sDualChopDescription,
    [MOVE_HEART_STAMP - 1] = sHeartStampDescription,
    [MOVE_HORN_LEECH - 1] = sMegaDrainDescription,
    [MOVE_SACRED_SWORD - 1] = sChipAwayDescription,
    [MOVE_RAZOR_SHELL - 1] = sRazorShellDescription,
    [MOVE_HEAT_CRASH - 1] = sHeavySlamDescription,
    [MOVE_LEAF_TORNADO - 1] = sLeafTornadoDescription,
    [MOVE_STEAMROLLER - 1] = sSteamrollerDescription,
    [MOVE_COTTON_GUARD - 1] = sCottonGuardDescription,
    [MOVE_NIGHT_DAZE - 1] = sNightDazeDescription,
    [MOVE_PSYSTRIKE - 1] = sPsyshockDescription,
    [MOVE_TAIL_SLAP - 1] = sTailSlapDescription,
    [MOVE_HURRICANE - 1] = sHurricaneDescription,
    [MOVE_HEAD_CHARGE - 1] = sHeadChargeDescription,
    [MOVE_GEAR_GRIND - 1] = sGearGrindDescription,
    [MOVE_SEARING_SHOT - 1] = sLavaPlumeDescription,
    [MOVE_TECHNO_BLAST - 1] = sTechnoBlastDescription,
    [MOVE_RELIC_SONG - 1] = sRelicSongDescription,
    [MOVE_SECRET_SWORD - 1] = sSecretSwordDescription,
    [MOVE_GLACIATE - 1] = sGlaciateDescription,
    [MOVE_BOLT_STRIKE - 1] = sBoltStrikeDescription,
    [MOVE_BLUE_FLARE - 1] = sBlueFlareDescription,
    [MOVE_FIERY_DANCE - 1] = sFieryDanceDescription,
    [MOVE_FREEZE_SHOCK - 1] = sFreezeShockDescription,
    [MOVE_ICE_BURN - 1] = sIceBurnDescription,
    [MOVE_SNARL - 1] = sSnarlDescription,
    [MOVE_ICICLE_CRASH - 1] = sIcicleCrashDescription,
    [MOVE_V_CREATE - 1] = sVCreateDescription,
    [MOVE_FUSION_FLARE - 1] = sFusionFlareDescription,
    [MOVE_FUSION_BOLT - 1] = sFusionBoltDescription,
    [MOVE_FLYING_PRESS - 1] = sFlyingPressDescription,
    [MOVE_MAT_BLOCK - 1] = sMatBlockDescription,
    [MOVE_BELCH - 1] = sBelchDescription,
    [MOVE_ROTOTILLER - 1] = sRototillerDescription,
    [MOVE_STICKY_WEB - 1] = sStickyWebDescription,
    [MOVE_FELL_STINGER - 1] = sFellStingerDescription,
    [MOVE_PHANTOM_FORCE - 1] = sShadowForceDescription,
    [MOVE_TRICK_OR_TREAT - 1] = sTrickOrTreatDescription,
    [MOVE_NOBLE_ROAR - 1] = sNobleRoarDescription,
    [MOVE_ION_DELUGE - 1] = sIonDelugeDescription,
    [MOVE_PARABOLIC_CHARGE - 1] = sParabolicChargeDescription,
    [MOVE_FORESTS_CURSE - 1] = sForestsCurseDescription,
    [MOVE_PETAL_BLIZZARD - 1] = sPetalBlizzardDescription,
    [MOVE_FREEZE_DRY - 1] = sFreezeDryDescription,
    [MOVE_DISARMING_VOICE - 1] = sDisarmingVoiceDescription,
    [MOVE_PARTING_SHOT - 1] = sPartingShotDescription,
    [MOVE_TOPSY_TURVY - 1] = sTopsyTurvyDescription,
    [MOVE_DRAINING_KISS - 1] = sDrainingKissDescription,
    [MOVE_CRAFTY_SHIELD - 1] = sCraftyShieldDescription,
    [MOVE_FLOWER_SHIELD - 1] = sFlowerShieldDescription,
    [MOVE_GRASSY_TERRAIN - 1] = sGrassyTerrainDescription,
    [MOVE_MISTY_TERRAIN - 1] = sMistyTerrainDescription,
    [MOVE_ELECTRIFY - 1] = sElectrifyDescription,
    [MOVE_PLAY_ROUGH - 1] = sPlayRoughDescription,
    [MOVE_FAIRY_WIND - 1] = sFairyWindDescription,
    [MOVE_MOONBLAST - 1] = sMoonblastDescription,
    [MOVE_BOOMBURST - 1] = sBoomburstDescription,
    [MOVE_FAIRY_LOCK - 1] = sFairyLockDescription,
    [MOVE_KINGS_SHIELD - 1] = sKingsShieldDescription,
    [MOVE_PLAY_NICE - 1] = sPlayNiceDescription,
    [MOVE_CONFIDE - 1] = sConfideDescription,
    [MOVE_DIAMOND_STORM - 1] = sDiamondStormDescription,
    [MOVE_STEAM_ERUPTION - 1] = sSteamEruptionDescription,
    [MOVE_HYPERSPACE_HOLE - 1] = sHyperspaceHoleDescription,
    [MOVE_WATER_SHURIKEN - 1] = sWaterShurikenDescription,
    [MOVE_MYSTICAL_FIRE - 1] = sMysticalFireDescription,
    [MOVE_SPIKY_SHIELD - 1] = sSpikyShieldDescription,
    [MOVE_AROMATIC_MIST - 1] = sAromaticMistDescription,
    [MOVE_EERIE_IMPULSE - 1] = sEerieImpulseDescription,
    [MOVE_VENOM_DRENCH - 1] = sVenomDrenchDescription,
    [MOVE_POWDER - 1] = sPowderDescription,
    [MOVE_GEOMANCY - 1] = sGeomancyDescription,
    [MOVE_MAGNETIC_FLUX - 1] = sMagneticFluxDescription,
    [MOVE_HAPPY_HOUR - 1] = sHappyHourDescription,
    [MOVE_ELECTRIC_TERRAIN - 1] = sElectricTerrainDescription,
    [MOVE_DAZZLING_GLEAM - 1] = sDazzlingGleamDescription,
    [MOVE_CELEBRATE - 1] = sCelebrateDescription,
    [MOVE_HOLD_HANDS - 1] = sHoldHandsDescription,
    [MOVE_BABY_DOLL_EYES - 1] = sBabyDollEyesDescription,
    [MOVE_NUZZLE - 1] = sNuzzleDescription,
    [MOVE_HOLD_BACK - 1] = sFalseSwipeDescription,
    [MOVE_INFESTATION - 1] = sInfestationDescription,
    [MOVE_POWER_UP_PUNCH - 1] = sPowerUpPunchDescription,
    [MOVE_OBLIVION_WING - 1] = sDrainingKissDescription,
    [MOVE_THOUSAND_ARROWS - 1] = sThousandArrowsDescription,
    [MOVE_THOUSAND_WAVES - 1] = sThousandWavesDescription,
    [MOVE_LANDS_WRATH - 1] = sLandsWrathDescription,
    [MOVE_LIGHT_OF_RUIN - 1] = sLightOfRuinDescription,
    [MOVE_ORIGIN_PULSE - 1] = sOriginPulseDescription,
    [MOVE_PRECIPICE_BLADES - 1] = sPrecipiceBladesDescription,
    [MOVE_DRAGON_ASCENT - 1] = sCloseCombatDescription,
    [MOVE_HYPERSPACE_FURY - 1] = sHyperspaceHoleDescription,
    [MOVE_SHORE_UP - 1] = sShoreUpDescription,
    [MOVE_FIRST_IMPRESSION - 1] = sFirstImpressionDescription,
    [MOVE_BANEFUL_BUNKER - 1] = sBanefulBunkerDescription,
    [MOVE_SPIRIT_SHACKLE - 1] = sSpiritShackleDescription,
    [MOVE_DARKEST_LARIAT - 1] = sDarkestLariatDescription,
    [MOVE_SPARKLING_ARIA - 1] = sSparklingAriaDescription,
    [MOVE_ICE_HAMMER - 1] = sIceHammerDescription,
    [MOVE_FLORAL_HEALING - 1] = sFloralHealingDescription,
    [MOVE_HIGH_HORSEPOWER - 1] = sHighHorsepowerDescription,
    [MOVE_STRENGTH_SAP - 1] = sStrengthSapDescription,
    [MOVE_SOLAR_BLADE - 1] = sSolarBladeDescription,
    [MOVE_LEAFAGE - 1] = sLeafageDescription,
    [MOVE_SPOTLIGHT - 1] = sSpotlightDescription,
    [MOVE_TOXIC_THREAD - 1] = sToxicThreadDescription,
    [MOVE_LASER_FOCUS - 1] = sLaserFocusDescription,
    [MOVE_GEAR_UP - 1] = sGearUpDescription,
    [MOVE_THROAT_CHOP - 1] = sThroatChopDescription,
    [MOVE_POLLEN_PUFF - 1] = sPollenPuffDescription,
    [MOVE_ANCHOR_SHOT - 1] = sAnchorShotDescription,
    [MOVE_PSYCHIC_TERRAIN - 1] = sPsychicTerrainDescription,
    [MOVE_LUNGE - 1] = sLungeDescription,
    [MOVE_FIRE_LASH - 1] = sFireLashDescription,
    [MOVE_POWER_TRIP - 1] = sPowerTripDescription,
    [MOVE_BURN_UP - 1] = sBurnUpDescription,
    [MOVE_SPEED_SWAP - 1] = sSpeedSwapDescription,
    [MOVE_SMART_STRIKE - 1] = sSmartStrikeDescription,
    [MOVE_PURIFY - 1] = sPurifyDescription,
    [MOVE_REVELATION_DANCE - 1] = sRevelationDanceDescription,
    [MOVE_CORE_ENFORCER - 1] = sCoreEnforcerDescription,
    [MOVE_TROP_KICK - 1] = sTropKickDescription,
    [MOVE_INSTRUCT - 1] = sInstructDescription,
    [MOVE_BEAK_BLAST - 1] = sBeakBlastDescription,
    [MOVE_CLANGING_SCALES - 1] = sClangingScalesDescription,
    [MOVE_DRAGON_HAMMER - 1] = sDragonHammerDescription,
    [MOVE_BRUTAL_SWING - 1] = sBrutalSwingDescription,
    [MOVE_AURORA_VEIL - 1] = sAuroraVeilDescription,
    [MOVE_SHELL_TRAP - 1] = sShellTrapDescription,
    [MOVE_FLEUR_CANNON - 1] = sFleurCannonDescription,
    [MOVE_PSYCHIC_FANGS - 1] = sPsychicFangsDescription,
    [MOVE_STOMPING_TANTRUM - 1] = sStompingTantrumDescription,
    [MOVE_SHADOW_BONE - 1] = sShadowBoneDescription,
    [MOVE_ACCELEROCK - 1] = sAccelerockDescription,
    [MOVE_LIQUIDATION - 1] = sLiquidationDescription,
    [MOVE_PRISMATIC_LASER - 1] = sPrismaticLaserDescription,
    [MOVE_SPECTRAL_THIEF - 1] = sSpectralThiefDescription,
    [MOVE_SUNSTEEL_STRIKE - 1] = sSunsteelStrikeDescription,
    [MOVE_MOONGEIST_BEAM - 1] = sMoongeistBeamDescription,
    [MOVE_TEARFUL_LOOK - 1] = sTearfulLookDescription,
    [MOVE_ZING_ZAP - 1] = sZingZapDescription,
    [MOVE_NATURES_MADNESS - 1] = sNaturesMadnessDescription,
    [MOVE_MULTI_ATTACK - 1] = sMultiAttackDescription,
    [MOVE_MIND_BLOWN - 1] = sMindBlownDescription,
    [MOVE_PLASMA_FISTS - 1] = sPlasmaFistsDescription,
    [MOVE_PHOTON_GEYSER - 1] = sPhotonGeyserDescription,
    [MOVE_ZIPPY_ZAP - 1] = sZippyZapDescription,
    [MOVE_SPLISHY_SPLASH - 1] = sSplishySplashDescription,
    [MOVE_FLOATY_FALL - 1] = sFloatyFallDescription,
    [MOVE_PIKA_PAPOW - 1] = sPikaPapowDescription,
    [MOVE_BOUNCY_BUBBLE - 1] = sBouncyBubbleDescription,
    [MOVE_BUZZY_BUZZ - 1] = sBuzzyBuzzDescription,
    [MOVE_SIZZLY_SLIDE - 1] = sSizzlySlideDescription,
    [MOVE_GLITZY_GLOW - 1] = sGlitzyGlowDescription,
    [MOVE_BADDY_BAD - 1] = sBaddyBadDescription,
    [MOVE_SAPPY_SEED - 1] = sSappySeedDescription,
    [MOVE_FREEZY_FROST - 1] = sFreezyFrostDescription,
    [MOVE_SPARKLY_SWIRL - 1] = sSparklySwirlDescription,
    [MOVE_VEEVEE_VOLLEY - 1] = sVeeveeVolleyDescription,
    [MOVE_DOUBLE_IRON_BASH - 1] = sDoubleIronBashDescription,

    //GEN 8
    [MOVE_DYNAMAX_CANNON - 1] = sDynamaxCannonDescription,
    [MOVE_SNIPE_SHOT - 1] = sSnipeShotDescription,
    [MOVE_JAW_LOCK - 1] = sJawLockDescription,
    [MOVE_STUFF_CHEEKS - 1] = sStuffCheeksDescription,
    [MOVE_NO_RETREAT - 1] = sNoRetreatDescription,
    [MOVE_TAR_SHOT - 1] = sTarShotDescription,
    [MOVE_MAGIC_POWDER - 1] = sMagicPowderDescription,
    [MOVE_DRAGON_DARTS - 1] = sDragonDartsDescription,
    [MOVE_TEATIME - 1] = sTeatimeDescription,
    [MOVE_OCTOLOCK - 1] = sOctolockDescription,
    [MOVE_BOLT_BEAK - 1] = sBoltBeakDescription,
    [MOVE_FISHIOUS_REND - 1] = sFishiousRendDescription,
    [MOVE_COURT_CHANGE - 1] = sCourtChangeDescription,
    [MOVE_CLANGOROUS_SOUL - 1] = sClangorousSoulDescription,
    [MOVE_BODY_PRESS - 1] = sBodyPressDescription,
    [MOVE_DECORATE - 1] = sDecorateDescription,
    [MOVE_DRUM_BEATING - 1] = sDrumBeatingDescription,
    [MOVE_SNAP_TRAP - 1] = sSnapTrapDescription,
    [MOVE_PYRO_BALL - 1] = sPyroBallDescription,
    [MOVE_BEHEMOTH_BLADE - 1] = sBehemothBladeDescription,
    [MOVE_BEHEMOTH_BASH - 1] = sBehemothBashDescription,
    [MOVE_AURA_WHEEL - 1] = sAuraWheelDescription,
    [MOVE_BREAKING_SWIPE - 1] = sBreakingSwipeDescription,
    [MOVE_BRANCH_POKE - 1] = sBranchPokeDescription,
    [MOVE_OVERDRIVE - 1] = sOverdriveDescription,
    [MOVE_APPLE_ACID - 1] = sAppleAcidDescription,
    [MOVE_GRAV_APPLE - 1] = sGravAppleDescription,
    [MOVE_SPIRIT_BREAK - 1] = sSpiritBreakDescription,
    [MOVE_STRANGE_STEAM - 1] = sStrangeSteamDescription,
    [MOVE_LIFE_DEW - 1] = sLifeDewDescription,
    [MOVE_OBSTRUCT - 1] = sObstructDescription,
    [MOVE_FALSE_SURRENDER - 1] = sFalseSurrenderDescription,
    [MOVE_METEOR_ASSAULT - 1] = sMeteorAssaultDescription,
    [MOVE_ETERNABEAM - 1] = sEternabeamDescription,
    [MOVE_STEEL_BEAM - 1] = sSteelBeamDescription,
    [MOVE_EXPANDING_FORCE - 1] = sExpandingForceDescription,
    [MOVE_STEEL_ROLLER - 1] = sSteelRollerDescription,
    [MOVE_SCALE_SHOT - 1] = sScaleShotDescription,
    [MOVE_METEOR_BEAM - 1] = sMeteorBeamDescription,
    [MOVE_SHELL_SIDE_ARM - 1] = sShellSideArmDescription,
    [MOVE_MISTY_EXPLOSION - 1] = sMistyExplosionDescription,
    [MOVE_GRASSY_GLIDE - 1] = sGrassyGlideDescription,
    [MOVE_RISING_VOLTAGE - 1] = sRisingVoltageDescription,
    [MOVE_TERRAIN_PULSE - 1] = sTerrainPulseDescription,
    [MOVE_SKITTER_SMACK - 1] = sSkitterSmackDescription,
    [MOVE_BURNING_JEALOUSY - 1] = sBurningJealousyDescription,
    [MOVE_LASH_OUT - 1] = sLashOutDescription,
    [MOVE_POLTERGEIST - 1] = sPoltergeistDescription,
    [MOVE_CORROSIVE_GAS - 1] = sCorrosiveGasDescription,
    [MOVE_COACHING - 1] = sCoachingDescription,
    [MOVE_FLIP_TURN - 1] = sFlipTurnDescription,
    [MOVE_TRIPLE_AXEL - 1] = sTripleAxelDescription,
    [MOVE_DUAL_WINGBEAT - 1] = sDualWingbeatDescription,
    [MOVE_SCORCHING_SANDS - 1] = sScorchingSandsDescription,
    [MOVE_JUNGLE_HEALING - 1] = sJungleHealingDescription,
    [MOVE_WICKED_BLOW - 1] = sWickedBlowDescription,
    [MOVE_SURGING_STRIKES - 1] = sSurgingStrikesDescription,
    [MOVE_THUNDER_CAGE - 1] = sThunderCageDescription,
    [MOVE_DRAGON_ENERGY - 1] = sDragonEnergyDescription,
    [MOVE_FREEZING_GLARE - 1] = sFreezingGlareDescription,
    [MOVE_FIERY_WRATH - 1] = sFieryWrathDescription,
    [MOVE_THUNDEROUS_KICK - 1] = sThunderousKickDescription,
    [MOVE_GLACIAL_LANCE - 1] = sGlacialLanceDescription,
    [MOVE_ASTRAL_BARRAGE - 1] = sAstralBarrageDescription,
    [MOVE_EERIE_SPELL - 1] = sEerieSpellDescription,
    [MOVE_DIRE_CLAW - 1] = sDireClawDescription,
    [MOVE_PSYSHIELD_BASH - 1] = sPsyshieldBashDescription,
    [MOVE_POWER_SHIFT - 1] = sPowerShiftDescription,
    [MOVE_STONE_AXE - 1] = sStoneAxeDescription,
    [MOVE_SPRINGTIDE_STORM - 1] = sSpringtideStormDescription,
    [MOVE_MYSTICAL_POWER - 1] = sMysticalPowerDescription,
    [MOVE_RAGING_FURY - 1] = sRagingFuryDescription,
    [MOVE_WAVE_CRASH - 1] = sWaveCrashDescription,
    [MOVE_CHLOROBLAST - 1] = sChloroblastDescription,
    [MOVE_MOUNTAIN_GALE - 1] = sMountainGaleDescription,
    [MOVE_VICTORY_DANCE - 1] = sVictoryDanceDescription,
    [MOVE_HEADLONG_RUSH - 1] = sHeadlongRushDescription,
    [MOVE_BARB_BARRAGE - 1] = sBarbBarrageDescription,
    [MOVE_ESPER_WING - 1] = sEsperWingDescription,
    [MOVE_BITTER_MALICE - 1] = sBitterMaliceDescription,
    [MOVE_SHELTER - 1] = sShelterDescription,
    [MOVE_TRIPLE_ARROWS - 1] = sTripleArrowsDescription,
    [MOVE_INFERNAL_PARADE - 1] = sInfernalParadeDescription,
    [MOVE_CEASELESS_EDGE - 1] = sCeaselessEdgeDescription,
    [MOVE_BLEAKWIND_STORM - 1] = sBleakwindStormDescription,
    [MOVE_WILDBOLT_STORM - 1] = sWildboltStormDescription,
    [MOVE_SANDSEAR_STORM - 1] = sSandsearStormDescription,
    [MOVE_LUNAR_BLESSING - 1] = sLunarBlessingDescription,
    [MOVE_TAKE_HEART - 1] = sTakeHeartDescription,
    [MOVE_TERA_BLAST - 1] = sTeraBlastDescription,
    [MOVE_SILK_TRAP - 1] = sSilkTrapDescription,
    [MOVE_AXE_KICK - 1] = sAxeKickDescription,
    [MOVE_LAST_RESPECTS - 1] = sLastRespectsDescription,
    [MOVE_LUMINA_CRASH - 1] = sLuminaCrashDescription,
    [MOVE_ORDER_UP - 1] = sOrderUpDescription,
    [MOVE_JET_PUNCH - 1] = sJetPunchDescription,
    [MOVE_SPICY_EXTRACT - 1] = sSpicyExtractDescription,
    [MOVE_SPIN_OUT - 1] = sSpinOutDescription,
    [MOVE_POPULATION_BOMB - 1] = sPopulationBombDescription,
    [MOVE_ICE_SPINNER - 1] = sIceSpinnerDescription,
    [MOVE_GLAIVE_RUSH - 1] = sGlaiveRushDescription,
    [MOVE_REVIVAL_BLESSING - 1] = sRevivalBlessingDescription,
    [MOVE_SALT_CURE - 1] = sSaltCureDescription,
    [MOVE_TRIPLE_DIVE - 1] = sTripleDiveDescription,
    [MOVE_MORTAL_SPIN - 1] = sMortalSpinDescription,
    [MOVE_DOODLE - 1] = sDoodleDescription,
    [MOVE_FILLET_AWAY - 1] = sFilletAwayDescription,
    [MOVE_KOWTOW_CLEAVE - 1] = sKowtowCleaveDescription,
    [MOVE_FLOWER_TRICK - 1] = sFlowerTrickDescription,
    [MOVE_TORCH_SONG - 1] = sTorchSongDescription,
    [MOVE_AQUA_STEP - 1] = sAquaStepDescription,
    [MOVE_RAGING_BULL - 1] = sRagingBullDescription,
    [MOVE_MAKE_IT_RAIN - 1] = sMakeItRainDescription,
    [MOVE_RUINATION - 1] = sRuinationDescription,
    [MOVE_COLLISION_COURSE - 1] = sCollisionCourseDescription,
    [MOVE_ELECTRO_DRIFT - 1] = sElectroDriftDescription,
    [MOVE_SHED_TAIL - 1] = sShedTailDescription,
    [MOVE_CHILLY_RECEPTION - 1] = sChillyReceptionDescription,
    [MOVE_TIDY_UP - 1] = sTidyUpDescription,
    [MOVE_SNOWSCAPE - 1] = sSnowscapeDescription,
    [MOVE_POUNCE - 1] = sPounceDescription,
    [MOVE_TRAILBLAZE - 1] = sTrailblazeDescription,
    [MOVE_CHILLING_WATER - 1] = sChillingWaterDescription,
    [MOVE_HYPER_DRILL - 1] = sHyperDrillDescription,
    [MOVE_TWIN_BEAM - 1] = sTwinBeamDescription,
    [MOVE_RAGE_FIST - 1] = sRageFistDescription,
    [MOVE_ARMOR_CANNON - 1] = sArmorCannonDescription,
    [MOVE_BITTER_BLADE - 1] = sBitterBladeDescription,
    [MOVE_DOUBLE_SHOCK - 1] = sDoubleShockDescription,
    [MOVE_GIGATON_HAMMER - 1] = sGigatonHammerDescription,
    [MOVE_COMEUPPANCE - 1] = sComeuppanceDescription,
    [MOVE_AQUA_CUTTER - 1] = sAquaCutterDescription,
    [MOVE_BLAZING_TORQUE - 1] = sBlazingTorqueDescription,
    [MOVE_WICKED_TORQUE - 1] = sWickedTorqueDescription,
    [MOVE_NOXIOUS_TORQUE - 1] = sNoxiousTorqueDescription,
    [MOVE_COMBAT_TORQUE - 1] = sCombatTorqueDescription,
    [MOVE_MAGICAL_TORQUE - 1] = sMagicalTorqueDescription,
    [MOVE_PSYBLADE - 1] = sPsybladeDescription,
    [MOVE_HYDRO_STEAM - 1] = sHydroSteamDescription,
};
