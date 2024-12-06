static const char norm_fg[] = "#c1c1c1";
static const char norm_bg[] = "#080807";
static const char norm_border[] = "#666654";

static const char sel_fg[] = "#c1c1c1";
static const char sel_bg[] = "#525252";
static const char sel_border[] = "#fab68c";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
};
