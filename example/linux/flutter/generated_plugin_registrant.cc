//
//  Generated file. Do not edit.
//

#include "generated_plugin_registrant.h"

#include <flutter_js/flutter_js_plugin.h>
#include <flutter_js_linux/flutter_js_plugin.h>
#include <flutter_qjs/flutter_qjs_plugin.h>

void fl_register_plugins(FlPluginRegistry* registry) {
  g_autoptr(FlPluginRegistrar) flutter_js_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "FlutterJsPlugin");
  flutter_js_plugin_register_with_registrar(flutter_js_registrar);
  g_autoptr(FlPluginRegistrar) flutter_js_linux_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "FlutterJsPlugin");
  flutter_js_plugin_register_with_registrar(flutter_js_linux_registrar);
  g_autoptr(FlPluginRegistrar) flutter_qjs_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "FlutterQjsPlugin");
  flutter_qjs_plugin_register_with_registrar(flutter_qjs_registrar);
}
