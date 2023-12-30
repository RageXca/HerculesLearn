/**
 * This file is part of Hercules.
 * http://herc.ws - http://github.com/HerculesWS/Hercules
 *
 * Copyright (C) 2012-2023 Hercules Dev Team
 * Copyright (C) Athena Dev Teams
 *
 * Hercules is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

// JOB_ENUM_VALUE(JOB_CONSTANT, JOB_ID, MSGTBL_CONSTANT)
// - JOB_CONSTANT - The name of the constant representing this job ID. This will generate JOB_ and MAPID_ constants
//                  (e.g. NOVICE --> generates JOB_NOVICE and MAPID_NOVICE)
// - JOB_ID - Official numerical ID value of the job, as expected by the client
// - MSGTBL_CONSTANT - Constant for the Job name in messages.conf, should be a msgtable.h enum value WITHOUT MSGTBL_ prefix.
//                  (e.g. JOB_NOVICE --> becomes MSGTBL_JOB_NOVICE)

JOB_ENUM_VALUE(NOVICE, 0, JOB_NOVICE)
JOB_ENUM_VALUE(SWORDMAN, 1, JOB_SWORDMAN)
JOB_ENUM_VALUE(MAGE, 2, JOB_MAGE)
JOB_ENUM_VALUE(ARCHER, 3, JOB_ARCHER)
JOB_ENUM_VALUE(ACOLYTE, 4, JOB_ACOLYTE)
JOB_ENUM_VALUE(MERCHANT, 5, JOB_MERCHANT)
JOB_ENUM_VALUE(THIEF, 6, JOB_THIEF)
JOB_ENUM_VALUE(KNIGHT, 7, JOB_KNIGHT)
JOB_ENUM_VALUE(PRIEST, 8, JOB_PRIEST)
JOB_ENUM_VALUE(WIZARD, 9, JOB_WIZARD)
JOB_ENUM_VALUE(BLACKSMITH, 10, JOB_BLACKSMITH)
JOB_ENUM_VALUE(HUNTER, 11, JOB_HUNTER)
JOB_ENUM_VALUE(ASSASSIN, 12, JOB_ASSASSIN)
JOB_ENUM_VALUE(CRUSADER, 14, JOB_CRUSADER)
JOB_ENUM_VALUE(MONK, 15, JOB_MONK)
JOB_ENUM_VALUE(SAGE, 16, JOB_SAGE)
JOB_ENUM_VALUE(ROGUE, 17, JOB_ROGUE)
JOB_ENUM_VALUE(ALCHEMIST, 18, JOB_ALCHEMIST)
JOB_ENUM_VALUE(WEDDING, 22, JOB_WEDDING)
JOB_ENUM_VALUE(SUPER_NOVICE, 23, JOB_SUPER_NOVICE)
JOB_ENUM_VALUE(GUNSLINGER, 24, JOB_GUNSLINGER)
JOB_ENUM_VALUE(NINJA, 25, JOB_NINJA)
JOB_ENUM_VALUE(XMAS, 26, JOB_XMAS)
JOB_ENUM_VALUE(SUMMER, 27, JOB_SUMMER)
JOB_ENUM_VALUE(NOVICE_HIGH, 4001, JOB_NOVICE_HIGH)
JOB_ENUM_VALUE(SWORDMAN_HIGH, 4002, JOB_SWORDMAN_HIGH)
JOB_ENUM_VALUE(MAGE_HIGH, 4003, JOB_MAGE_HIGH)
JOB_ENUM_VALUE(ARCHER_HIGH, 4004, JOB_ARCHER_HIGH)
JOB_ENUM_VALUE(ACOLYTE_HIGH, 4005, JOB_ACOLYTE_HIGH)
JOB_ENUM_VALUE(MERCHANT_HIGH, 4006, JOB_MERCHANT_HIGH)
JOB_ENUM_VALUE(THIEF_HIGH, 4007, JOB_THIEF_HIGH)
JOB_ENUM_VALUE(LORD_KNIGHT, 4008, JOB_LORD_KNIGHT)
JOB_ENUM_VALUE(HIGH_PRIEST, 4009, JOB_HIGH_PRIEST)
JOB_ENUM_VALUE(HIGH_WIZARD, 4010, JOB_HIGH_WIZARD)
JOB_ENUM_VALUE(WHITESMITH, 4011, JOB_WHITESMITH)
JOB_ENUM_VALUE(SNIPER, 4012, JOB_SNIPER)
JOB_ENUM_VALUE(ASSASSIN_CROSS, 4013, JOB_ASSASSIN_CROSS)
JOB_ENUM_VALUE(PALADIN, 4015, JOB_PALADIN)
JOB_ENUM_VALUE(CHAMPION, 4016, JOB_CHAMPION)
JOB_ENUM_VALUE(PROFESSOR, 4017, JOB_PROFESSOR)
JOB_ENUM_VALUE(STALKER, 4018, JOB_STALKER)
JOB_ENUM_VALUE(CREATOR, 4019, JOB_CREATOR)
JOB_ENUM_VALUE(BABY, 4023, JOB_BABY)
JOB_ENUM_VALUE(BABY_SWORDMAN, 4024, JOB_BABY_SWORDMAN)
JOB_ENUM_VALUE(BABY_MAGE, 4025, JOB_BABY_MAGE)
JOB_ENUM_VALUE(BABY_ARCHER, 4026, JOB_BABY_ARCHER)
JOB_ENUM_VALUE(BABY_ACOLYTE, 4027, JOB_BABY_ACOLYTE)
JOB_ENUM_VALUE(BABY_MERCHANT, 4028, JOB_BABY_MERCHANT)
JOB_ENUM_VALUE(BABY_THIEF, 4029, JOB_BABY_THIEF)
JOB_ENUM_VALUE(BABY_KNIGHT, 4030, JOB_BABY_KNIGHT)
JOB_ENUM_VALUE(BABY_PRIEST, 4031, JOB_BABY_PRIEST)
JOB_ENUM_VALUE(BABY_WIZARD, 4032, JOB_BABY_WIZARD)
JOB_ENUM_VALUE(BABY_BLACKSMITH, 4033, JOB_BABY_BLACKSMITH)
JOB_ENUM_VALUE(BABY_HUNTER, 4034, JOB_BABY_HUNTER)
JOB_ENUM_VALUE(BABY_ASSASSIN, 4035, JOB_BABY_ASSASSIN)
JOB_ENUM_VALUE(BABY_CRUSADER, 4037, JOB_BABY_CRUSADER)
JOB_ENUM_VALUE(BABY_MONK, 4038, JOB_BABY_MONK)
JOB_ENUM_VALUE(BABY_SAGE, 4039, JOB_BABY_SAGE)
JOB_ENUM_VALUE(BABY_ROGUE, 4040, JOB_BABY_ROGUE)
JOB_ENUM_VALUE(BABY_ALCHEMIST, 4041, JOB_BABY_ALCHEMIST)
JOB_ENUM_VALUE(SUPER_BABY, 4045, JOB_SUPER_BABY)
JOB_ENUM_VALUE(TAEKWON, 4046, JOB_TAEKWON)
JOB_ENUM_VALUE(STAR_GLADIATOR, 4047, JOB_STAR_GLADIATOR)
JOB_ENUM_VALUE(SOUL_LINKER, 4049, JOB_SOUL_LINKER)
JOB_ENUM_VALUE(GANGSI, 4050, JOB_GANGSI)
JOB_ENUM_VALUE(DEATH_KNIGHT, 4051, JOB_DEATH_KNIGHT)
JOB_ENUM_VALUE(DARK_COLLECTOR, 4052, JOB_DARK_COLLECTOR)
//JOB_ENUM_VALUE(THIRDJOB_BEGIN, 4053, UNKNOWN_JOB)
JOB_ENUM_VALUE(RUNE_KNIGHT, 4054, JOB_RUNE_KNIGHT)
JOB_ENUM_VALUE(WARLOCK, 4055, JOB_WARLOCK)
JOB_ENUM_VALUE(RANGER, 4056, JOB_RANGER)
JOB_ENUM_VALUE(ARCH_BISHOP, 4057, JOB_ARCH_BISHOP)
JOB_ENUM_VALUE(MECHANIC, 4058, JOB_MECHANIC)
JOB_ENUM_VALUE(GUILLOTINE_CROSS, 4059, JOB_GUILLOTINE_CROSS)
JOB_ENUM_VALUE(RUNE_KNIGHT_T, 4060, JOB_RUNE_KNIGHT_T)
JOB_ENUM_VALUE(WARLOCK_T, 4061, JOB_WARLOCK_T)
JOB_ENUM_VALUE(RANGER_T, 4062, JOB_RANGER_T)
JOB_ENUM_VALUE(ARCH_BISHOP_T, 4063, JOB_ARCH_BISHOP_T)
JOB_ENUM_VALUE(MECHANIC_T, 4064, JOB_MECHANIC_T)
JOB_ENUM_VALUE(GUILLOTINE_CROSS_T, 4065, JOB_GUILLOTINE_CROSS_T)
JOB_ENUM_VALUE(ROYAL_GUARD, 4066, JOB_ROYAL_GUARD)
JOB_ENUM_VALUE(SORCERER, 4067, JOB_SORCERER)
JOB_ENUM_VALUE(SURA, 4070, JOB_SURA)
JOB_ENUM_VALUE(GENETIC, 4071, JOB_GENETIC)
JOB_ENUM_VALUE(SHADOW_CHASER, 4072, JOB_SHADOW_CHASER)
JOB_ENUM_VALUE(ROYAL_GUARD_T, 4073, JOB_ROYAL_GUARD_T)
JOB_ENUM_VALUE(SORCERER_T, 4074, JOB_SORCERER_T)
JOB_ENUM_VALUE(SURA_T, 4077, JOB_SURA_T)
JOB_ENUM_VALUE(GENETIC_T, 4078, JOB_GENETIC_T)
JOB_ENUM_VALUE(SHADOW_CHASER_T, 4079, JOB_SHADOW_CHASER_T)
JOB_ENUM_VALUE(BABY_RUNE, 4096, JOB_BABY_RUNE)
JOB_ENUM_VALUE(BABY_WARLOCK, 4097, JOB_BABY_WARLOCK)
JOB_ENUM_VALUE(BABY_RANGER, 4098, JOB_BABY_RANGER)
JOB_ENUM_VALUE(BABY_BISHOP, 4099, JOB_BABY_BISHOP)
JOB_ENUM_VALUE(BABY_MECHANIC, 4100, JOB_BABY_MECHANIC)
JOB_ENUM_VALUE(BABY_CROSS, 4101, JOB_BABY_CROSS)
JOB_ENUM_VALUE(BABY_GUARD, 4102, JOB_BABY_GUARD)
JOB_ENUM_VALUE(BABY_SORCERER, 4103, JOB_BABY_SORCERER)
JOB_ENUM_VALUE(BABY_SURA, 4106, JOB_BABY_SURA)
JOB_ENUM_VALUE(BABY_GENETIC, 4107, JOB_BABY_GENETIC)
JOB_ENUM_VALUE(BABY_CHASER, 4108, JOB_BABY_CHASER)
JOB_ENUM_VALUE(SUPER_NOVICE_E, 4190, JOB_SUPER_NOVICE_E)
JOB_ENUM_VALUE(SUPER_BABY_E, 4191, JOB_SUPER_BABY_E)
JOB_ENUM_VALUE(REBELLION, 4215, JOB_REBELLION)
JOB_ENUM_VALUE(SUMMONER, 4218, JOB_SUMMONER)
JOB_ENUM_VALUE(BABY_SUMMONER, 4220, JOB_BABY_SUMMONER)
JOB_ENUM_VALUE(BABY_NINJA, 4222, JOB_BABY_NINJA)
JOB_ENUM_VALUE(BABY_TAEKWON, 4225, JOB_BABY_TAEKWON)
JOB_ENUM_VALUE(BABY_STAR_GLADIATOR, 4226, JOB_BABY_STAR_GLADIATOR)
JOB_ENUM_VALUE(BABY_SOUL_LINKER, 4227, JOB_BABY_SOUL_LINKER)
JOB_ENUM_VALUE(BABY_GUNSLINGER, 4228, JOB_BABY_GUNSLINGER)
JOB_ENUM_VALUE(BABY_REBELLION, 4229, JOB_BABY_REBELLION)
JOB_ENUM_VALUE(STAR_EMPEROR, 4239, JOB_STAR_EMPEROR)
JOB_ENUM_VALUE(SOUL_REAPER, 4240, JOB_SOUL_REAPER)
JOB_ENUM_VALUE(BABY_STAR_EMPEROR, 4241, JOB_BABY_STAR_EMPEROR)
JOB_ENUM_VALUE(BABY_SOUL_REAPER, 4242, JOB_BABY_SOUL_REAPER)
