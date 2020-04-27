#define HIDDEN_DIMS1 8

static float mean1[INPUT_DIMS * PATCH_DIM * PATCH_DIM] = {0.0};
static float stdDev1[INPUT_DIMS * PATCH_DIM * PATCH_DIM] = {1.0};

static float W1[INPUT_DIMS * HIDDEN_DIMS1] = { -6.669194251298904419e-02,4.241880401968955994e-02,1.779496856033802032e-02,2.434188500046730042e-02,2.040588408708572388e-01,-6.289862841367721558e-02,8.665277808904647827e-02,-4.211997613310813904e-02,-4.081934988498687744e-01,3.874431252479553223e-01,-9.131602197885513306e-02,-4.231898188591003418e-01,1.137487962841987610e-01,-7.153615355491638184e-02,1.098951250314712524e-01,-5.568345189094543457e-01,-9.548854231834411621e-01,6.743898242712020874e-02,1.308344118297100067e-02,-5.101327300071716309e-01,-2.034226208925247192e-01,-3.552019000053405762e-01,3.574696481227874756e-01,-1.339200735092163086e-01,-1.199822783470153809e+00,4.235469996929168701e-01,-2.176112309098243713e-02,-5.763933062553405762e-01,-4.363142326474189758e-02,-3.619972467422485352e-01,4.203165769577026367e-01,-1.205071806907653809e+00,3.212589919567108154e-01,7.616437077522277832e-01,7.672815918922424316e-01,2.576289772987365723e-01,1.962029747664928436e-02,6.437804698944091797e-01,1.115008115768432617e+00,8.542865514755249023e-02,-8.398564457893371582e-01,-3.183248341083526611e-01,-3.293828964233398438e-01,-1.621776819229125977e-01,5.834429860115051270e-01,3.947886824607849121e-01,-6.720532774925231934e-01,3.155398648232221603e-03,1.377462625503540039e+00,-6.704510450363159180e-01,8.417400717735290527e-02,6.603993773460388184e-01,-1.158756241202354431e-01,4.007513821125030518e-01,-4.624451696872711182e-01,1.793413400650024414e+00,1.293107271194458008e-01,3.916886448860168457e-01,-4.810366034507751465e-01,-2.212110720574855804e-02,-6.547657251358032227e-01,3.415162265300750732e-01,-3.584066927433013916e-01,3.155157715082168579e-02 };
static float U1[HIDDEN_DIMS1 * HIDDEN_DIMS1] = { 4.257509708404541016e-01,-2.243996411561965942e-01,4.599139690399169922e-01,-3.530698418617248535e-01,2.927841432392597198e-02,1.921992599964141846e-01,7.122249808162450790e-03,2.478006668388843536e-02,2.090227305889129639e-01,6.178687140345573425e-02,-8.031798005104064941e-01,-9.047465324401855469e-01,1.150295138359069824e-01,-1.216369643807411194e-01,8.977604657411575317e-02,-3.528899326920509338e-02,-9.029741585254669189e-02,1.964072138071060181e-02,-2.055168338119983673e-02,5.608395114541053772e-02,-1.545069087296724319e-02,-3.085457533597946167e-02,7.987973280251026154e-03,-8.097411133348941803e-03,-1.581576466560363770e-01,-7.558400928974151611e-02,-1.338823318481445312e+00,1.076061371713876724e-02,7.246796786785125732e-02,-6.944761611521244049e-03,-8.065721951425075531e-03,-2.095492556691169739e-02,-2.624719589948654175e-02,-3.073738422244787216e-03,1.721778139472007751e-02,-3.143182024359703064e-03,1.096169114112854004e+00,-4.858187958598136902e-02,-8.912781253457069397e-03,-3.243596106767654419e-02,-1.679758429527282715e-01,-7.507130037993192673e-03,-1.409216374158859253e-01,1.100406423211097717e-01,-1.400157362222671509e-01,1.513722836971282959e-01,-1.210445910692214966e-02,-8.220742642879486084e-02,1.883537024259567261e-01,5.114595890045166016e-01,1.616048932075500488e+00,1.620839357376098633e+00,-1.330980509519577026e-01,9.179102256894111633e-03,7.160065323114395142e-02,2.354629104956984520e-03,8.153508603572845459e-02,9.405165910720825195e-03,1.780232340097427368e-01,-5.950598046183586121e-02,-5.966191366314888000e-02,1.019131317734718323e-01,2.581899240612983704e-02,1.182158961892127991e-01 };
static float Bg1[HIDDEN_DIMS1] = { -1.213001132011413574e+00,-3.357241451740264893e-01,-1.219372987747192383e+00,-2.052456587553024292e-01,-7.755046486854553223e-01,-7.103578448295593262e-01,-8.887031674385070801e-01,-5.140971541404724121e-01};
static float Bh1[HIDDEN_DIMS1] = { -2.761822193861007690e-02,3.516794741153717041e-01,7.828953266143798828e-01,7.023379206657409668e-01,5.146764516830444336e-01,7.880625128746032715e-01,1.113372668623924255e-01,6.815895438194274902e-02 };

static float zeta1 = 9.999979734420776367e-01;
static float nu1 = 1.968302512977970764e-06;
