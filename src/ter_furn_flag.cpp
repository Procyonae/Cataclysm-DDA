#include "ter_furn_flag.h"

#include "debug.h"
#include "flexbuffer_json-inl.h"
#include "flexbuffer_json.h"
#include "generic_factory.h"
#include "init.h"
#include "json_error.h"
#include "type_id.h"

// TODO: Remove in favour of static consts per cpp
namespace ter_furn_flag
{
const ter_furn_flag_id TFLAG_ACTIVE_GENERATOR( "ACTIVE_GENERATOR" );
const ter_furn_flag_id TFLAG_ALARMED( "ALARMED" );
const ter_furn_flag_id TFLAG_ALIGN_WORKBENCH( "ALIGN_WORKBENCH" );
const ter_furn_flag_id TFLAG_ALLOW_FIELD_EFFECT( "ALLOW_FIELD_EFFECT" );
const ter_furn_flag_id TFLAG_ALLOW_ON_OPEN_AIR( "ALLOW_ON_OPEN_AIR" );
const ter_furn_flag_id TFLAG_AMMOTYPE_RELOAD( "AMMOTYPE_RELOAD" );
const ter_furn_flag_id TFLAG_AUTO_WALL_SYMBOL( "AUTO_WALL_SYMBOL" );
const ter_furn_flag_id TFLAG_AUTODOC( "AUTODOC" );
const ter_furn_flag_id TFLAG_AUTODOC_COUCH( "AUTODOC_COUCH" );
const ter_furn_flag_id TFLAG_BARRICADABLE_DOOR( "BARRICADABLE_DOOR" );
const ter_furn_flag_id TFLAG_BARRICADABLE_DOOR_DAMAGED( "BARRICADABLE_DOOR_DAMAGED" );
const ter_furn_flag_id TFLAG_BARRICADABLE_DOOR_REINFORCED( "BARRICADABLE_DOOR_REINFORCED" );
const ter_furn_flag_id TFLAG_BARRICADABLE_WINDOW_CURTAINS( "BARRICADABLE_WINDOW_CURTAINS" );
const ter_furn_flag_id TFLAG_BLOCK_WIND( "BLOCK_WIND" );
const ter_furn_flag_id TFLAG_BLOCKSDOOR( "BLOCKSDOOR" );
const ter_furn_flag_id TFLAG_BRIDGE( "BRIDGE" );
const ter_furn_flag_id TFLAG_BROWSABLE( "BROWSABLE" );
const ter_furn_flag_id TFLAG_BURROWABLE( "BURROWABLE" );
const ter_furn_flag_id TFLAG_BUTCHER_EQ( "BUTCHER_EQ" );
const ter_furn_flag_id TFLAG_CAN_SIT( "CAN_SIT" );
const ter_furn_flag_id TFLAG_CHOCOLATE( "CHOCOLATE" );
const ter_furn_flag_id TFLAG_CLIMB_ADJACENT( "CLIMB_ADJACENT" );
const ter_furn_flag_id TFLAG_CLIMB_SIMPLE( "CLIMB_SIMPLE" );
const ter_furn_flag_id TFLAG_CLIMBABLE( "CLIMBABLE" );
const ter_furn_flag_id TFLAG_COLLAPSES( "COLLAPSES" );
const ter_furn_flag_id TFLAG_CONNECT_WITH_WALL( "CONNECT_WITH_WALL" );
const ter_furn_flag_id TFLAG_CONSOLE( "CONSOLE" );
const ter_furn_flag_id TFLAG_CONTAINER( "CONTAINER" );
const ter_furn_flag_id TFLAG_CURRENT( "CURRENT" );
const ter_furn_flag_id TFLAG_DEEP_WATER( "DEEP_WATER" );
const ter_furn_flag_id TFLAG_DESTROY_ITEM( "DESTROY_ITEM" );
const ter_furn_flag_id TFLAG_DIFFICULT_Z( "DIFFICULT_Z" );
const ter_furn_flag_id TFLAG_DIGGABLE( "DIGGABLE" );
const ter_furn_flag_id TFLAG_DIGGABLE_CAN_DEEPEN( "DIGGABLE_CAN_DEEPEN" );
const ter_furn_flag_id TFLAG_DONT_REMOVE_ROTTEN( "DONT_REMOVE_ROTTEN" );
const ter_furn_flag_id TFLAG_DOOR( "DOOR" );
const ter_furn_flag_id TFLAG_EASY_DECONSTRUCT( "EASY_DECONSTRUCT" );
const ter_furn_flag_id TFLAG_ELEVATOR( "ELEVATOR" );
const ter_furn_flag_id TFLAG_EMPTY_SPACE( "EMPTY_SPACE" );
const ter_furn_flag_id TFLAG_EXAMINE_FROM_ABOVE( "EXAMINE_FROM_ABOVE" );
const ter_furn_flag_id TFLAG_FIRE_CONTAINER( "FIRE_CONTAINER" );
const ter_furn_flag_id TFLAG_FISHABLE( "FISHABLE" );
const ter_furn_flag_id TFLAG_FLAMMABLE( "FLAMMABLE" );
const ter_furn_flag_id TFLAG_FLAMMABLE_ASH( "FLAMMABLE_ASH" );
const ter_furn_flag_id TFLAG_FLAMMABLE_HARD( "FLAMMABLE_HARD" );
const ter_furn_flag_id TFLAG_FLAT( "FLAT" );
const ter_furn_flag_id TFLAG_FLAT_SURF( "FLAT_SURF" );
const ter_furn_flag_id TFLAG_FLOATS_IN_AIR( "FLOATS_IN_AIR" );
const ter_furn_flag_id TFLAG_FLOWER( "FLOWER" );
const ter_furn_flag_id TFLAG_FUNGUS( "FUNGUS" );
const ter_furn_flag_id TFLAG_GOES_DOWN( "GOES_DOWN" );
const ter_furn_flag_id TFLAG_GOES_UP( "GOES_UP" );
const ter_furn_flag_id TFLAG_GRAZABLE( "GRAZABLE" );
const ter_furn_flag_id TFLAG_GRAZER_INEDIBLE( "GRAZER_INEDIBLE" );
const ter_furn_flag_id TFLAG_GROWTH_HARVEST( "GROWTH_HARVEST" );
const ter_furn_flag_id TFLAG_GROWTH_MATURE( "GROWTH_MATURE" );
const ter_furn_flag_id TFLAG_GROWTH_OVERGROWN( "GROWTH_OVERGROWN" );
const ter_furn_flag_id TFLAG_GROWTH_SEEDLING( "GROWTH_SEEDLING" );
const ter_furn_flag_id TFLAG_HARVEST_REQ_CUT1( "HARVEST_REQ_CUT1" );
const ter_furn_flag_id TFLAG_HARVESTED( "HARVESTED" );
const ter_furn_flag_id TFLAG_HIDE_PLACE( "HIDE_PLACE" );
const ter_furn_flag_id TFLAG_INDOORS( "INDOORS" );
const ter_furn_flag_id TFLAG_KEEP_ITEMS( "KEEP_ITEMS" );
const ter_furn_flag_id TFLAG_LADDER( "LADDER" );
const ter_furn_flag_id TFLAG_LIQUID( "LIQUID" );
const ter_furn_flag_id TFLAG_LIQUIDCONT( "LIQUIDCONT" );
const ter_furn_flag_id TFLAG_LOCKED( "LOCKED" );
const ter_furn_flag_id TFLAG_MINEABLE( "MINEABLE" );
const ter_furn_flag_id TFLAG_MOUNTABLE( "MOUNTABLE" );
const ter_furn_flag_id TFLAG_MURKY( "MURKY" );
const ter_furn_flag_id TFLAG_NANOFAB_TABLE( "NANOFAB_TABLE" );
const ter_furn_flag_id TFLAG_NO_FLOOR( "NO_FLOOR" );
const ter_furn_flag_id TFLAG_NO_FLOOR_WATER( "NO_FLOOR_WATER" );
const ter_furn_flag_id TFLAG_NO_PICKUP_ON_EXAMINE( "NO_PICKUP_ON_EXAMINE" );
const ter_furn_flag_id TFLAG_NO_SCENT( "NO_SCENT" );
const ter_furn_flag_id TFLAG_NO_SELF_CONNECT( "NO_SELF_CONNECT" );
const ter_furn_flag_id TFLAG_NO_SIGHT( "NO_SIGHT" );
const ter_furn_flag_id TFLAG_NO_SPOIL( "NO_SPOIL" );
const ter_furn_flag_id TFLAG_NOCOLLIDE( "NOCOLLIDE" );
const ter_furn_flag_id TFLAG_NOITEM( "NOITEM" );
const ter_furn_flag_id TFLAG_OPENCLOSE_INSIDE( "OPENCLOSE_INSIDE" );
const ter_furn_flag_id TFLAG_ORGANIC( "ORGANIC" );
const ter_furn_flag_id TFLAG_PERMEABLE( "PERMEABLE" );
const ter_furn_flag_id TFLAG_PICKABLE( "PICKABLE" );
const ter_furn_flag_id TFLAG_PIT_FILLABLE( "PIT_FILLABLE" );
const ter_furn_flag_id TFLAG_PLACE_ITEM( "PLACE_ITEM" );
const ter_furn_flag_id TFLAG_PLANT( "PLANT" );
const ter_furn_flag_id TFLAG_PLANTABLE( "PLANTABLE" );
const ter_furn_flag_id TFLAG_PLOWABLE( "PLOWABLE" );
const ter_furn_flag_id TFLAG_RAIL( "RAIL" );
const ter_furn_flag_id TFLAG_RAMP( "RAMP" );
const ter_furn_flag_id TFLAG_RAMP_DOWN( "RAMP_DOWN" );
const ter_furn_flag_id TFLAG_RAMP_END( "RAMP_END" );
const ter_furn_flag_id TFLAG_RAMP_UP( "RAMP_UP" );
const ter_furn_flag_id TFLAG_REDUCE_SCENT( "REDUCE_SCENT" );
const ter_furn_flag_id TFLAG_ROAD( "ROAD" );
const ter_furn_flag_id TFLAG_ROUGH( "ROUGH" );
const ter_furn_flag_id TFLAG_RUBBLE( "RUBBLE" );
const ter_furn_flag_id TFLAG_SALT_WATER( "SALT_WATER" );
const ter_furn_flag_id TFLAG_SEALED( "SEALED" );
const ter_furn_flag_id TFLAG_SEEN_FROM_ABOVE( "SEEN_FROM_ABOVE" );
const ter_furn_flag_id TFLAG_SHALLOW_WATER( "SHALLOW_WATER" );
const ter_furn_flag_id TFLAG_SHARP( "SHARP" );
const ter_furn_flag_id TFLAG_SHORT( "SHORT" );
const ter_furn_flag_id TFLAG_SHRUB( "SHRUB" );
const ter_furn_flag_id TFLAG_SIGN( "SIGN" );
const ter_furn_flag_id TFLAG_SIGN_ALWAYS( "SIGN_ALWAYS" );
const ter_furn_flag_id TFLAG_SINGLE_SUPPORT( "SINGLE_SUPPORT" );
const ter_furn_flag_id TFLAG_SMALL_HIDE( "SMALL_HIDE" );
const ter_furn_flag_id TFLAG_SMALL_PASSAGE( "SMALL_PASSAGE" );
const ter_furn_flag_id TFLAG_SPAWN_WITH_WATER( "SPAWN_WITH_WATER" );
const ter_furn_flag_id TFLAG_SUN_ROOF_ABOVE( "SUN_ROOF_ABOVE" );
const ter_furn_flag_id TFLAG_SUPPORTS_ROOF( "SUPPORTS_ROOF" );
const ter_furn_flag_id TFLAG_SUPPRESS_SMOKE( "SUPPRESS_SMOKE" );
const ter_furn_flag_id TFLAG_SWIMMABLE( "SWIMMABLE" );
const ter_furn_flag_id TFLAG_THIN_OBSTACLE( "THIN_OBSTACLE" );
const ter_furn_flag_id TFLAG_TINY( "TINY" );
const ter_furn_flag_id TFLAG_TOILET_WATER( "TOILET_WATER" );
const ter_furn_flag_id TFLAG_TRANSLOCATOR( "TRANSLOCATOR" );
const ter_furn_flag_id TFLAG_TRANSPARENT( "TRANSPARENT" );
const ter_furn_flag_id TFLAG_TRANSPARENT_FLOOR( "TRANSPARENT_FLOOR" );
const ter_furn_flag_id TFLAG_TREE( "TREE" );
const ter_furn_flag_id TFLAG_UNSTABLE( "UNSTABLE" );
const ter_furn_flag_id TFLAG_USABLE_FIRE( "USABLE_FIRE" );
const ter_furn_flag_id TFLAG_WALL( "WALL" );
const ter_furn_flag_id TFLAG_WATER_CUBE( "WATER_CUBE" );
const ter_furn_flag_id TFLAG_WINDOW( "WINDOW" );
const ter_furn_flag_id TFLAG_WORKOUT_ARMS( "WORKOUT_ARMS" );
const ter_furn_flag_id TFLAG_WORKOUT_LEGS( "WORKOUT_LEGS" );
const ter_furn_flag_id TFLAG_YOUNG( "YOUNG" );
const ter_furn_flag_id TFLAG_Z_TRANSPARENT( "Z_TRANSPARENT" );
}
