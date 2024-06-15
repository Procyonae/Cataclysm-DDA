#pragma once
#ifndef CATA_SRC_TER_FURN_FLAG_H
#define CATA_SRC_TER_FURN_FLAG_H

#include <string>
#include <string_view>
#include <utility>
#include <vector>

#include "type_id.h"

namespace ter_furn_flag
{
extern const ter_furn_flag_id TFLAG_ACTIVE_GENERATOR;
extern const ter_furn_flag_id TFLAG_ALARMED;
extern const ter_furn_flag_id TFLAG_ALIGN_WORKBENCH;
extern const ter_furn_flag_id TFLAG_ALLOW_FIELD_EFFECT;
extern const ter_furn_flag_id TFLAG_ALLOW_ON_OPEN_AIR;
extern const ter_furn_flag_id TFLAG_AMMOTYPE_RELOAD;
extern const ter_furn_flag_id TFLAG_AUTO_WALL_SYMBOL;
extern const ter_furn_flag_id TFLAG_AUTODOC;
extern const ter_furn_flag_id TFLAG_AUTODOC_COUCH;
extern const ter_furn_flag_id TFLAG_BARRICADABLE_DOOR;
extern const ter_furn_flag_id TFLAG_BARRICADABLE_DOOR_DAMAGED;
extern const ter_furn_flag_id TFLAG_BARRICADABLE_DOOR_REINFORCED;
extern const ter_furn_flag_id TFLAG_BARRICADABLE_WINDOW_CURTAINS;
extern const ter_furn_flag_id TFLAG_BLOCK_WIND;
extern const ter_furn_flag_id TFLAG_BLOCKSDOOR;
extern const ter_furn_flag_id TFLAG_BRIDGE;
extern const ter_furn_flag_id TFLAG_BROWSABLE;
extern const ter_furn_flag_id TFLAG_BURROWABLE;
extern const ter_furn_flag_id TFLAG_BUTCHER_EQ;
extern const ter_furn_flag_id TFLAG_CAN_SIT;
extern const ter_furn_flag_id TFLAG_CHOCOLATE;
extern const ter_furn_flag_id TFLAG_CLIMB_ADJACENT;
extern const ter_furn_flag_id TFLAG_CLIMB_SIMPLE;
extern const ter_furn_flag_id TFLAG_CLIMBABLE;
extern const ter_furn_flag_id TFLAG_COLLAPSES;
extern const ter_furn_flag_id TFLAG_CONNECT_WITH_WALL;
extern const ter_furn_flag_id TFLAG_CONSOLE;
extern const ter_furn_flag_id TFLAG_CONTAINER;
extern const ter_furn_flag_id TFLAG_CURRENT;
extern const ter_furn_flag_id TFLAG_DEEP_WATER;
extern const ter_furn_flag_id TFLAG_DESTROY_ITEM;
extern const ter_furn_flag_id TFLAG_DIFFICULT_Z;
extern const ter_furn_flag_id TFLAG_DIGGABLE;
extern const ter_furn_flag_id TFLAG_DIGGABLE_CAN_DEEPEN;
extern const ter_furn_flag_id TFLAG_DONT_REMOVE_ROTTEN;
extern const ter_furn_flag_id TFLAG_DOOR;
extern const ter_furn_flag_id TFLAG_EASY_DECONSTRUCT;
extern const ter_furn_flag_id TFLAG_ELEVATOR;
extern const ter_furn_flag_id TFLAG_EMPTY_SPACE;
extern const ter_furn_flag_id TFLAG_EXAMINE_FROM_ABOVE;
extern const ter_furn_flag_id TFLAG_FIRE_CONTAINER;
extern const ter_furn_flag_id TFLAG_FISHABLE;
extern const ter_furn_flag_id TFLAG_FLAMMABLE;
extern const ter_furn_flag_id TFLAG_FLAMMABLE_ASH;
extern const ter_furn_flag_id TFLAG_FLAMMABLE_HARD;
extern const ter_furn_flag_id TFLAG_FLAT;
extern const ter_furn_flag_id TFLAG_FLAT_SURF;
extern const ter_furn_flag_id TFLAG_FLOATS_IN_AIR;
extern const ter_furn_flag_id TFLAG_FLOWER;
extern const ter_furn_flag_id TFLAG_FUNGUS;
extern const ter_furn_flag_id TFLAG_GOES_DOWN;
extern const ter_furn_flag_id TFLAG_GOES_UP;
extern const ter_furn_flag_id TFLAG_GRAZABLE;
extern const ter_furn_flag_id TFLAG_GRAZER_INEDIBLE;
extern const ter_furn_flag_id TFLAG_GROWTH_HARVEST;
extern const ter_furn_flag_id TFLAG_GROWTH_MATURE;
extern const ter_furn_flag_id TFLAG_GROWTH_OVERGROWN;
extern const ter_furn_flag_id TFLAG_GROWTH_SEEDLING;
extern const ter_furn_flag_id TFLAG_HARVEST_REQ_CUT1;
extern const ter_furn_flag_id TFLAG_HARVESTED;
extern const ter_furn_flag_id TFLAG_HIDE_PLACE;
extern const ter_furn_flag_id TFLAG_INDOORS;
extern const ter_furn_flag_id TFLAG_KEEP_ITEMS;
extern const ter_furn_flag_id TFLAG_LADDER;
extern const ter_furn_flag_id TFLAG_LIQUID;
extern const ter_furn_flag_id TFLAG_LIQUIDCONT;
extern const ter_furn_flag_id TFLAG_LOCKED;
extern const ter_furn_flag_id TFLAG_MINEABLE;
extern const ter_furn_flag_id TFLAG_MOUNTABLE;
extern const ter_furn_flag_id TFLAG_MURKY;
extern const ter_furn_flag_id TFLAG_NANOFAB_TABLE;
extern const ter_furn_flag_id TFLAG_NO_FLOOR;
extern const ter_furn_flag_id TFLAG_NO_FLOOR_WATER;
extern const ter_furn_flag_id TFLAG_NO_PICKUP_ON_EXAMINE;
extern const ter_furn_flag_id TFLAG_NO_SCENT;
extern const ter_furn_flag_id TFLAG_NO_SELF_CONNECT;
extern const ter_furn_flag_id TFLAG_NO_SIGHT;
extern const ter_furn_flag_id TFLAG_NO_SPOIL;
extern const ter_furn_flag_id TFLAG_NOCOLLIDE;
extern const ter_furn_flag_id TFLAG_NOITEM;
extern const ter_furn_flag_id TFLAG_OPENCLOSE_INSIDE;
extern const ter_furn_flag_id TFLAG_ORGANIC;
extern const ter_furn_flag_id TFLAG_PERMEABLE;
extern const ter_furn_flag_id TFLAG_PICKABLE;
extern const ter_furn_flag_id TFLAG_PIT_FILLABLE;
extern const ter_furn_flag_id TFLAG_PLACE_ITEM;
extern const ter_furn_flag_id TFLAG_PLANT;
extern const ter_furn_flag_id TFLAG_PLANTABLE;
extern const ter_furn_flag_id TFLAG_PLOWABLE;
extern const ter_furn_flag_id TFLAG_RAIL;
extern const ter_furn_flag_id TFLAG_RAMP;
extern const ter_furn_flag_id TFLAG_RAMP_DOWN;
extern const ter_furn_flag_id TFLAG_RAMP_END;
extern const ter_furn_flag_id TFLAG_RAMP_UP;
extern const ter_furn_flag_id TFLAG_REDUCE_SCENT;
extern const ter_furn_flag_id TFLAG_ROAD;
extern const ter_furn_flag_id TFLAG_ROUGH;
extern const ter_furn_flag_id TFLAG_RUBBLE;
extern const ter_furn_flag_id TFLAG_SALT_WATER;
extern const ter_furn_flag_id TFLAG_SEALED;
extern const ter_furn_flag_id TFLAG_SEEN_FROM_ABOVE;
extern const ter_furn_flag_id TFLAG_SHALLOW_WATER;
extern const ter_furn_flag_id TFLAG_SHARP;
extern const ter_furn_flag_id TFLAG_SHORT;
extern const ter_furn_flag_id TFLAG_SHRUB;
extern const ter_furn_flag_id TFLAG_SIGN;
extern const ter_furn_flag_id TFLAG_SIGN_ALWAYS;
extern const ter_furn_flag_id TFLAG_SINGLE_SUPPORT;
extern const ter_furn_flag_id TFLAG_SMALL_HIDE;
extern const ter_furn_flag_id TFLAG_SMALL_PASSAGE;
extern const ter_furn_flag_id TFLAG_SPAWN_WITH_WATER;
extern const ter_furn_flag_id TFLAG_SUN_ROOF_ABOVE;
extern const ter_furn_flag_id TFLAG_SUPPORTS_ROOF;
extern const ter_furn_flag_id TFLAG_SUPPRESS_SMOKE;
extern const ter_furn_flag_id TFLAG_SWIMMABLE;
extern const ter_furn_flag_id TFLAG_THIN_OBSTACLE;
extern const ter_furn_flag_id TFLAG_TINY;
extern const ter_furn_flag_id TFLAG_TOILET_WATER;
extern const ter_furn_flag_id TFLAG_TRANSLOCATOR;
extern const ter_furn_flag_id TFLAG_TRANSPARENT;
extern const ter_furn_flag_id TFLAG_TRANSPARENT_FLOOR;
extern const ter_furn_flag_id TFLAG_TREE;
extern const ter_furn_flag_id TFLAG_UNSTABLE;
extern const ter_furn_flag_id TFLAG_USABLE_FIRE;
extern const ter_furn_flag_id TFLAG_WALL;
extern const ter_furn_flag_id TFLAG_WATER_CUBE;
extern const ter_furn_flag_id TFLAG_WINDOW;
extern const ter_furn_flag_id TFLAG_WORKOUT_ARMS;
extern const ter_furn_flag_id TFLAG_WORKOUT_LEGS;
extern const ter_furn_flag_id TFLAG_YOUNG;
extern const ter_furn_flag_id TFLAG_Z_TRANSPARENT;
}

class JsonObject;
template <typename T> class generic_factory;

// TODO Rename flag_ter_furn -> ter_furn_flag once extern list is gone (only named this to temporarily preserve old ids)
class flag_ter_furn
{
        friend class DynamicDataLoader;
        friend class generic_factory<flag_ter_furn>;

    public:
        // used by generic_factory
        ter_furn_flag_id id = ter_furn_flag_id::NULL_ID();
        std::vector<std::pair<ter_furn_flag_id, mod_id>> src;
        bool was_loaded = false;

        flag_ter_furn() = default;

        /** Fetches flag definition (or null flag if not found) */
        static const flag_ter_furn &get( const std::string &id );

        /** Is this a valid (non-null) flag */
        explicit operator bool() const;

        void check() const;

        /** true, if flags were loaded */
        static bool is_ready();

        static const std::vector<flag_ter_furn> &get_all();

    private:
        /** Load flag definition from JSON */
        void load( const JsonObject &jo, std::string_view src );

        /** Load all flags from JSON */
        static void load_all( const JsonObject &jo, const std::string &src );

        /** finalize */
        static void finalize_all( );

        /** Check consistency of all loaded flags */
        static void check_consistency();

        /** Clear all loaded flags (invalidating any pointers) */
        static void reset();
};

#endif // CATA_SRC_TER_FURN_FLAG_H
