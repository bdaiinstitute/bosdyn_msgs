# AUTOMATICALLY GENERATED BY PROTO CONVERSION

# UNKNOWN should never be used.
# An internal PointCloudService issue has happened if UNKNOWN is set.
# None of the other fields are filled out.
int8 STATUS_UNKNOWN=0

# Call succeeded at filling out all the fields.
int8 STATUS_OK=1

# Failed to fill out PointCloudSource. All the other fields are not filled out.
int8 STATUS_SOURCE_DATA_ERROR=2

# There was a problem with the point cloud data.  Only the PointCloudSource is filled out.
int8 STATUS_POINT_CLOUD_DATA_ERROR=3

# Provided point cloud source was not found. One
int8 STATUS_UNKNOWN_SOURCE=4

int8 value
