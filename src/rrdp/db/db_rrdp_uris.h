#ifndef SRC_RRDP_DB_DB_RRDP_URIS_H_
#define SRC_RRDP_DB_DB_RRDP_URIS_H_

#include <stdbool.h>
#include "rrdp/rrdp_objects.h"
#include "visited_uris.h"

/*
 * RRDP URI fetched from 'rpkiNotify' OID at a CA certificate, each TAL thread
 * may have a reference to one of these (it holds information such as update
 * notification URI, session ID, serial, visited mft uris).
 */
struct db_rrdp_uri;

int db_rrdp_uris_create(struct db_rrdp_uri **);
void db_rrdp_uris_destroy(struct db_rrdp_uri *);

int db_rrdp_uris_cmp(char const *, char const *, unsigned long,
    rrdp_uri_cmp_result_t *);
int db_rrdp_uris_update(char const *, char const *session_id, unsigned long,
    struct visited_uris *);
int db_rrdp_uris_get_serial(char const *, unsigned long *);

int db_rrdp_uris_get_last_update(char const *, long *);
int db_rrdp_uris_set_last_update(char const *);

int db_rrdp_uris_get_requested(char const *, bool *);
int db_rrdp_uris_set_requested(char const *, bool);
int db_rrdp_uris_set_all_nonrequested(void);

int db_rrdp_uris_get_visited_uris(char const *, struct visited_uris **);

bool db_rrdp_uris_visited_exists(struct db_rrdp_uri *, char const *);

#endif /* SRC_RRDP_DB_DB_RRDP_URIS_H_ */