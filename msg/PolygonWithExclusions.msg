# AUTOMATICALLY GENERATED BY PROTO CONVERSION

# Represents a region in the XY plane that consists of a single polygon
# from which polygons representing exclusion areas may be subtracted.
#
# A point is considered to be inside the region if it is inside the inclusion
# polygon and not inside any of the exclusion polygons.
#
# Note that while this can be used to represent a polygon with holes, that
# exclusions are not necessarily holes:  An exclusion polygon may not be
# completely inside the inclusion polygon.

bosdyn_msgs/Polygon inclusion
bool inclusion_is_set
bosdyn_msgs/Polygon[] exclusions
