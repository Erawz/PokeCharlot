extern const u8 EventScript_FollowerIsShivering[];
extern const u8 EventScript_FollowerNostalgia[];
extern const u8 EventScript_FollowerHopping[];
extern const u8 EventScript_FollowerJumpOnPlayer[];
extern const u8 EventScript_FollowerCuddling[];
extern const u8 EventScript_FollowerShiverCuddling[];
extern const u8 EventScript_FollowerGetCloser[];
extern const u8 EventScript_FollowerPokingPlayer[];
extern const u8 EventScript_FollowerLookAround[];
extern const u8 EventScript_FollowerLookAway[];
extern const u8 EventScript_FollowerLookAwayBark[];
extern const u8 EventScript_FollowerLookAwayPoke[];
extern const u8 EventScript_FollowerPokeGround[];
extern const u8 EventScript_FollowerStartled[];
extern const u8 EventScript_FollowerFastHopping[];
extern const u8 EventScript_FollowerDizzy[];
extern const u8 EventScript_FollowerLookAroundScared[];
extern const u8 EventScript_FollowerDance[];
extern const u8 EventScript_FollowerLookUp[];

// 'Generic', unconditional happy messages
static const u8 sHappyMsg00[] = _("{STR_VAR_1} a commencé à vous piquer\ndans l'estomac.");
static const u8 sHappyMsg01[] = _("{STR_VAR_1} est heureux mais timide.");
static const u8 sHappyMsg02[] = _("{STR_VAR_1} s'en vient joyeusement.");
static const u8 sHappyMsg03[] = _("{STR_VAR_1} est composé");
static const u8 sHappyMsg04[] = _("{STR_VAR_1} semble se sentir\nbien à l'idée de marcher avec vous!");
static const u8 sHappyMsg05[] = _("{STR_VAR_1} est resplendissant de santé.");
static const u8 sHappyMsg06[] = _("{STR_VAR_1} a l'air très heureux.");
static const u8 sHappyMsg07[] = _("{STR_VAR_1} fait un effort supplémentaire.");
static const u8 sHappyMsg08[] = _("{STR_VAR_1} sent les odeurs\nde l'air ambiant.");
static const u8 sHappyMsg09[] = _("{STR_VAR_1} saute de joie!");
static const u8 sHappyMsg10[] = _("{STR_VAR_1} se sent toujours bien!");
static const u8 sHappyMsg11[] = _("Votre POKéMON a senti une odeur de\nfumée.");
static const u8 sHappyMsg12[] = _("{STR_VAR_1} pique ton ventre.");
static const u8 sHappyMsg13[] = _("Votre POKéMON étend son corps\net se détend.");
static const u8 sHappyMsg14[] = _("{STR_VAR_1} on dirait qu'il veut\ndiriger!");
static const u8 sHappyMsg15[] = _("{STR_VAR_1} fait de son mieux pour\nsuivre votre rythme.");
static const u8 sHappyMsg16[] = _("{STR_VAR_1} est heureux de vous câliner!");
static const u8 sHappyMsg17[] = _("{STR_VAR_1} est plein de vie!");
static const u8 sHappyMsg18[] = _("{STR_VAR_1} semble être très heureux!");
static const u8 sHappyMsg19[] = _("{STR_VAR_1} est si heureux qu'il\nne peut pas rester immobile!");
static const u8 sHappyMsg20[] = _("{STR_VAR_1} hocha lentement la tête.");
static const u8 sHappyMsg21[] = _("{STR_VAR_1} est très impatient!");
static const u8 sHappyMsg22[] = _("{STR_VAR_1} se promène et\nécoute les différents sons.");
static const u8 sHappyMsg23[] = _("{STR_VAR_1} semble très intéressé.");
static const u8 sHappyMsg24[] = _("{STR_VAR_1} se force en quelque sorte\nà continuer.");
static const u8 sHappyMsg25[] = _("{STR_VAR_1} vous a donné un air ensoleillé!");
static const u8 sHappyMsg26[] = _("{STR_VAR_1} vous donne un regard heureux\net un sourire.");
static const u8 sHappyMsg27[] = _("Votre POKéMON sent le parfum\ndes fleurs.");
static const u8 sHappyMsg28[] = _("{STR_VAR_1} semble très heureux\nde vous voir!");
static const u8 sHappyMsg29[] = _("{STR_VAR_1} fait face de cette façon et\na souri.");
static const u8 sHappyMsg30[] = _("{STR_VAR_1} heureusement câliné à\nvous!");
  // Conditional messages begin here, index 31
static const u8 sHappyMsg31[] = _("Votre POKéMON semble ravi du\nbeau temps.");
static const u8 sHappyMsg32[] = _("{STR_VAR_1} est très posé et\nsûr de lui!");

const struct FollowerMsgInfo gFollowerHappyMessages[] = {
    {sHappyMsg00, EventScript_FollowerPokingPlayer},
    {sHappyMsg01}, {sHappyMsg02}, {sHappyMsg03}, {sHappyMsg04}, {sHappyMsg05}, {sHappyMsg06}, {sHappyMsg07},
    {sHappyMsg08, EventScript_FollowerLookAround},
    {sHappyMsg09, EventScript_FollowerHopping},
    {sHappyMsg10}, {sHappyMsg11},
    {sHappyMsg12, EventScript_FollowerPokingPlayer},
    {sHappyMsg13, EventScript_FollowerLookAround},
    {sHappyMsg14}, {sHappyMsg15},
    {sHappyMsg16, EventScript_FollowerCuddling},
    {sHappyMsg17}, {sHappyMsg18},
    {sHappyMsg19, EventScript_FollowerFastHopping},
    {sHappyMsg20}, {sHappyMsg21}, {sHappyMsg22}, {sHappyMsg23}, {sHappyMsg24}, {sHappyMsg25}, {sHappyMsg26}, {sHappyMsg27}, {sHappyMsg28}, {sHappyMsg29},
    {sHappyMsg30, EventScript_FollowerCuddling},
    {sHappyMsg31}, {sHappyMsg32},
};

// Unconditional neutral messages
static const u8 sNeutralMsg00[] = _("{STR_VAR_1} pique régulièrement\nle sol.");
static const u8 sNeutralMsg01[] = _("{STR_VAR_1} monte la garde.");
static const u8 sNeutralMsg02[] = _("{STR_VAR_1} regarde patiemment\nrien du tout.");
static const u8 sNeutralMsg03[] = _("{STR_VAR_1} se promène.");
static const u8 sNeutralMsg04[] = _("Votre POKéMON a bâillé bruyamment!");
static const u8 sNeutralMsg05[] = _("Votre POKéMON regarde autour\nd'un air agité.");
static const u8 sNeutralMsg06[] = _("{STR_VAR_1} regarde dans cette direction et\n sourit.");
static const u8 sNeutralMsg07[] = _("{STR_VAR_1} regarde autour\nd'un air agité.");
static const u8 sNeutralMsg08[] = _("{STR_VAR_1} poussa un cri de guerre.");
static const u8 sNeutralMsg09[] = _("{STR_VAR_1} a dansé une merveilleuse\ndanse!");
static const u8 sNeutralMsg10[] = _("{STR_VAR_1} est très impatient.");
static const u8 sNeutralMsg11[] = _("{STR_VAR_1} regarde intensément dans\nla distance.");
static const u8 sNeutralMsg12[] = _("{STR_VAR_1} est à l'affût!");
static const u8 sNeutralMsg13[] = _("{STR_VAR_1} regarda au loin\net aboya!");

const struct FollowerMsgInfo gFollowerNeutralMessages[] = {
    {sNeutralMsg00, EventScript_FollowerPokeGround},
    {sNeutralMsg01},
    {sNeutralMsg02, EventScript_FollowerLookAway},
    {sNeutralMsg03, EventScript_FollowerLookAround},
    {sNeutralMsg04},
    {sNeutralMsg05, EventScript_FollowerLookAround},
    {sNeutralMsg06}, {sNeutralMsg07}, {sNeutralMsg08},
    {sNeutralMsg09, EventScript_FollowerDance},
    {sNeutralMsg10},
    {sNeutralMsg11, EventScript_FollowerLookAway},
    {sNeutralMsg12},
    {sNeutralMsg13, EventScript_FollowerLookAwayBark},
};

// Unconditional sad messages
static const u8 sSadMsg00[] = _("{STR_VAR_1} a le vertige.");
static const u8 sSadMsg01[] = _("{STR_VAR_1} marche sur vos\npieds!");
static const u8 sSadMsg02[] = _("{STR_VAR_1} semble un peu fatigué.");
  // Conditional messages begin, index 3
static const u8 sSadMsg03[] = _("{STR_VAR_1} n'est pas content.");
static const u8 sSadMsg04[] = _("{STR_VAR_1} va tomber!");
static const u8 sSadMsg05[] = _("{STR_VAR_1} semble être sur le point\nde tomber!");
static const u8 sSadMsg06[] = _("{STR_VAR_1} essaie très fort\nde vous suivre…");
static const u8 sSadMsg07[] = _("{STR_VAR_1} est nerveux.");

const struct FollowerMsgInfo gFollowerSadMessages[] = {
    {sSadMsg00, EventScript_FollowerDizzy},
    {sSadMsg01}, {sSadMsg02},
    {sSadMsg03}, {sSadMsg04}, {sSadMsg05}, {sSadMsg06}, {sSadMsg07},
};

// Unconditional upset messages
static const u8 sUpsetMsg00[] = _("{STR_VAR_1} semble malheureux\nen quelque sorte…");
static const u8 sUpsetMsg01[] = _("{STR_VAR_1} fait une grimace\nmalheureuse.");
static const u8 sUpsetMsg02[] = _("Votre POKéMON semble avoir\nfroid.");
  // Conditional messages, index 3
static const u8 sUpsetMsg03[] = _("{STR_VAR_1} s'abrite dans l'herbe\nde la pluie.");

const struct FollowerMsgInfo gFollowerUpsetMessages[] = {
    {sUpsetMsg00}, {sUpsetMsg01},
    {sUpsetMsg02, EventScript_FollowerIsShivering},
    {sUpsetMsg03},
};

// Unconditional angry messages
static const u8 sAngryMsg00[] = _("{STR_VAR_1} laisser échapper\nun rugissement!");
static const u8 sAngryMsg01[] = _("{STR_VAR_1} fait une grimace comme\nsa colère!");
static const u8 sAngryMsg02[] = _("{STR_VAR_1} semble être en colère pour\nune raison quelconque.");
static const u8 sAngryMsg03[] = _("Votre POKéMON s'est retourné pour faire face\ndans l'autre sens, montrant un visage provocateur.");
static const u8 sAngryMsg04[] = _("{STR_VAR_1} a crié.");

const struct FollowerMsgInfo gFollowerAngryMessages[] = {
    {sAngryMsg00}, {sAngryMsg01}, {sAngryMsg02},
    {sAngryMsg03, EventScript_FollowerLookAway},
    {sAngryMsg04},
};

// Unconditional pensive messages
static const u8 sPensiveMsg00[] = _("{STR_VAR_1} regarde vers le bas\nrégulièrement.");
static const u8 sPensiveMsg01[] = _("{STR_VAR_1} arpente la région.");
static const u8 sPensiveMsg02[] = _("{STR_VAR_1} regarde vers le bas.");
static const u8 sPensiveMsg03[] = _("{STR_VAR_1} combat en quelque sorte\nle sommeil…");
static const u8 sPensiveMsg04[] = _("{STR_VAR_1} semble errer\ndans les environs.");
static const u8 sPensiveMsg05[] = _("{STR_VAR_1} regarde autour de lui\ndistraitement.");
static const u8 sPensiveMsg06[] = _("{STR_VAR_1} bâilla très fort!");
static const u8 sPensiveMsg07[] = _("{STR_VAR_1} se détend confortablement.");
static const u8 sPensiveMsg08[] = _("{STR_VAR_1} regarde fixement\nvotre visage.");
static const u8 sPensiveMsg09[] = _("{STR_VAR_1} fixe attentivement\nvotre visage.");
static const u8 sPensiveMsg10[] = _("{STR_VAR_1} concentre son\nattention sur vous.");
static const u8 sPensiveMsg11[] = _("{STR_VAR_1} regarde dans les\nprofondeurs.");
static const u8 sPensiveMsg12[] = _("{STR_VAR_1} renifle le sol.");
static const u8 sPensiveMsg13[] = _("Votre POKéMON regarde attentivement\nrien.");
static const u8 sPensiveMsg14[] = _("{STR_VAR_1} concentré avec un regard\nvif!");
static const u8 sPensiveMsg15[] = _("{STR_VAR_1} se concentre.");
static const u8 sPensiveMsg16[] = _("{STR_VAR_1} fait face de cette façon et\na hoché la tête.");
static const u8 sPensiveMsg17[] = _("{STR_VAR_1} semble un peu nerveux…");
static const u8 sPensiveMsg18[] = _("{STR_VAR_1} regarde vos\nempreintes de pas.");
static const u8 sPensiveMsg19[] = _("{STR_VAR_1} regarde droit dans\nvos yeux.");

const struct FollowerMsgInfo gFollowerPensiveMessages[] = {
    {sPensiveMsg00},
    {sPensiveMsg01, EventScript_FollowerLookAround},
    {sPensiveMsg02}, {sPensiveMsg03}, {sPensiveMsg04},
    {sPensiveMsg05, EventScript_FollowerLookAround},
    {sPensiveMsg06}, {sPensiveMsg07}, {sPensiveMsg08}, {sPensiveMsg09}, {sPensiveMsg10},
    {sPensiveMsg11, EventScript_FollowerLookAway},
    {sPensiveMsg12, EventScript_FollowerPokeGround},
    {sPensiveMsg13, EventScript_FollowerLookAway},
    {sPensiveMsg14}, {sPensiveMsg15}, {sPensiveMsg16}, {sPensiveMsg17}, {sPensiveMsg18}, {sPensiveMsg19},
};

// All 'love' messages are unconditional
static const u8 sLoveMsg00[] = _("{STR_VAR_1} a soudainement commencé à marcher\nplus près!");
static const u8 sLoveMsg01[] = _("{STR_VAR_1} les joues deviennent\nroses!");
static const u8 sLoveMsg02[] = _("Woah! {STR_VAR_1} t'a soudainement\nembrassé!");
static const u8 sLoveMsg03[] = _("Woah! {STR_VAR_1} est tout à coup\nludique!");
static const u8 sLoveMsg04[] = _("{STR_VAR_1} se frotte contre vos\njambes!");
static const u8 sLoveMsg05[] = _("{STR_VAR_1} rougit.");
static const u8 sLoveMsg06[] = _("Ah! {STR_VAR_1} te câline!");
static const u8 sLoveMsg07[] = _("{STR_VAR_1} vous regarde avec\nadoration!");
static const u8 sLoveMsg08[] = _("{STR_VAR_1} s'est rapproché de toi.");
static const u8 sLoveMsg09[] = _("{STR_VAR_1} se tient près de vos\npieds.");

const struct FollowerMsgInfo gFollowerLoveMessages[] = {
    {sLoveMsg00, EventScript_FollowerGetCloser},
    {sLoveMsg01},
    {sLoveMsg02, EventScript_FollowerCuddling},
    {sLoveMsg03},
    {sLoveMsg04, EventScript_FollowerCuddling},
    {sLoveMsg05},
    {sLoveMsg06, EventScript_FollowerCuddling},
    {sLoveMsg07},
    {sLoveMsg08, EventScript_FollowerGetCloser},
    {sLoveMsg09},
};

// Unconditional surprised messages
static const u8 sSurpriseMsg00[] = _("{STR_VAR_1} risque de tomber!");
static const u8 sSurpriseMsg01[] = _("{STR_VAR_1} t'a bousculé!");
static const u8 sSurpriseMsg02[] = _("{STR_VAR_1} ne semble pas encore utilisé\npour son propre nom.");
static const u8 sSurpriseMsg03[] = _("{STR_VAR_1} regarde vers le bas.");
static const u8 sSurpriseMsg04[] = _("Votre POKéMON a trébuché et a failli\ntomber!");
static const u8 sSurpriseMsg05[] = _("{STR_VAR_1} sent quelque chose\net hurle!");
static const u8 sSurpriseMsg06[] = _("{STR_VAR_1} semble rafraîchi!");
static const u8 sSurpriseMsg07[] = _("{STR_VAR_1} s'est soudainement retourné\net a commencé à aboyer!");
static const u8 sSurpriseMsg08[] = _("{STR_VAR_1} s'est soudainement retourné!");
static const u8 sSurpriseMsg09[] = _("Votre POKéMON a été surpris que vous\n lui parliez soudainement!");
static const u8 sSurpriseMsg10[] = _("Sniff sniff, quelque chose sent vraiment\nbon!");
static const u8 sSurpriseMsg11[] = _("{STR_VAR_1} se sent rafraîchi.");
static const u8 sSurpriseMsg12[] = _("{STR_VAR_1} vacille et semble\nsur le point de tomber.");
static const u8 sSurpriseMsg13[] = _("{STR_VAR_1} risque de tomber.");
static const u8 sSurpriseMsg14[] = _("{STR_VAR_1} marche prudemment.");
static const u8 sSurpriseMsg15[] = _("{STR_VAR_1} devient tendu avec\nénergie nerveuse.");
static const u8 sSurpriseMsg16[] = _("{STR_VAR_1} a senti quelque chose d'étrange\net a été surpris!");
static const u8 sSurpriseMsg17[] = _("{STR_VAR_1} a peur et se blottit\ncontre vous!");
static const u8 sSurpriseMsg18[] = _("{STR_VAR_1} ressent une présence\n inhabituelle…");
static const u8 sSurpriseMsg19[] = _("{STR_VAR_1} devient tendu avec\nénergie nerveuse.");
  // Conditional messages, index 20
static const u8 sSurpriseMsg20[] = _("{STR_VAR_1} semble être très\nsurpris qu'il pleuve!");

const struct FollowerMsgInfo gFollowerSurpriseMessages[] = {
    {sSurpriseMsg00},
    {sSurpriseMsg01, EventScript_FollowerPokingPlayer},
    {sSurpriseMsg02}, {sSurpriseMsg03}, {sSurpriseMsg04}, {sSurpriseMsg05}, {sSurpriseMsg06},
    {sSurpriseMsg07, EventScript_FollowerLookAwayBark},
    {sSurpriseMsg08, EventScript_FollowerLookAway},
    {sSurpriseMsg09},
    {sSurpriseMsg10, EventScript_FollowerLookAround},
    {sSurpriseMsg11}, {sSurpriseMsg12}, {sSurpriseMsg13}, {sSurpriseMsg14}, {sSurpriseMsg15}, {sSurpriseMsg16},
    {sSurpriseMsg17, EventScript_FollowerCuddling},
    {sSurpriseMsg18},
    {sSurpriseMsg19, EventScript_FollowerLookAround},
    {sSurpriseMsg20},
};

// Unconditional curious messages
static const u8 sCuriousMsg00[] = _("Votre POKéMON cherche autour\nsans cesse quelque chose.");
static const u8 sCuriousMsg01[] = _("Votre POKéMON ne regardait pas où\nil allait et vous a percuté!");
static const u8 sCuriousMsg02[] = _("Sniff sniff! Y a-t-il quelque chose\nà proximité?");
static const u8 sCuriousMsg03[] = _("{STR_VAR_1} fait rouler un caillou\nen s'amusant.");
static const u8 sCuriousMsg04[] = _("{STR_VAR_1} se promène et\ncherche quelque chose.");
static const u8 sCuriousMsg05[] = _("{STR_VAR_1} te renifle.");
static const u8 sCuriousMsg06[] = _("{STR_VAR_1} semble être un peu\n hésitant…");

const struct FollowerMsgInfo gFollowerCuriousMessages[] = {
    {sCuriousMsg00, EventScript_FollowerLookAround},
    {sCuriousMsg01, EventScript_FollowerPokingPlayer},
    {sCuriousMsg02}, {sCuriousMsg03},
    {sCuriousMsg04, EventScript_FollowerLookAround},
    {sCuriousMsg05}, {sCuriousMsg06},
};

// Unconditional music messages
static const u8 sMusicMsg00[] = _("{STR_VAR_1} montre son\nagilité!");
static const u8 sMusicMsg01[] = _("{STR_VAR_1} se déplace\njoyeusement!");
static const u8 sMusicMsg02[] = _("Woah! {STR_VAR_1} soudainement commencé\nà danser dans le bonheur!");
static const u8 sMusicMsg03[] = _("{STR_VAR_1} vous suit régulièrement!");
static const u8 sMusicMsg04[] = _("{STR_VAR_1} semble vouloir jouer\navec vous.");
static const u8 sMusicMsg05[] = _("{STR_VAR_1} est heureux de sauter.");
static const u8 sMusicMsg06[] = _("{STR_VAR_1} chante et fredonne.");
static const u8 sMusicMsg07[] = _("{STR_VAR_1} te pince les pieds!");
static const u8 sMusicMsg08[] = _("{STR_VAR_1} se retourne et vous regarde.");
static const u8 sMusicMsg09[] = _("{STR_VAR_1} travaille dur pour montrer\nson immense pouvoir!");
static const u8 sMusicMsg10[] = _("Whoa! {STR_VAR_1} soudain dansé dans\nle bonheur!");
static const u8 sMusicMsg11[] = _("{STR_VAR_1} est joyeux!");
static const u8 sMusicMsg12[] = _("{STR_VAR_1} sautille d'une manière\ninsouciante!");
static const u8 sMusicMsg13[] = _("Votre POKéMON semble sentir\nune odeur nostalgique familière...");
// Conditional music messages, index 14
static const u8 sMusicMsg14[] = _("{STR_VAR_1} est très content de la\npluie.");

const struct FollowerMsgInfo gFollowerMusicMessages[] = {
    {sMusicMsg00, EventScript_FollowerLookAround},
    {sMusicMsg01},
    {sMusicMsg02, EventScript_FollowerDance},
    {sMusicMsg03},
    {sMusicMsg04, EventScript_FollowerHopping},
    {sMusicMsg05, EventScript_FollowerHopping},
    {sMusicMsg06}, {sMusicMsg07}, {sMusicMsg08}, {sMusicMsg09},
    {sMusicMsg10, EventScript_FollowerDance},
    {sMusicMsg11},
    {sMusicMsg12, EventScript_FollowerHopping},
    {sMusicMsg13, EventScript_FollowerNostalgia},
    {sMusicMsg14}
};


static const u8 sPoisonedMsg00[] = _("{STR_VAR_1} frissonne sous les\neffets d'un empoisonnement.");

const struct FollowerMsgInfo gFollowerPoisonedMessages[] = {
    {sPoisonedMsg00, EventScript_FollowerIsShivering},
};
