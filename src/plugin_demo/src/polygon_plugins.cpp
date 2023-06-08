#include <pluginlib/class_list_macros.h>
#include <plugin_demo/polygon_base.h>
#include <plugin_demo/polygon_plugins.h>

PLUGINLIB_EXPORT_CLASS(polygon_plugins::Triangle, polygon_base::RegularPolygon)
PLUGINLIB_EXPORT_CLASS(polygon_plugins::Square, polygon_base::RegularPolygon)