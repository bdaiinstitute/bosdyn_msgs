# AUTOMATICALLY GENERATED BY PROTO CONVERSION

# Result of the topology processing RPC. If successful, contains a subgraph of new
# waypoints or edges created by this process.

# Standard message header.
bosdyn_msgs/ResponseHeader header
bool header_is_set

# Result of the processing.
bosdyn_msgs/ProcessTopologyResponseStatus status

# This graph contains the new edge(s) created by map processing. Note that these edges will be
# annotated with their creation method. Note that several subgraphs may be returned via
# streaming as the map is processed.
bosdyn_msgs/Graph new_subgraph
bool new_subgraph_is_set

# If modify_map_on_server was set to true in the request, then the map currently on the server
# was modified using map processing. If this is set to false, then either an error occurred during
# processing, or modify_map_on_server was set to false in the request.
# When map_on_server_was_modified is set to false, the client is expected to upload the results
# back to the server to commit the changes.
bool map_on_server_was_modified
# When there are missing waypoint snapshots, these are the IDs of the missing snapshots.
# Upload them to continue.
string[] missing_snapshot_ids
# When there are missing waypoints, these are the IDs of the missing waypoints. Upload them
# to continue.
string[] missing_waypoint_ids
# If true, the processing timed out. Note that this is not considered an error. Run topology processing again
# to continue adding edges.
bool timed_out
