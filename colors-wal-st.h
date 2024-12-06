const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#080807", /* black   */
  [1] = "#222325", /* red     */
  [2] = "#525252", /* green   */
  [3] = "#5E5F60", /* yellow  */
  [4] = "#707171", /* blue    */
  [5] = "#7E807F", /* magenta */
  [6] = "#7F7F81", /* cyan    */
  [7] = "#c1c1c1", /* white   */

  /* 8 bright colors */
  [8]  = "#666654",  /* black   */
  [9]  = "#222325",  /* red     */
  [10] = "#525252", /* green   */
  [11] = "#5E5F60", /* yellow  */
  [12] = "#707171", /* blue    */
  [13] = "#7E807F", /* magenta */
  [14] = "#7F7F81", /* cyan    */
  [15] = "#c1c1c1", /* white   */

  /* special colors */
  [256] = "#000000", /* background */
  [257] = "#ffcdad", /* foreground */
  [258] = "#c1c1c1",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
