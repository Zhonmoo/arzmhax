// rpc

int RPC_ScrSetPlayerName = 11;
int RPC_ScrSetPlayerPos = 12;
int RPC_ScrSetPlayerPosFindZ = 13;
int RPC_ScrSetPlayerHealth = 14;
int RPC_ScrTogglePlayerControllable = 15;
int RPC_ScrPlaySound = 16;
int RPC_ScrSetPlayerWorldBounds = 17;
int RPC_ScrHaveSomeMoney = 18;
int RPC_ScrSetPlayerFacingAngle = 19;
int RPC_ScrResetMoney = 20;
int RPC_ScrResetPlayerWeapons = 21;
int RPC_ScrGivePlayerWeapon = 22;
int RPC_ClickPlayer = 23;
int RPC_ScrVehicleParamsEx = 24;
int RPC_ClientJoin = 25;
int RPC_EnterVehicle = 26;
int RPC_EnterEditObject = 27;
int RPC_SetTimeEx = 29;//255;
int RPC_ScrToggleClock = 30;
int RPC_WorldPlayerAdd = 32;
int RPC_ScrSetPlayerShopName = 33;
int RPC_ScrSetPlayerSkillLevel = 34;
int RPC_ScrSetPlayerDrunkLevel = 35;
int RPC_ScrCreate3DTextLabel = 36;
int RPC_DisableCheckpoint = 37;
int RPC_SetRaceCheckpoint = 38;
int RPC_DisableRaceCheckpoint = 39;
int RPC_GameModeRestart = 40;
int RPC_PlayAudioStreamForPlayer = 41;
int RPC_StopAudioStreamForPlayer = 42;
int RPC_ScrRemoveBuildingForPlayer = 43;
int RPC_ScrCreateObject = 44;
int RPC_ScrSetObjectPos = 45;
int RPC_ScrSetObjectRotation = 46;
int RPC_ScrDestroyObject = 47;
int RPC_ServerCommand = 50;
int RPC_Spawn = 52;
int RPC_Death = 53;
int RPC_NPCJoin = 54;
int RPC_ScrDeathMessage = 55;
int RPC_ScrSetMapIcon = 56;
int RPC_ScrRemoveComponent = 57;
int RPC_ScrUpdate3DTextLabel = 58;
int RPC_ScrChatBubble = 59;
int RPC_PlayerUpdate = 60;
int RPC_ScrDialogBox = 61;
int RPC_DialogResponse = 62;
int RPC_DestroyPickup = 63;
int RPC_ScrLinkVehicle = 65;
int RPC_ScrSetPlayerArmour = 66;
int RPC_SetArmedWeapon = 67;
int RPC_ScrSetSpawnInfo = 68;
int RPC_ScrSetPlayerTeam = 69;
int RPC_ScrPutPlayerInVehicle = 70;
int RPC_ScrRemovePlayerFromVehicle = 71;
int RPC_ScrSetPlayerColor = 72;
int RPC_ScrDisplayGameText = 73;
int RPC_ScrForceSpawnSelection = 74;
int RPC_ScrAttachObjectToPlayer = 75;
int RPC_ScrInitMenu = 76;
int RPC_ScrShowMenu = 77;
int RPC_ScrHideMenu = 78;
int RPC_ScrCreateExplosion = 79;
int RPC_ScrShowNameTag = 80;
int RPC_ScrAttachCameraToObject = 81;
int RPC_ScrInterpolateCamera = 82;
int RPC_ClickTextDraw = 83;
int RPC_ScrSetObjectMaterial = 84;
int RPC_ScrStopFlashGangZone = 85;
int RPC_ScrApplyPlayerAnimation = 86;
int RPC_ScrClearPlayerAnimations = 87;
int RPC_ScrSetSpecialAction = 88;
int RPC_ScrSetFightingStyle = 89;
int RPC_ScrSetPlayerVelocity = 90;
int RPC_ScrSetVehicleVelocity = 91;
int RPC_ClientMessage = 93;
int RPC_WorldTime = 94;
int RPC_Pickup = 95;
int RPC_ScmEvent = 96;
int RPC_DestroyWeaponPickup = 97;
int RPC_ScrMoveObject = 99;
int RPC_Chat = 101;
int RPC_SvrStats = 102;
int RPC_ClientCheck = 103;
int RPC_ScrEnableStuntBonusForPlayer = 104;
int RPC_ScrTextDrawSetString = 105;
int RPC_DamageVehicle = 106;
int RPC_SetCheckpoint = 107;
int RPC_ScrAddGangZone = 108;
int RPC_ScrPlayCrimeReportForPlayer = 112;
int RPC_ScrSetPlayerAttachedObject = 113;
int RPC_PlayerGiveTakeDamage = 115;
int RPC_EditObject = 117;
int RPC_SetInteriorId = 118;
int RPC_MapMarker = 119;
int RPC_ScrRemoveGangZone = 120;
int RPC_ScrFlashGangZone = 121;
int RPC_ScrStopObject = 122;
int RPC_ScrNumberPlate = 123;
int RPC_ScrTogglePlayerSpectating = 124;
int RPC_ScrPlayerSpectatePlayer = 126;
int RPC_ScrPlayerSpectateVehicle = 127;
int RPC_RequestClass = 128;
int RPC_RequestSpawn = 129;
int RPC_ConnectionRejected = 130;
int RPC_PickedUpPickup = 131;
int RPC_MenuSelect = 132;
int RPC_ScrSetPlayerWantedLevel = 133;
int RPC_ScrShowTextDraw = 134;
int RPC_ScrTextDrawHideForPlayer = 135;
int RPC_VehicleDestroyed = 136;
int RPC_ServerJoin = 137;
int RPC_ServerQuit = 138;
int RPC_InitGame = 139;
int RPC_MenuQuit = 140;
int RPC_ScrDisableMapIcon = 144;
int RPC_ScrSetPlayerAmmo = 145;
int RPC_ScrSetGravity = 146;
int RPC_ScrSetVehicleHealth = 147;
int RPC_ScrAttachTrailerToVehicle = 148;
int RPC_ScrDetachTrailerFromVehicle = 149;
int RPC_Weather = 152;
int RPC_ScrSetPlayerSkin = 153;
int RPC_ExitVehicle = 154;
int RPC_UpdateScoresPingsIPs = 155;
int RPC_ScrSetInterior = 156;
int RPC_ScrSetCameraPos = 157;
int RPC_ScrSetCameraLookAt = 158;
int RPC_ScrSetVehiclePos = 159;
int RPC_ScrSetVehicleZAngle = 160;
int RPC_ScrVehicleParams = 161;
int RPC_ScrSetCameraBehindPlayer = 162;
int RPC_WorldPlayerRemove = 163;
int RPC_WorldVehicleAdd = 164;
int RPC_WorldVehicleRemove = 165;
int RPC_WorldPlayerDeath = 166;
int RPC_CameraTarget = 168;
int RPC_SetTargeting = 170;
int RPC_ScrCreateActor = 171;
int RPC_ScrDestroyActor = 172;
int RPC_ScrApplyActorAnimation = 173;
int RPC_ScrClearActorAnimations = 174;
int RPC_ScrSetActorFacingAngle = 175;
int RPC_ScrSetActorPos = 176;
int RPC_ScrSetActorHealth = 178;
int RPC_ScrSetAdminLevel = 239;
int RPC_ScrSetPlayerSpectating = 255;

// unknown rpc
int RPC_Unknown1 = 1;
int RPC_Unknown2 = 2;
int RPC_Unknown3 = 3;
int RPC_Unknown4 = 4;
int RPC_Unknown5 = 5;
int RPC_Unknown6 = 6;
int RPC_Unknown7 = 7;
int RPC_Unknown8 = 8;
int RPC_Unknown9 = 9;
int RPC_Unknown10 = 10;
int RPC_Unknown11 = 28;
int RPC_Unknown12 = 31;
int RPC_Unknown13 = 48;
int RPC_Unknown14 = 49;
int RPC_Unknown15 = 51;
int RPC_Unknown16 = 64;
int RPC_Unknown18 = 92;
int RPC_Unknown19 = 98;
int RPC_Unknown20 = 100;
int RPC_Unknown21 = 109;
int RPC_Unknown22 = 110;
int RPC_Unknown23 = 111;
int RPC_Unknown24 = 114;
int RPC_Unknown25 = 116;
int RPC_Unknown26 = 125;
int RPC_Unknown27 = 141;
int RPC_Unknown28 = 142;
int RPC_Unknown29 = 143;
int RPC_Unknown30 = 150;
int RPC_Unknown31 = 151;
int RPC_Unknown32 = 167;
int RPC_Unknown33 = 169;
int RPC_Unknown35 = 177;
int RPC_Unknown36 = 179;
int RPC_Unknown37 = 180;
int RPC_Unknown38 = 181;
int RPC_Unknown39 = 182;
int RPC_Unknown40 = 183;
int RPC_Unknown41 = 184;
int RPC_Unknown42 = 185;
int RPC_Unknown43 = 186;
int RPC_Unknown44 = 187;
int RPC_Unknown45 = 188;
int RPC_Unknown46 = 189;
int RPC_Unknown47 = 190;
int RPC_Unknown48 = 191;
int RPC_Unknown49 = 192;
int RPC_Unknown50 = 193;
int RPC_Unknown51 = 194;
int RPC_Unknown52 = 195;
int RPC_Unknown53 = 196;
int RPC_Unknown54 = 197;
int RPC_Unknown55 = 198;
int RPC_Unknown56 = 199;
int RPC_Unknown57 = 200;
int RPC_Unknown58 = 201;
int RPC_Unknown59 = 202;
int RPC_Unknown60 = 203;
int RPC_Unknown61 = 204;
int RPC_Unknown62 = 205;
int RPC_Unknown63 = 206;
int RPC_Unknown64 = 207;
int RPC_Unknown65 = 208;
int RPC_Unknown66 = 209;
int RPC_Unknown67 = 210;
int RPC_Unknown68 = 211;
int RPC_Unknown69 = 212;
int RPC_Unknown70 = 213;
int RPC_Unknown71 = 214;
int RPC_Unknown72 = 215;
int RPC_Unknown73 = 216;
int RPC_Unknown74 = 217;
int RPC_Unknown75 = 218;
int RPC_Unknown76 = 219;
int RPC_Unknown77 = 220;
int RPC_Unknown78 = 221;
int RPC_Unknown79 = 222;
int RPC_Unknown80 = 223;
int RPC_Unknown81 = 224;
int RPC_Unknown82 = 225;
int RPC_Unknown83 = 226;
int RPC_Unknown84 = 227;
int RPC_Unknown85 = 228;
int RPC_Unknown86 = 229;
int RPC_Unknown87 = 230;
int RPC_Unknown88 = 231;
int RPC_Unknown89 = 232;
int RPC_Unknown90 = 233;
int RPC_Unknown91 = 234;
int RPC_Unknown92 = 235;
int RPC_Unknown93 = 236;
int RPC_Unknown94 = 237;
int RPC_Unknown95 = 238;
int RPC_Unknown97 = 240;
int RPC_Unknown98 = 241;
int RPC_Unknown99 = 242;
int RPC_Unknown100 = 243;
int RPC_Unknown101 = 244;
int RPC_Unknown102 = 245;
int RPC_Unknown103 = 246;
int RPC_Unknown104 = 247;
int RPC_Unknown105 = 248;
int RPC_Unknown106 = 249;
int RPC_Unknown107 = 250;
int RPC_Unknown108 = 251;
int RPC_Unknown109 = 252;
int RPC_Unknown110 = 253;
int RPC_Unknown111 = 254;
int RPC_Unknown112 = 255;