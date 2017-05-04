/*--------------------------------------------------------------------*/
/*--- Solaris-specific kernel interface for the repository cache   ---*/
/*--- protocol.                             vki-solaris-repcache.h ---*/
/*--------------------------------------------------------------------*/

/*
   This file is part of Valgrind, a dynamic binary instrumentation
   framework.

   Copyright (C) 2015-2017 Ivo Raisr
      ivosh@ivosh.net

   This program is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public License as
   published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   This program is distributed in the hope that it will be useful, but
   WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307, USA.

   The GNU General Public License is contained in the file COPYING.
*/

/* Copyright 2015-2017, Tomas Jedlicka <jedlickat@gmail.com>. */

#ifndef __VKI_SOLARIS_REPCACHE_H
#define __VKI_SOLARIS_REPCACHE_H

/* From <repcache_protocol.h> which is consolidation private. */
#define VKI_REPOSITORY_DOOR_BASEVER (('R' << 24) | ('e' << 16) | ('p' << 8))

#if (SOLARIS_REPCACHE_PROTOCOL_VERSION == 21)
#define VKI_REPOSITORY_DOOR_VERSION (21 + VKI_REPOSITORY_DOOR_BASEVER)
enum vki_rep_protocol_requestid {
   VKI_REP_PROTOCOL_CLOSE = ('C' << 8),
   VKI_REP_PROTOCOL_ENTITY_SETUP,
   VKI_REP_PROTOCOL_ENTITY_NAME,
   VKI_REP_PROTOCOL_ENTITY_PARENT_TYPE,
   VKI_REP_PROTOCOL_ENTITY_GET_CHILD,
   VKI_REP_PROTOCOL_ENTITY_GET_PARENT,
   VKI_REP_PROTOCOL_ENTITY_GET,
   VKI_REP_PROTOCOL_ENTITY_UPDATE,
   VKI_REP_PROTOCOL_ENTITY_CREATE_CHILD,
   VKI_REP_PROTOCOL_ENTITY_CREATE_PG,
   VKI_REP_PROTOCOL_ENTITY_DELETE,
   VKI_REP_PROTOCOL_ENTITY_RESET,
   VKI_REP_PROTOCOL_ENTITY_TEARDOWN,
   VKI_REP_PROTOCOL_ITER_SETUP,
   VKI_REP_PROTOCOL_ITER_START,
   VKI_REP_PROTOCOL_ITER_READ,
   VKI_REP_PROTOCOL_ITER_READ_VALUE,
   VKI_REP_PROTOCOL_ITER_RESET,
   VKI_REP_PROTOCOL_ITER_TEARDOWN,
   VKI_REP_PROTOCOL_NEXT_SNAPLEVEL,
   VKI_REP_PROTOCOL_SNAPSHOT_TAKE,
   VKI_REP_PROTOCOL_SNAPSHOT_TAKE_NAMED,
   VKI_REP_PROTOCOL_SNAPSHOT_ATTACH,
   VKI_REP_PROTOCOL_PROPERTY_GET_TYPE,
   VKI_REP_PROTOCOL_PROPERTY_GET_VALUE,
   VKI_REP_PROTOCOL_PROPERTYGRP_SETUP_WAIT,
   VKI_REP_PROTOCOL_PROPERTYGRP_TX_START,
   VKI_REP_PROTOCOL_PROPERTYGRP_TX_COMMIT,
   VKI_REP_PROTOCOL_CLIENT_ADD_NOTIFY,
   VKI_REP_PROTOCOL_CLIENT_WAIT,
   VKI_REP_PROTOCOL_BACKUP,
   VKI_REP_PROTOCOL_SET_AUDIT_ANNOTATION,
   VKI_REP_PROTOCOL_SWITCH,
};
#elif (SOLARIS_REPCACHE_PROTOCOL_VERSION == 23)
#define VKI_REPOSITORY_DOOR_VERSION (23 + VKI_REPOSITORY_DOOR_BASEVER)
enum vki_rep_protocol_requestid {
   VKI_REP_PROTOCOL_CLOSE = ('C' << 8),
   VKI_REP_PROTOCOL_ENTITY_SETUP,
   VKI_REP_PROTOCOL_ENTITY_NAME,
   VKI_REP_PROTOCOL_ENTITY_PARENT_TYPE,
   VKI_REP_PROTOCOL_ENTITY_GET_CHILD,
   VKI_REP_PROTOCOL_ENTITY_GET_PARENT,
   VKI_REP_PROTOCOL_ENTITY_GET,
   VKI_REP_PROTOCOL_ENTITY_UPDATE,
   VKI_REP_PROTOCOL_ENTITY_CREATE_CHILD,
   VKI_REP_PROTOCOL_ENTITY_CREATE_PG,
   VKI_REP_PROTOCOL_ENTITY_DELETE,
   VKI_REP_PROTOCOL_ENTITY_UNDELETE,
   VKI_REP_PROTOCOL_ENTITY_REMOVE,
   VKI_REP_PROTOCOL_ENTITY_DELCUST,
   VKI_REP_PROTOCOL_BUNDLE_REMOVE,
   VKI_REP_PROTOCOL_ENTITY_RESET,
   VKI_REP_PROTOCOL_ENTITY_TEARDOWN,
   VKI_REP_PROTOCOL_ITER_SETUP,
   VKI_REP_PROTOCOL_ITER_START,
   VKI_REP_PROTOCOL_ITER_READ,
   VKI_REP_PROTOCOL_ITER_READ_VALUE,
   VKI_REP_PROTOCOL_ITER_RESET,
   VKI_REP_PROTOCOL_ITER_TEARDOWN,
   VKI_REP_PROTOCOL_NEXT_SNAPLEVEL,
   VKI_REP_PROTOCOL_SNAPSHOT_TAKE,
   VKI_REP_PROTOCOL_SNAPSHOT_TAKE_NAMED,
   VKI_REP_PROTOCOL_SNAPSHOT_ATTACH,
   VKI_REP_PROTOCOL_PROPERTY_GET_TYPE,
   VKI_REP_PROTOCOL_PROPERTY_GET_VALUE,
   VKI_REP_PROTOCOL_PG_SETUP_WAIT,
   VKI_REP_PROTOCOL_PG_TX_START,
   VKI_REP_PROTOCOL_PG_TX_COMMIT,
   VKI_REP_PROTOCOL_PROP_BUNDLE_REMOVE,
   VKI_REP_PROTOCOL_CLIENT_ADD_NOTIFY,
   VKI_REP_PROTOCOL_CLIENT_WAIT,
   VKI_REP_PROTOCOL_BACKUP,
   VKI_REP_PROTOCOL_SET_AUDIT_ANNOTATION,
   VKI_REP_PROTOCOL_UNSET_AUDIT_ANNOTATION,
   VKI_REP_PROTOCOL_SET_TX_DECORATION,
   VKI_REP_PROTOCOL_SWITCH,
   VKI_REP_PROTOCOL_DECORATION_GET_LAYER,
   VKI_REP_PROTOCOL_DECORATION_GET_TYPE,
   VKI_REP_PROTOCOL_DECORATION_GET_VALUE,
   VKI_REP_PROTOCOL_DECORATION_GET_BUNDLE,
   VKI_REP_PROTOCOL_ENTITY_INCONFLICT,
   VKI_REP_PROTOCOL_ENTITY_IS_MASKED,
   VKI_REP_PROTOCOL_CLIENT_REMOVE_NOTIFY,
};
#elif (SOLARIS_REPCACHE_PROTOCOL_VERSION == 25)
#define VKI_REPOSITORY_DOOR_VERSION (25 + VKI_REPOSITORY_DOOR_BASEVER)
enum vki_rep_protocol_requestid {
   VKI_REP_PROTOCOL_CLOSE = ('C' << 8),
   VKI_REP_PROTOCOL_ENTITY_SETUP,
   VKI_REP_PROTOCOL_ENTITY_NAME,
   VKI_REP_PROTOCOL_ENTITY_FMRI,
   VKI_REP_PROTOCOL_ENTITY_PARENT_TYPE,
   VKI_REP_PROTOCOL_ENTITY_GET_CHILD,
   VKI_REP_PROTOCOL_ENTITY_GET_PARENT,
   VKI_REP_PROTOCOL_ENTITY_GET_ROOT,
   VKI_REP_PROTOCOL_ENTITY_GET,
   VKI_REP_PROTOCOL_ENTITY_UPDATE,
   VKI_REP_PROTOCOL_ENTITY_CREATE_CHILD,
   VKI_REP_PROTOCOL_ENTITY_CREATE_PG,
   VKI_REP_PROTOCOL_ENTITY_DELETE,
   VKI_REP_PROTOCOL_ENTITY_UNDELETE,
   VKI_REP_PROTOCOL_ENTITY_REMOVE,
   VKI_REP_PROTOCOL_ENTITY_DELCUST,
   VKI_REP_PROTOCOL_BUNDLE_REMOVE,
   VKI_REP_PROTOCOL_ENTITY_RESET,
   VKI_REP_PROTOCOL_ENTITY_TEARDOWN,
   VKI_REP_PROTOCOL_ITER_SETUP,
   VKI_REP_PROTOCOL_ITER_START,
   VKI_REP_PROTOCOL_ITER_READ,
   VKI_REP_PROTOCOL_ITER_READ_VALUE,
   VKI_REP_PROTOCOL_ITER_RESET,
   VKI_REP_PROTOCOL_ITER_TEARDOWN,
   VKI_REP_PROTOCOL_NEXT_SNAPLEVEL,
   VKI_REP_PROTOCOL_SNAPSHOT_TAKE,
   VKI_REP_PROTOCOL_SNAPSHOT_TAKE_NAMED,
   VKI_REP_PROTOCOL_SNAPSHOT_ATTACH,
   VKI_REP_PROTOCOL_PROPERTY_GET_TYPE,
   VKI_REP_PROTOCOL_PROPERTY_GET_VALUE,
   VKI_REP_PROTOCOL_PG_SETUP_WAIT,
   VKI_REP_PROTOCOL_PG_TX_START,
   VKI_REP_PROTOCOL_PG_TX_COMMIT,
   VKI_REP_PROTOCOL_PROP_BUNDLE_REMOVE,
   VKI_REP_PROTOCOL_CLIENT_ADD_NOTIFY,
   VKI_REP_PROTOCOL_CLIENT_WAIT,
   VKI_REP_PROTOCOL_BACKUP,
   VKI_REP_PROTOCOL_SET_AUDIT_ANNOTATION,
   VKI_REP_PROTOCOL_UNSET_AUDIT_ANNOTATION,
   VKI_REP_PROTOCOL_SET_TX_DECORATION,
   VKI_REP_PROTOCOL_SWITCH,
   VKI_REP_PROTOCOL_DECORATION_GET_LAYER,
   VKI_REP_PROTOCOL_DECORATION_GET_TYPE,
   VKI_REP_PROTOCOL_DECORATION_GET_VALUE,
   VKI_REP_PROTOCOL_DECORATION_GET_BUNDLE,
   VKI_REP_PROTOCOL_ENTITY_INCONFLICT,
   VKI_REP_PROTOCOL_ENTITY_IS_MASKED,
   VKI_REP_PROTOCOL_CLIENT_REMOVE_NOTIFY,
};
#elif (SOLARIS_REPCACHE_PROTOCOL_VERSION == 26)
#define VKI_REPOSITORY_DOOR_VERSION (26 + VKI_REPOSITORY_DOOR_BASEVER)
enum vki_rep_protocol_requestid {
   VKI_REP_PROTOCOL_CLOSE = ('C' << 8),
   VKI_REP_PROTOCOL_ENTITY_SETUP,
   VKI_REP_PROTOCOL_ENTITY_NAME,
   VKI_REP_PROTOCOL_ENTITY_FMRI,
   VKI_REP_PROTOCOL_ENTITY_PARENT_TYPE,
   VKI_REP_PROTOCOL_ENTITY_GET_CHILD,
   VKI_REP_PROTOCOL_ENTITY_GET_PARENT,
   VKI_REP_PROTOCOL_ENTITY_GET_ROOT,
   VKI_REP_PROTOCOL_ENTITY_GET,
   VKI_REP_PROTOCOL_ENTITY_UPDATE,
   VKI_REP_PROTOCOL_ENTITY_CREATE_CHILD,
   VKI_REP_PROTOCOL_ENTITY_CREATE_PG,
   VKI_REP_PROTOCOL_ENTITY_DELETE,
   VKI_REP_PROTOCOL_ENTITY_UNDELETE,
   VKI_REP_PROTOCOL_ENTITY_REMOVE,
   VKI_REP_PROTOCOL_ENTITY_DELCUST,
   VKI_REP_PROTOCOL_BUNDLE_REMOVE,
   VKI_REP_PROTOCOL_ENTITY_RESET,
   VKI_REP_PROTOCOL_ENTITY_TEARDOWN,
   VKI_REP_PROTOCOL_ITER_SETUP,
   VKI_REP_PROTOCOL_ITER_START,
   VKI_REP_PROTOCOL_ITER_READ,
   VKI_REP_PROTOCOL_ITER_READ_VALUE,
   VKI_REP_PROTOCOL_ITER_RESET,
   VKI_REP_PROTOCOL_ITER_TEARDOWN,
   VKI_REP_PROTOCOL_NEXT_SNAPLEVEL,
   VKI_REP_PROTOCOL_SNAPSHOT_TAKE,
   VKI_REP_PROTOCOL_SNAPSHOT_TAKE_NAMED,
   VKI_REP_PROTOCOL_SNAPSHOT_ATTACH,
   VKI_REP_PROTOCOL_PROPERTY_GET_TYPE,
   VKI_REP_PROTOCOL_PROPERTY_GET_VALUE,
   VKI_REP_PROTOCOL_PG_SETUP_WAIT,
   VKI_REP_PROTOCOL_PG_TX_START,
   VKI_REP_PROTOCOL_PG_TX_COMMIT,
   VKI_REP_PROTOCOL_PROP_BUNDLE_REMOVE,
   VKI_REP_PROTOCOL_CLIENT_ADD_NOTIFY,
   VKI_REP_PROTOCOL_CLIENT_WAIT,
   VKI_REP_PROTOCOL_BACKUP,
   VKI_REP_PROTOCOL_SET_AUDIT_ANNOTATION,
   VKI_REP_PROTOCOL_UNSET_AUDIT_ANNOTATION,
   VKI_REP_PROTOCOL_SET_TX_DECORATION,
   VKI_REP_PROTOCOL_SWITCH,
   VKI_REP_PROTOCOL_DECORATION_GET_LAYER,
   VKI_REP_PROTOCOL_DECORATION_GET_TYPE,
   VKI_REP_PROTOCOL_DECORATION_GET_VALUE,
   VKI_REP_PROTOCOL_DECORATION_GET_BUNDLE,
   VKI_REP_PROTOCOL_ENTITY_INCONFLICT,
   VKI_REP_PROTOCOL_ENTITY_IS_MASKED,
   VKI_REP_PROTOCOL_CLIENT_REMOVE_NOTIFY,
   VKI_REP_PROTOCOL_MAX_REQUEST
};
#elif (SOLARIS_REPCACHE_PROTOCOL_VERSION == 27)
#define VKI_REPOSITORY_DOOR_VERSION (27 + VKI_REPOSITORY_DOOR_BASEVER)
enum vki_rep_protocol_requestid {
   VKI_REP_PROTOCOL_CLOSE = ('C' << 8),
   VKI_REP_PROTOCOL_ENTITY_SETUP,
   VKI_REP_PROTOCOL_ENTITY_NAME,
   VKI_REP_PROTOCOL_ENTITY_FMRI,
   VKI_REP_PROTOCOL_ENTITY_PARENT_TYPE,
   VKI_REP_PROTOCOL_ENTITY_GET_CHILD,
   VKI_REP_PROTOCOL_ENTITY_GET_PARENT,
   VKI_REP_PROTOCOL_ENTITY_GET_ROOT,
   VKI_REP_PROTOCOL_ENTITY_GET,
   VKI_REP_PROTOCOL_ENTITY_UPDATE,
   VKI_REP_PROTOCOL_ENTITY_CREATE_CHILD,
   VKI_REP_PROTOCOL_ENTITY_CREATE_PG,
   VKI_REP_PROTOCOL_ENTITY_DELETE,
   VKI_REP_PROTOCOL_ENTITY_UNDELETE,
   VKI_REP_PROTOCOL_ENTITY_REMOVE,
   VKI_REP_PROTOCOL_ENTITY_DELCUST,
   VKI_REP_PROTOCOL_BUNDLE_REMOVE,
   VKI_REP_PROTOCOL_ENTITY_RESET,
   VKI_REP_PROTOCOL_ENTITY_TEARDOWN,
   VKI_REP_PROTOCOL_ITER_SETUP,
   VKI_REP_PROTOCOL_ITER_START,
   VKI_REP_PROTOCOL_ITER_READ,
   VKI_REP_PROTOCOL_ITER_READ_VALUE,
   VKI_REP_PROTOCOL_ITER_RESET,
   VKI_REP_PROTOCOL_ITER_TEARDOWN,
   VKI_REP_PROTOCOL_NEXT_SNAPLEVEL,
   VKI_REP_PROTOCOL_SNAPSHOT_TAKE,
   VKI_REP_PROTOCOL_SNAPSHOT_TAKE_NAMED,
   VKI_REP_PROTOCOL_SNAPSHOT_ATTACH,
   VKI_REP_PROTOCOL_PROPERTY_GET_TYPE,
   VKI_REP_PROTOCOL_PROPERTY_GET_VALUE,
   VKI_REP_PROTOCOL_PG_SETUP_WAIT,
   VKI_REP_PROTOCOL_PG_TX_START,
   VKI_REP_PROTOCOL_PG_TX_COMMIT,
   VKI_REP_PROTOCOL_PROP_BUNDLE_REMOVE,
   VKI_REP_PROTOCOL_CLIENT_ADD_NOTIFY,
   VKI_REP_PROTOCOL_CLIENT_WAIT,
   VKI_REP_PROTOCOL_BACKUP,
   VKI_REP_PROTOCOL_SET_AUDIT_ANNOTATION,
   VKI_REP_PROTOCOL_UNSET_AUDIT_ANNOTATION,
   VKI_REP_PROTOCOL_SET_TX_DECORATION,
   VKI_REP_PROTOCOL_SWITCH,
   VKI_REP_PROTOCOL_DECORATION_GET_LAYER,
   VKI_REP_PROTOCOL_DECORATION_GET_TYPE,
   VKI_REP_PROTOCOL_DECORATION_GET_VALUE,
   VKI_REP_PROTOCOL_DECORATION_GET_BUNDLE,
   VKI_REP_PROTOCOL_ENTITY_INCONFLICT,
   VKI_REP_PROTOCOL_ENTITY_IS_MASKED,
   VKI_REP_PROTOCOL_CLIENT_REMOVE_NOTIFY,
   VKI_REP_PROTOCOL_MAX_REQUEST
};
#elif (SOLARIS_REPCACHE_PROTOCOL_VERSION == 31)
#define VKI_REPOSITORY_DOOR_VERSION (31 + VKI_REPOSITORY_DOOR_BASEVER)
enum vki_rep_protocol_requestid {
   VKI_REP_PROTOCOL_CLOSE = ('C' << 8),
   VKI_REP_PROTOCOL_ENTITY_SETUP,
   VKI_REP_PROTOCOL_ENTITY_NAME,
   VKI_REP_PROTOCOL_ENTITY_PARENT_TYPE,
   VKI_REP_PROTOCOL_ENTITY_GET_CHILD,
   VKI_REP_PROTOCOL_ENTITY_GET_CHILD_COMPOSED,
   VKI_REP_PROTOCOL_ENTITY_GET_PARENT,
   VKI_REP_PROTOCOL_ENTITY_GET_ROOT,
   VKI_REP_PROTOCOL_ENTITY_GET,
   VKI_REP_PROTOCOL_ENTITY_UPDATE,
   VKI_REP_PROTOCOL_ENTITY_CREATE_CHILD,
   VKI_REP_PROTOCOL_ENTITY_CREATE_PG,
   VKI_REP_PROTOCOL_ENTITY_DELETE,
   VKI_REP_PROTOCOL_ENTITY_UNDELETE,
   VKI_REP_PROTOCOL_ENTITY_REMOVE,
   VKI_REP_PROTOCOL_ENTITY_DELCUST,
   VKI_REP_PROTOCOL_BUNDLE_REMOVE,
   VKI_REP_PROTOCOL_ENTITY_RESET,
   VKI_REP_PROTOCOL_ENTITY_TEARDOWN,
   VKI_REP_PROTOCOL_ITER_SETUP,
   VKI_REP_PROTOCOL_ITER_START,
   VKI_REP_PROTOCOL_ITER_READ,
   VKI_REP_PROTOCOL_ITER_READ_VALUE,
   VKI_REP_PROTOCOL_ITER_RESET,
   VKI_REP_PROTOCOL_ITER_TEARDOWN,
   VKI_REP_PROTOCOL_NEXT_SNAPLEVEL,
   VKI_REP_PROTOCOL_SNAPSHOT_TAKE,
   VKI_REP_PROTOCOL_SNAPSHOT_TAKE_NAMED,
   VKI_REP_PROTOCOL_SNAPSHOT_ATTACH,
   VKI_REP_PROTOCOL_PROPERTY_GET_TYPE,
   VKI_REP_PROTOCOL_PROPERTY_GET_VALUE,
   VKI_REP_PROTOCOL_PG_SETUP_WAIT,
   VKI_REP_PROTOCOL_PG_TX_START,
   VKI_REP_PROTOCOL_PG_TX_COMMIT,
   VKI_REP_PROTOCOL_PROP_BUNDLE_REMOVE,
   VKI_REP_PROTOCOL_CLIENT_ADD_NOTIFY,
   VKI_REP_PROTOCOL_CLIENT_WAIT,
   VKI_REP_PROTOCOL_BACKUP,
   VKI_REP_PROTOCOL_SET_AUDIT_ANNOTATION,
   VKI_REP_PROTOCOL_UNSET_AUDIT_ANNOTATION,
   VKI_REP_PROTOCOL_SET_LAYER,
   VKI_REP_PROTOCOL_SWITCH,
   VKI_REP_PROTOCOL_DECORATION_GET_LAYER,
   VKI_REP_PROTOCOL_DECORATION_GET_TYPE,
   VKI_REP_PROTOCOL_DECORATION_GET_VALUE,
   VKI_REP_PROTOCOL_DECORATION_GET_BUNDLE,
   VKI_REP_PROTOCOL_ENTITY_INCONFLICT,
   VKI_REP_PROTOCOL_ENTITY_IS_MASKED,
   VKI_REP_PROTOCOL_CLIENT_REMOVE_NOTIFY,
   VKI_REP_PROTOCOL_MAX_REQUEST
};
#else
#error Unsupported repcache protocol version
#endif

/* The following definitions are currently stable accross all repcache protocol
   versions. If there is any change to them, they need to be versioned
   properly so that Valgrind works on older versions. */

#define VKI_REPOSITORY_DOOR_NAME "/system/volatile/repository_door"
#define VKI_REP_PROTOCOL_NAME_LEN 120
typedef vki_uint32_t vki_repcache_entity_id_t;
enum vki_repository_door_requestid {
   VKI_REPOSITORY_DOOR_REQUEST_CONNECT = (('M' << 8) | 1)
};
enum vki_repository_door_statusid {
   VKI_REPOSITORY_DOOR_SUCCESS                = 0,
   VKI_REPOSITORY_DOOR_FAIL_BAD_REQUEST       = 1,
   VKI_REPOSITORY_DOOR_FAIL_VERSION_MISMATCH  = 2,
   VKI_REPOSITORY_DOOR_FAIL_BAD_FLAG          = 3,
   VKI_REPOSITORY_DOOR_FAIL_NO_RESOURCES      = 4,
   VKI_REPOSITORY_DOOR_FAIL_PERMISSION_DENIED = 5
};
typedef struct vki_repository_door_request {
   vki_uint32_t rdr_version;
   enum vki_repository_door_requestid rdr_request;
   vki_uint32_t rdr_flags;
   vki_uint32_t rdr_debug;
} vki_repository_door_request_t;
typedef struct vki_repository_door_response {
   enum vki_repository_door_statusid rdr_status;
} vki_repository_door_response_t;
typedef struct vki_rep_protocol_request {
   enum vki_rep_protocol_requestid rpr_request;
} vki_rep_protocol_request_t;
struct vki_rep_protocol_entity_setup {
   enum vki_rep_protocol_requestid rpr_request;
   vki_repcache_entity_id_t rpr_entityid;
   vki_uint32_t rpr_entitytype;
};
struct vki_rep_protocol_entity_name {
   enum vki_rep_protocol_requestid rpr_request;
   vki_repcache_entity_id_t rpr_entityid;
   vki_uint32_t rpr_answertype;
};
struct vki_rep_protocol_entity_fmri {
   enum vki_rep_protocol_requestid rpr_request;
   vki_repcache_entity_id_t rpr_entityid;
};
struct vki_rep_protocol_entity_get {
   enum vki_rep_protocol_requestid rpr_request;
   vki_repcache_entity_id_t rpr_entityid;
   vki_uint32_t rpr_object;
};
struct vki_rep_protocol_entity_get_child {
   enum vki_rep_protocol_requestid rpr_request;
   vki_repcache_entity_id_t rpr_entityid;
   vki_repcache_entity_id_t rpr_childid;
   char rpr_name[VKI_REP_PROTOCOL_NAME_LEN];
};
struct vki_rep_protocol_entity_parent {
   enum vki_rep_protocol_requestid rpr_request;
   vki_repcache_entity_id_t rpr_entityid;
   vki_repcache_entity_id_t rpr_outid;
};
struct vki_rep_protocol_entity_root {
   enum vki_rep_protocol_requestid rpr_request;
   vki_repcache_entity_id_t rpr_entityid;
   vki_repcache_entity_id_t rpr_outid;
};
struct vki_rep_protocol_entity_reset {
   enum vki_rep_protocol_requestid rpr_request;
   vki_repcache_entity_id_t rpr_entityid;
};
struct vki_rep_protocol_entity_teardown {
   enum vki_rep_protocol_requestid rpr_request;
   vki_repcache_entity_id_t rpr_entityid;
};
struct vki_rep_protocol_iter_read {
   enum vki_rep_protocol_requestid rpr_request;
   vki_uint32_t rpr_iterid;
   vki_uint32_t rpr_sequence;
   vki_repcache_entity_id_t rpr_entityid;
};
struct vki_rep_protocol_iter_read_value {
   enum vki_rep_protocol_requestid rpr_request;
   vki_uint32_t rpr_iterid;
   vki_uint32_t rpr_sequence;
};
struct vki_rep_protocol_iter_request {
   enum vki_rep_protocol_requestid rpr_request;
   vki_uint32_t rpr_iterid;
};
struct vki_rep_protocol_iter_start {
   enum vki_rep_protocol_requestid rpr_request;
   vki_uint32_t rpr_iterid;
   vki_repcache_entity_id_t rpr_entity;
   vki_uint32_t rpr_itertype;
   vki_uint32_t rpr_flags;
   char rpr_pattern[VKI_REP_PROTOCOL_NAME_LEN];
};
struct vki_rep_protocol_property_request {
   enum vki_rep_protocol_requestid rpr_request;
   vki_repcache_entity_id_t rpr_entityid;
};




#endif /* __VKI_SOLARIS_REPCACHE_H */
