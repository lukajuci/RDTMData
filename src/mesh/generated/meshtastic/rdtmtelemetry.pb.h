/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.7 */

#ifndef PB_MESHTASTIC_MESHTASTIC_RDTMTELEMETRY_PB_H_INCLUDED
#define PB_MESHTASTIC_MESHTASTIC_RDTMTELEMETRY_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Struct definitions */
/* all metrics gathered by the node */
typedef struct _meshtastic_rdtmmetrics {
    /* generated in NodeDB.cpp */
    int32_t NodeNum;
    int32_t time;
    float longitude;
    float latitude;
    int32_t speeds[30];
    int32_t directions[30];
    int32_t temperature;
} meshtastic_rdtmmetrics;


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define meshtastic_rdtmmetrics_init_default      {0, 0, 0, 0, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 0}
#define meshtastic_rdtmmetrics_init_zero         {0, 0, 0, 0, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 0}

/* Field tags (for use in manual encoding/decoding) */
#define meshtastic_rdtmmetrics_NodeNum_tag       1
#define meshtastic_rdtmmetrics_time_tag          2
#define meshtastic_rdtmmetrics_longitude_tag     3
#define meshtastic_rdtmmetrics_latitude_tag      4
#define meshtastic_rdtmmetrics_speeds_tag        5
#define meshtastic_rdtmmetrics_directions_tag    6
#define meshtastic_rdtmmetrics_temperature_tag   7

/* Struct field encoding specification for nanopb */
#define meshtastic_rdtmmetrics_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, INT32,    NodeNum,           1) \
X(a, STATIC,   SINGULAR, INT32,    time,              2) \
X(a, STATIC,   SINGULAR, FLOAT,    longitude,         3) \
X(a, STATIC,   SINGULAR, FLOAT,    latitude,          4) \
X(a, STATIC,   FIXARRAY, INT32,    speeds,            5) \
X(a, STATIC,   FIXARRAY, INT32,    directions,        6) \
X(a, STATIC,   SINGULAR, INT32,    temperature,       7)
#define meshtastic_rdtmmetrics_CALLBACK NULL
#define meshtastic_rdtmmetrics_DEFAULT NULL

extern const pb_msgdesc_t meshtastic_rdtmmetrics_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define meshtastic_rdtmmetrics_fields &meshtastic_rdtmmetrics_msg

/* Maximum encoded size of messages (where known) */
#define meshtastic_rdtmmetrics_size              703

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
