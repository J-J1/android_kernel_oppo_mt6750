#ifndef _CUST_BATTERY_METER_TABLE_H
#define _CUST_BATTERY_METER_TABLE_H

#include <mach/mt_typedefs.h>

/* ============================================================*/
/* define*/
/* ============================================================*/
#define BAT_NTC_10 1
#define BAT_NTC_47 0

#if (BAT_NTC_10 == 1)
#ifndef VENDOR_EDIT /* OPPO 2016-01-30 sjc Modify for charging */
#define RBAT_PULL_UP_R	16900
#else
#define RBAT_PULL_UP_R	16000
#endif //VENDOR_EDIT
#endif

#if (BAT_NTC_47 == 1)
#define RBAT_PULL_UP_R	61900
#endif

#define RBAT_PULL_UP_VOLT	1800



/* ============================================================*/
/* ENUM*/
/* ============================================================*/

/* ============================================================*/
/* structure*/
/* ============================================================*/

/* ============================================================*/
/* typedef*/
/* ============================================================*/
typedef struct _BATTERY_PROFILE_STRUCT
{
	kal_int32 percentage;
	kal_int32 voltage;
} BATTERY_PROFILE_STRUCT, *BATTERY_PROFILE_STRUCT_P;

typedef struct _R_PROFILE_STRUCT
{
	kal_int32 resistance; /* Ohm*/
	kal_int32 voltage;
} R_PROFILE_STRUCT, *R_PROFILE_STRUCT_P;

typedef enum
{
	T1_0C,
	T2_25C,
	T3_50C
} PROFILE_TEMPERATURE;

/* ============================================================*/
/* External Variables*/
/* ============================================================*/

/* ============================================================*/
/* External function*/
/* ============================================================*/

/* ============================================================*/
/* <DOD, Battery_Voltage> Table*/
/* ============================================================*/
#if (BAT_NTC_10 == 1)
    BATT_TEMPERATURE Batt_Temperature_Table[] = {
		{-20, 68237},
		{-15, 53650},
		{-10, 42506},
		{ -5, 33892},
		{  0, 27219},
		{  5, 22021},
		{ 10, 17926},
		{ 15, 14674},
		{ 20, 12081},
		{ 25, 10000},
		{ 30, 8315},
		{ 35, 6948},
		{ 40, 5834},
		{ 45, 4917},
		{ 50, 4161},
		{ 55, 3535},
		{ 60, 3014}
	};
#endif

#if (BAT_NTC_47 == 1)
    BATT_TEMPERATURE Batt_Temperature_Table[] = {
		{-20, 483954},
		{-15, 360850},
		{-10, 271697},
		{ -5, 206463},
		{  0, 158214},
		{  5, 122259},
		{ 10, 95227},
		{ 15, 74730},
		{ 20, 59065},
		{ 25, 47000},
		{ 30, 37643},
		{ 35, 30334},
		{ 40, 24591},
		{ 45, 20048},
		{ 50, 16433},
		{ 55, 13539},
		{ 60, 11210}
	};
#endif

/* T0 -10C*/
BATTERY_PROFILE_STRUCT battery_profile_t0[] = {
#ifdef VENDOR_EDIT /* OPPO 2016-01-30 sjc Modify for charging */
	 {0, 4344},//{0, 4240},
	 {3, 4309},//{3, 4206},
	 {7, 4278},//{6, 4172},
	 {10, 4249},//{9, 4138},
	 {14, 4221},//{12, 4104},
	 {17, 4190},//{15, 4078},
	 {20, 4149},//{18, 4053},
	 {24, 4087},//{21, 4023},
	 {27, 4045},//{24, 3999},
	 {31, 4012},//{27, 3978},
	 {34, 3980},//{30, 3962},
	 {38, 3955},//{33, 3945},
	 {41, 3936},//{36, 3925},
	 {44, 3923},//{39, 3908},
	 {48, 3907},//{42, 3891},
	 {51, 3894},//{45, 3876},
	 {55, 3879},//{48, 3862},
	 {58, 3864},//{51, 3851},
	 {61, 3849},//{54, 3840},
	 {65, 3831},//{57, 3831},
	 {68, 3812},//{60, 3824},
	 {72, 3794},//{63, 3815},
	 {75, 3775},//{66, 3809},
	 {78, 3757},//{69, 3804},
	 {82, 3741},//{72, 3799},
	 {85, 3729},//{75, 3793},
	 {89, 3712},//{78, 3790},
	 {92, 3677},//{81, 3787},
	 {96, 3599},//{83, 3784},
	 {98, 3513},//{85, 3781},
	 {99, 3464},//{86, 3779},
	 {99, 3430},//{87, 3776},
	 {100, 3409},//{89, 3774},
	 {100, 3391},//{89, 3772},
	 {100, 3377},//{90, 3771},
	 {100, 3366},//{91, 3768},
	 {100, 3357},//{92, 3767},
	 {100, 3350},//{92, 3767},
	 {100, 3344},//{93, 3764},
	 {100, 3339},//{93, 3762},
	 {100, 3336},//{94, 3763},
	 {100, 3332},//{94, 3760},
	 {100, 3328},//{95, 3759},
	 {100, 3325},//{95, 3759},
	 {100, 3321},//{95, 3758},
	 {100, 3318},//{96, 3757},
	 {100, 3314},//{96, 3756},
	 {100, 3312},//{96, 3755},
	 {100, 3307},//{96, 3753},
	 {100, 3305},//{97, 3753},
	 {100, 3304},//{97, 3751},
	 {100, 3301},//{97, 3750},
	 {100, 3298},//{97, 3749},
	 {100, 3295},//{97, 3749},
	 {100, 3293},//{97, 3748},
	 {100, 3291},//{98, 3747},
	 {100, 3288},//{98, 3745},
	 {100, 3286},//{98, 3746},
	 {100, 3284},//{98, 3744},
	 {100, 3283},//{98, 3745},
	 {100, 3282},//{98, 3743},
	 {100, 3280},//{98, 3742},
	 {100, 3279},//{99, 3742},
	 {100, 3278},//{99, 3740},
	 {100, 3276},//{99, 3740},
	 {100, 3275},//{99, 3739},
	 {100, 3272},//{99, 3740},
	 {100, 3270},//{99, 3739},
	 {100, 3270},//{99, 3739},
	//{339, 3168},
	//{339, 3162},
	//{339, 3157},
	//{339, 3151},
	//{339, 3143},
	//{339, 3133},
	//{339, 3125},
	//{339, 3125},
	//{339, 3125},
	//{339, 3125},
	//{339, 3125},
	//{339, 3125},
	//{339, 3125},
#endif //VENDOR_EDIT
};      
        
/* T1 0C */
BATTERY_PROFILE_STRUCT battery_profile_t1[] = {
#ifdef VENDOR_EDIT /* OPPO 2016-01-30 sjc Modify for charging */
	 {0, 4379},//{0, 4291},
	 {2, 4348},//{2, 4258},
	 {5, 4321},//{4, 4234},
	 {7, 4294},//{7, 4210},
	 {9, 4265},//{9, 4187},
	 {12, 4207},//{11, 4165},
	 {14, 4159},//{13, 4145},
	 {16, 4133},//{16, 4122},
	 {18, 4110},//{18, 4103},
	 {21, 4091},//{20, 4086},
	 {23, 4072},//{22, 4066},
	 {25, 4050},//{24, 4042},
	 {28, 4019},//{27, 4016},
	 {30, 3991},//{29, 3995},
	 {32, 3969},//{31, 3976},
	 {35, 3949},//{33, 3956},
	 {37, 3930},//{36, 3935},
	 {39, 3912},//{38, 3916},
	 {41, 3895},//{40, 3899},
	 {44, 3880},//{42, 3884},
	 {46, 3867},//{45, 3869},
	 {48, 3855},//{47, 3858},
	 {51, 3844},//{49, 3848},
	 {53, 3834},//{51, 3839},
	 {55, 3826},//{53, 3830},
	 {57, 3816},//{56, 3821},
	 {60, 3809},//{58, 3813},
	 {62, 3801},//{60, 3805},
	 {64, 3795},//{62, 3799},
	 {67, 3789},//{65, 3794},
	 {69, 3784},//{67, 3789},
	 {71, 3779},//{69, 3783},
	 {73, 3772},//{71, 3779},
	 {76, 3765},//{73, 3774},
	 {78, 3757},//{76, 3766},
	 {80, 3747},//{78, 3757},
	 {83, 3735},//{80, 3747},
	 {85, 3722},//{82, 3733},
	 {87, 3709},//{85, 3717},
	 {90, 3699},//{87, 3708},
	 {92, 3693},//{89, 3701},
	 {94, 3684},//{91, 3697},
	 {96, 3640},//{93, 3692},
	 {99, 3520},//{95, 3676},
	 {100, 3395},//{96, 3656},
	 {100, 3308},//{97, 3638},
	 {100, 3246},//{98, 3623},
	 {100, 3207},//{98, 3610},
	 {100, 3183},//{98, 3600},
	 {100, 3168},//{98, 3594},
	 {100, 3159},//{99, 3588},
	 {100, 3155},//{99, 3582},
	 {100, 3147},//{99, 3576},
	 {100, 3141},//{99, 3572},
	 {100, 3137},//{99, 3567},
	 {100, 3128},//{99, 3565},
	 {100, 3121},//{99, 3562},
	 {100, 3112},//{99, 3558},
	 {100, 3110},//{99, 3555},
	 {100, 3108},//{99, 3553},
	 {100, 3104},//{99, 3551},
	 {100, 3096},//{100, 3547},
	 {100, 3088},//{100, 3545},
	 {100, 3083},//{100, 3544},
	 {100, 3073},//{100, 3542},
	 {100, 3061},//{100, 3540},
	 {100, 3054},//{100, 3537},
	 {100, 3047},//{100, 3536},
	 {100, 3047},//{100, 3534},
	//{235, 3047},
	//{235, 3041},
	//{235, 3032},
	//{235, 3029},
	//{235, 3018},
	//{235, 3008},
	//{235, 3002},
	//{235, 3003},
	//{235, 2995},
	//{235, 2985},
	//{235, 2983},
	//{235, 2979},
	//{235, 2967},
#endif //VENDOR_EDIT
};

/* T2 25C*/
BATTERY_PROFILE_STRUCT battery_profile_t2[] = {
#ifdef VENDOR_EDIT /* OPPO 2016-01-30 sjc Modify for charging */
	{0, 4385},//{0, 4317},
	{2, 4359},//{2, 4292},
	{4, 4335},//{3, 4270},
	{6, 4312},//{5, 4250},
	{8, 4288},//{8, 4231},
	{10, 4265},//{10, 4213},
	{12, 4242},//{11, 4195},
	{14, 4219},//{13, 4176},
	{16, 4196},//{15, 4159},
	{18, 4174},//{16, 4143},
	{20, 4151},//{18, 4125},
	{22, 4129},//{20, 4110},
	{24, 4109},//{23, 4093},
	{26, 4088},//{24, 4077},
	{28, 4068},//{26, 4061},
	{30, 4052},//{28, 4047},
	{32, 4028},//{29, 4030},
	{34, 4006},//{31, 4014},
	{36, 3990},//{33, 4001},
	{38, 3974},//{35, 3988},
	{40, 3955},//{37, 3976},
	{42, 3932},//{39, 3962},
	{44, 3910},//{41, 3951},
	{46, 3891},//{42, 3935},
	{49, 3876},//{44, 3916},
	{51, 3863},//{46, 3897},
	{53, 3852},//{48, 3881},
	{55, 3842},//{49, 3869},
	{57, 3833},//{52, 3859},
	{59, 3824},//{54, 3849},
	{61, 3816},//{55, 3840},
	{63, 3809},//{57, 3835},
	{65, 3802},//{59, 3827},
	{67, 3796},//{61, 3820},
	{69, 3789},//{62, 3813},
	{71, 3782},//{65, 3807},
	{73, 3775},//{67, 3803},
	{75, 3768},//{68, 3797},
	{77, 3759},//{70, 3790},
	{79, 3750},//{72, 3786},
	{81, 3743},//{74, 3782},
	{83, 3735},//{75, 3777},
	{85, 3723},//{77, 3770},
	{87, 3713},//{80, 3763},
	{89, 3697},//{81, 3755},
	{91, 3692},//{83, 3745},
	{93, 3688},//{85, 3734},
	{95, 3683},//{87, 3717},
	{97, 3636},//{88, 3699},
	{99, 3523},//{90, 3692},
	{100, 3269},//{92, 3690},
	{100, 3147},//{94, 3689},
	{100, 3113},//{96, 3688},
	{100, 3098},//{98, 3676},
	{100, 3091},//{100, 3623},
	{100, 3083},//{101, 3548},
	{100, 3078},//{103, 3500},
	{100, 3070},//{105, 3482},
	{100, 3067},//{106, 3442},
	{100, 3061},//{109, 3323},
	{100, 3056},//{110, 3204},
	{100, 3052},//{110, 3162},
	{100, 3045},//{110, 3128},
	{100, 3037},//{111, 3098},
	{100, 3030},//{111, 3073},
	{100, 3023},//{111, 3053},
	{100, 3018},//{111, 3036},
	{100, 3007},//{111, 3023},
	{100, 3007},//{111, 3012},
	//{111, 2998},
	//{111, 2987},
	//{111, 2978},
	//{111, 2971},
	//{111, 2963},
	//{111, 2958},
	//{111, 2956},
	//{111, 2953},
	//{111, 2948},
	//{111, 2940},
	//{111, 2934},
	//{111, 2929},
	//{111, 2926},
#endif //VENDOR_EDIT
};

/* T3 50C*/
BATTERY_PROFILE_STRUCT battery_profile_t3[] = {
#ifdef VENDOR_EDIT /* OPPO 2016-01-30 sjc Modify for charging */
	 {0, 4392},//{0, 4338},
	 {2, 4364},//{2, 4315},
	 {4, 4340},//{4, 4292},
	 {6, 4317},//{6, 4270},
	 {8, 4293},//{8, 4247},
	 {10, 4270},//{10, 4225},
	 {12, 4246},//{12, 4202},
	 {14, 4223},//{15, 4180},
	 {16, 4200},//{17, 4158},
	 {18, 4178},//{19, 4138},
	 {20, 4155},//{21, 4116},
	 {22, 4133},//{23, 4096},
	 {24, 4112},//{25, 4076},
	 {26, 4091},//{27, 4058},
	 {28, 4071},//{29, 4038},
	 {30, 4051},//{31, 4020},
	 {32, 4031},//{33, 4001},
	 {34, 4013},//{35, 3985},
	 {36, 3995},//{37, 3968},
	 {38, 3979},//{39, 3951},
	 {40, 3962},//{41, 3928},
	 {42, 3943},//{44, 3904},
	 {44, 3920},//{46, 3887},
	 {46, 3897},//{48, 3872},
	 {48, 3880},//{50, 3862},
	 {50, 3866},//{52, 3851},
	 {52, 3855},//{54, 3840},
	 {54, 3845},//{56, 3831},
	 {56, 3834},//{58, 3822},
	 {58, 3826},//{60, 3814},
	 {60, 3818},//{62, 3805},
	 {62, 3809},//{64, 3798},
	 {64, 3803},//{66, 3791},
	 {66, 3795},//{68, 3784},
	 {68, 3789},//{70, 3772},
	 {70, 3782},//{73, 3760},
	 {72, 3771},//{75, 3753},
	 {74, 3757},//{77, 3742},
	 {76, 3747},//{79, 3734},
	 {78, 3737},//{81, 3726},
	 {80, 3730},//{83, 3711},
	 {82, 3721},//{85, 3694},
	 {84, 3711},//{87, 3679},
	 {86, 3699},//{89, 3675},
	 {88, 3687},//{91, 3673},
	 {90, 3677},//{93, 3669},
	 {92, 3675},//{95, 3652},
	 {94, 3672},//{97, 3576},
	 {96, 3646},//{100, 3453},
	 {98, 3557},//{100, 3283},
	 {100, 3395},//{100, 3260},
	 {100, 3127},//{100, 3247},
	 {100, 3056},//{100, 3244},
	 {100, 3001},//{100, 3243},
	 {100, 2970},//{100, 3242},
	 {100, 2950},//{100, 3241},
	 {100, 3944},//{100, 3240},
	 {100, 2933},//{100, 3237},
	 {100, 2925},//{100, 3235},
	 {100, 2916},//{100, 3235},
	 {100, 2915},//{100, 3234},
	 {100, 2912},//{100, 3232},
	 {100, 2906},//{100, 3230},
	 {100, 2899},//{100, 3230},
	 {100, 2899},//{100, 3227},
	 {100, 2889},//{100, 3225},
	 {100, 2887},//{100, 3224},
	 {100, 2885},//{100, 3222},
	 {100, 2885},//{100, 3222},
	//{110, 2913},
	//{110, 2903},
	//{110, 2899},
	//{110, 2889},
	//{110, 2889},
	//{110, 2889},
	//{110, 2889},
	//{110, 2889},
	//{110, 2889},
	//{110, 2889},
	//{110, 2889},
	//{110, 2889},
	//{110, 2889},
#endif //VENDOR_EDIT
};

/* battery profile for actual temperature. The size should be the same as T1, T2 and T3*/
BATTERY_PROFILE_STRUCT battery_profile_temperature[] = {
#ifdef VENDOR_EDIT /* OPPO 2016-01-30 sjc Modify for charging */
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	//{0, 0},
	//{0, 0},
	//{0, 0},
	//{0, 0},
	//{0, 0},
	//{0, 0},
	//{0, 0},
	//{0, 0},
	//{0, 0},
	//{0, 0},
	//{0, 0},
	//{0, 0},
	//{0, 0}
#endif //VENDOR_EDIT
};

/* ============================================================*/
/* <Rbat, Battery_Voltage> Table*/
/* ============================================================*/
/* T0 -10C*/
R_PROFILE_STRUCT r_profile_t0[] = {
#ifdef VENDOR_EDIT /* OPPO 2016-01-30 sjc Modify for charging */
	 {1220, 4344},//{953, 4240},
	 {1220, 4309},//{953, 4206},
	 {1225, 4278},//{970, 4172},
	 {1210, 4249},//{998, 4138},
	 {1203, 4221},//{1060, 4104},
	 {1195, 4190},//{1143, 4078},
	 {1215, 4149},//{1175, 4053},
	 {1408, 4087},//{1185, 4023},
	 {1605, 4045},//{1195, 3999},
	 {1663, 4012},//{1198, 3978},
	 {1655, 3980},//{1208, 3962},
	 {1653, 3955},//{1220, 3945},
	 {1648, 3936},//{1220, 3925},
	 {1660, 3923},//{1220, 3908},
	 {1653, 3907},//{1230, 3891},
	 {1658, 3894},//{1235, 3876},
	 {1655, 3879},//{1245, 3862},
	 {1653, 3864},//{1255, 3851},
	 {1650, 3849},//{1263, 3840},
	 {1645, 3831},//{1280, 3831},
	 {1640, 3812},//{1298, 3824},
	 {1648, 3794},//{1310, 3815},
	 {1645, 3775},//{1330, 3809},
	 {1650, 3757},//{1348, 3804},
	 {1660, 3741},//{1373, 3799},
	 {1693, 3729},//{1395, 3793},
	 {1725, 3712},//{1430, 3790},
	 {1773, 3677},//{1470, 3787},
	 {1820, 3599},//{1463, 3784},
	 {1785, 3513},//{1453, 3781},
	 {1660, 3464},//{1450, 3779},
	 {1580, 3430},//{1440, 3776},
	 {1525, 3409},//{1438, 3774},
	 {1478, 3391},//{1433, 3772},
	 {1448, 3377},//{1430, 3771},
	 {1420, 3366},//{1423, 3768},
	 {1400, 3357},//{1418, 3767},
	 {1378, 3350},//{1423, 3767},
	 {1368, 3344},//{1413, 3764},
	 {1360, 3339},//{1405, 3762},
	 {1343, 3336},//{1410, 3763},
	 {1338, 3332},//{1400, 3760},
	 {1340, 3328},//{1398, 3759},
	 {1330, 3325},//{1400, 3759},
	 {1305, 3321},//{1395, 3758},
	 {1313, 3318},//{1395, 3757},
	 {1305, 3314},//{1393, 3756},
	 {1313, 3312},//{1390, 3755},
	 {1305, 3307},//{1383, 3753},
	 {1288, 3305},//{1385, 3753},
	 {1278, 3304},//{1378, 3751},
	 {1283, 3301},//{1378, 3750},
	 {1288, 3298},//{1375, 3749},
	 {1280, 3295},//{1375, 3749},
	 {1283, 3293},//{1373, 3748},
	 {1283, 3291},//{1373, 3747},
	 {1258, 3288},//{1365, 3745},
	 {1233, 3286},//{1368, 3746},
	 {1235, 3284},//{1363, 3744},
	 {1220, 3283},//{1365, 3745},
	 {1240, 3282},//{1360, 3743},
	 {1223, 3280},//{1363, 3742},
	 {1220, 3279},//{1358, 3742},
	 {1223, 3278},//{1353, 3740},
	 {1225, 3276},//{1350, 3740},
	 {1230, 3275},//{1353, 3739},
	 {1250, 3272},//{1360, 3740},
	 {1255, 3270},//{1358, 3739},
	 {1238, 3270},//{1348, 3739},
	//{960, 3168},
	//{940, 3162},
	//{895, 3157},
	//{890, 3151},
	//{863, 3143},
	//{925, 3133},
	//{893, 3125},
	//{893, 3125},
	//{893, 3125},
	//{893, 3125},
	//{893, 3125},
	//{893, 3125},
	//{893, 3125}
#endif //VENDOR_EDIT
};

/* T1 0C*/
R_PROFILE_STRUCT r_profile_t1[] = {
#ifdef VENDOR_EDIT /* OPPO 2016-01-30 sjc Modify for charging */
	 {593, 4379},//{425, 4291},
	 {593, 4348},//{425, 4258},
	 {610, 4321},//{440, 4234},
	 {613, 4294},//{448, 4210},
	 {615, 4265},//{450, 4187},
	 {625, 4207},//{463, 4165},
	 {818, 4159},//{478, 4145},
	 {865, 4133},//{480, 4122},
	 {870, 4110},//{488, 4103},
	 {875, 4091},//{500, 4086},
	 {885, 4072},//{518, 4066},
	 {890, 4050},//{530, 4042},
	 {873, 4019},//{528, 4016},
	 {863, 3991},//{538, 3995},
	 {858, 3969},//{548, 3976},
	 {858, 3949},//{543, 3956},
	 {850, 3930},//{535, 3935},
	 {843, 3912},//{540, 3916},
	 {838, 3895},//{535, 3899},
	 {838, 3880},//{538, 3884},
	 {840, 3867},//{543, 3869},
	 {843, 3855},//{550, 3858},
	 {848, 3844},//{563, 3848},
	 {850, 3834},//{583, 3839},
	 {860, 3826},//{593, 3830},
	 {868, 3816},//{598, 3821},
	 {875, 3809},//{613, 3813},
	 {880, 3801},//{630, 3805},
	 {885, 3795},//{643, 3799},
	 {895, 3789},//{658, 3794},
	 {905, 3784},//{678, 3789},
	 {920, 3779},//{703, 3783},
	 {935, 3772},//{733, 3779},
	 {955, 3765},//{758, 3774},
	 {978, 3757},//{783, 3766},
	 {1015, 3747},//{818, 3757},
	 {1048, 3735},//{850, 3747},
	 {1085, 3722},//{868, 3733},
	 {1135, 3709},//{893, 3717},
	 {1188, 3699},//{933, 3708},
	 {1260, 3693},//{963, 3701},
	 {1355, 3684},//{1030, 3697},
	 {1440, 3640},//{1120, 3692},
	 {1515, 3520},//{1190, 3676},
	 {1490, 3395},//{1143, 3656},
	 {1275, 3308},//{1098, 3638},
	 {1115, 3246},//{1058, 3623},
	 {1025, 3207},//{1028, 3610},
	 {960, 3183},//{1003, 3600},
	 {930, 3168},//{988, 3594},
	 {923, 3159},//{973, 3588},
	 {895, 3155},//{955, 3582},
	 {888, 3147},//{945, 3576},
	 {870, 3141},//{933, 3572},
	 {850, 3137},//{920, 3567},
	 {873, 3128},//{915, 3565},
	 {865, 3121},//{905, 3562},
	 {863, 3112},//{898, 3558},
	 {820, 3110},//{893, 3555},
	 {808, 3108},//{883, 3553},
	 {808, 3104},//{880, 3551},
	 {820, 3096},//{875, 3547},
	 {828, 3088},//{868, 3545},
	 {833, 3083},//{865, 3544},
	 {850, 3073},//{863, 3542},
	 {870, 3061},//{855, 3540},
	 {883, 3054},//{843, 3537},
	 {898, 3047},//{850, 3536},
	 {678, 3047},//{848, 3534},
	//{685, 3047},
	//{650, 3041},
	//{683, 3032},
	//{615, 3029},
	//{643, 3018},
	//{660, 3008},
	//{635, 3002},
	//{530, 3003},
	//{640, 2995},
	//{595, 2985},
	//{535, 2983},
	//{463, 2979},
	//{600, 2967}
#endif //VENDOR_EDIT
};

/* T2 25C*/
R_PROFILE_STRUCT r_profile_t2[] = {
#ifdef VENDOR_EDIT /* OPPO 2016-01-30 sjc Modify for charging */
	{205, 4385},//{173, 4317},
	{205, 4359},//{173, 4292},
	{205, 4335},//{175, 4270},
	{208, 4312},//{170, 4250},
	{205, 4288},//{173, 4231},
	{208, 4265},//{173, 4213},
	{208, 4242},//{178, 4195},
	{208, 4219},//{173, 4176},
	{205, 4196},//{183, 4159},
	{208, 4174},//{193, 4143},
	{208, 4151},//{193, 4125},
	{205, 4129},//{203, 4110},
	{213, 4109},//{205, 4093},
	{215, 4088},//{208, 4077},
	{220, 4068},//{205, 4061},
	{230, 4052},//{213, 4047},
	{230, 4028},//{215, 4030},
	{230, 4006},//{223, 4014},
	{238, 3990},//{230, 4001},
	{238, 3974},//{233, 3988},
	{233, 3955},//{240, 3976},
	{215, 3932},//{243, 3962},
	{203, 3910},//{248, 3951},
	{193, 3891},//{243, 3935},
	{188, 3876},//{223, 3916},
	{185, 3863},//{203, 3897},
	{185, 3852},//{195, 3881},
	{188, 3842},//{188, 3869},
	{188, 3833},//{188, 3859},
	{190, 3824},//{185, 3849},
	{193, 3816},//{183, 3840},
	{195, 3809},//{195, 3835},
	{198, 3802},//{198, 3827},
	{198, 3796},//{195, 3820},
	{200, 3789},//{198, 3813},
	{200, 3782},//{200, 3807},
	{195, 3775},//{208, 3803},
	{195, 3768},//{205, 3797},
	{190, 3759},//{205, 3790},
	{188, 3750},//{205, 3786},
	{188, 3743},//{210, 3782},
	{193, 3735},//{213, 3777},
	{193, 3723},//{208, 3770},
	{198, 3713},//{203, 3763},
	{198, 3697},//{198, 3755},
	{205, 3692},//{195, 3745},
	{210, 3688},//{198, 3734},
	{233, 3683},//{193, 3717},
	{238, 3636},//{193, 3699},
	{273, 3523},//{193, 3692},
	{415, 3269},//{195, 3690},
	{888, 3147},//{205, 3689},
	{853, 3113},//{220, 3688},
	{805, 3098},//{238, 3676},
	{740, 3091},//{238, 3623},
	{773, 3083},//{255, 3548},
	{695, 3078},//{293, 3500},
	{758, 3070},//{330, 3482},
	{740, 3067},//{390, 3442},
	{765, 3061},//{485, 3323},
	{713, 3056},//{1018, 3204},
	{715, 3052},//{925, 3162},
	{703, 3045},//{838, 3128},
	{680, 3037},//{748, 3098},
	{643, 3030},//{720, 3073},
	{633, 3023},//{668, 3053},
	{568, 3018},//{608, 3036},
	{553, 3007},//{560, 3023},
	{570, 3007},//{550, 3012},
	//{558, 2998},
	//{538, 2987},
	//{515, 2978},
	//{485, 2971},
	//{458, 2963},
	//{455, 2958},
	//{403, 2956},
	//{398, 2953},
	//{373, 2948},
	//{373, 2940},
	//{408, 2934},
	//{420, 2929},
	//{335, 2926}
#endif //VENDOR_EDIT
};

/* T3 50C*/
R_PROFILE_STRUCT r_profile_t3[] = {
#ifdef VENDOR_EDIT /* OPPO 2016-01-30 sjc Modify for charging */
	 {113, 4392},//{105, 4338},
	 {113, 4364},//{105, 4315},
	 {113, 4340},//{108, 4292},
	 {115, 4317},//{110, 4270},
	 {113, 4293},//{110, 4247},
	 {113, 4270},//{113, 4225},
	 {113, 4246},//{110, 4202},
	 {113, 4223},//{113, 4180},
	 {115, 4200},//{113, 4158},
	 {115, 4178},//{118, 4138},
	 {115, 4155},//{115, 4116},
	 {115, 4133},//{118, 4096},
	 {118, 4112},//{123, 4076},
	 {120, 4091},//{128, 4058},
	 {123, 4071},//{125, 4038},
	 {125, 4051},//{133, 4020},
	 {123, 4031},//{133, 4001},
	 {128, 4013},//{138, 3985},
	 {130, 3995},//{140, 3968},
	 {138, 3979},//{145, 3951},
	 {143, 3962},//{135, 3928},
	 {143, 3943},//{120, 3904},
	 {130, 3920},//{113, 3887},
	 {118, 3897},//{108, 3872},
	 {113, 3880},//{115, 3862},
	 {108, 3866},//{118, 3851},
	 {113, 3855},//{120, 3840},
	 {113, 3845},//{123, 3831},
	 {113, 3834},//{120, 3822},
	 {118, 3826},//{128, 3814},
	 {120, 3818},//{123, 3805},
	 {118, 3809},//{128, 3798},
	 {125, 3803},//{130, 3791},
	 {123, 3795},//{135, 3784},
	 {125, 3789},//{125, 3772},
	 {128, 3782},//{118, 3760},
	 {123, 3771},//{125, 3753},
	 {115, 3757},//{120, 3742},
	 {115, 3747},//{120, 3734},
	 {113, 3737},//{125, 3726},
	 {118, 3730},//{120, 3711},
	 {115, 3721},//{120, 3694},
	 {115, 3711},//{120, 3679},
	 {113, 3699},//{118, 3675},
	 {113, 3687},//{125, 3673},
	 {113, 3677},//{130, 3669},
	 {118, 3675},//{135, 3652},
	 {128, 3672},//{150, 3576},
	 {120, 3646},//{175, 3453},
	 {133, 3557},//{213, 3283},
	 {168, 3395},//{150, 3260},
	 {843, 3127},//{123, 3247},
	 {653, 3056},//{113, 3244},
	 {563, 3001},//{110, 3243},
	 {473, 2970},//{108, 3242},
	 {430, 2950},//{108, 3241},
	 {368, 2944},//{108, 3240},
	 {370, 2933},//{100, 3237},
	 {348, 2925},//{100, 3235},
	 {353, 2916},//{105, 3235},
	 {308, 2915},//{103, 3234},
	 {308, 2912},//{105, 3232},
	 {280, 2906},//{100, 3230},
	 {285, 2899},//{108, 3230},
	 {283, 2899},//{103, 3227},
	 {285, 2889},//{103, 3225},
	 {293, 2887},//{103, 3224},
	 {250, 2885},//{103, 3222},
	 {258, 2885},//{103, 3222},
	//{303, 2913},
	//{308, 2903},
	//{255, 2899},
	//{273, 2889},
	//{273, 2889},
	//{273, 2889},
	//{273, 2889},
	//{273, 2889},
	//{273, 2889},
	//{273, 2889},
	//{273, 2889},
	//{273, 2889},
	//{273, 2889}
#endif //VENDOR_EDIT
};

/* r-table profile for actual temperature. The size should be the same as T1, T2 and T3*/
R_PROFILE_STRUCT r_profile_temperature[] = {
#ifdef VENDOR_EDIT /* OPPO 2016-01-30 sjc Modify for charging */
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	//{0, 0},
	//{0, 0},
	//{0, 0},
	//{0, 0},
	//{0, 0},
	//{0, 0},
	//{0, 0},
	//{0, 0},
	//{0, 0},
	//{0, 0},
	//{0, 0},
	//{0, 0},
	//{0, 0}
#endif //VENDOR_EDIT
};

/* ============================================================*/
/* function prototype*/
/* ============================================================*/
int fgauge_get_saddles(void);
BATTERY_PROFILE_STRUCT_P fgauge_get_profile(kal_uint32 temperature);

int fgauge_get_saddles_r_table(void);
R_PROFILE_STRUCT_P fgauge_get_profile_r_table(kal_uint32 temperature);

#endif
