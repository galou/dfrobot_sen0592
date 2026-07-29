// Auto generated code by esphome
// ========== AUTO GENERATED INCLUDE BLOCK BEGIN ===========
#include "esphome.h"
using namespace esphome;
alignas(logger::Logger) static unsigned char logger__logger_logger_id__pstorage[sizeof(logger::Logger)];
static logger::Logger *const logger_logger_id = reinterpret_cast<logger::Logger *>(logger__logger_logger_id__pstorage);
#ifndef __PICOLIBC__
using std::isnan;
#endif
using std::min;
using std::max;
#include <new>
static char esphome_app_name_buf[] = "atomlite-distance-XXXXXX";
static char esphome_app_friendly_name_buf[] = "";
using namespace sensor;
alignas(web_server_base::WebServerBase) static unsigned char web_server_base__web_server_base_webserverbase_id__pstorage[sizeof(web_server_base::WebServerBase)];
static web_server_base::WebServerBase *const web_server_base_webserverbase_id = reinterpret_cast<web_server_base::WebServerBase *>(web_server_base__web_server_base_webserverbase_id__pstorage);
alignas(captive_portal::CaptivePortal) static unsigned char captive_portal__captive_portal_captiveportal_id__pstorage[sizeof(captive_portal::CaptivePortal)];
static captive_portal::CaptivePortal *const captive_portal_captiveportal_id = reinterpret_cast<captive_portal::CaptivePortal *>(captive_portal__captive_portal_captiveportal_id__pstorage);
alignas(wifi::WiFiComponent) static unsigned char wifi__wifi_wificomponent_id__pstorage[sizeof(wifi::WiFiComponent)];
static wifi::WiFiComponent *const wifi_wificomponent_id = reinterpret_cast<wifi::WiFiComponent *>(wifi__wifi_wificomponent_id__pstorage);
alignas(mdns::MDNSComponent) static unsigned char mdns__mdns_mdnscomponent_id__pstorage[sizeof(mdns::MDNSComponent)];
static mdns::MDNSComponent *const mdns_mdnscomponent_id = reinterpret_cast<mdns::MDNSComponent *>(mdns__mdns_mdnscomponent_id__pstorage);
alignas(network::NetworkComponent) static unsigned char network__network_networkcomponent_id__pstorage[sizeof(network::NetworkComponent)];
static network::NetworkComponent *const network_networkcomponent_id = reinterpret_cast<network::NetworkComponent *>(network__network_networkcomponent_id__pstorage);
alignas(esphome::ESPHomeOTAComponent) static unsigned char esphome__esphome_esphomeotacomponent_id__pstorage[sizeof(esphome::ESPHomeOTAComponent)];
static esphome::ESPHomeOTAComponent *const esphome_esphomeotacomponent_id = reinterpret_cast<esphome::ESPHomeOTAComponent *>(esphome__esphome_esphomeotacomponent_id__pstorage);
alignas(web_server::WebServerOTAComponent) static unsigned char web_server__web_server_webserverotacomponent_id__pstorage[sizeof(web_server::WebServerOTAComponent)];
static web_server::WebServerOTAComponent *const web_server_webserverotacomponent_id = reinterpret_cast<web_server::WebServerOTAComponent *>(web_server__web_server_webserverotacomponent_id__pstorage);
alignas(preferences::IntervalSyncer) static unsigned char preferences__preferences_intervalsyncer_id__pstorage[sizeof(preferences::IntervalSyncer)];
static preferences::IntervalSyncer *const preferences_intervalsyncer_id = reinterpret_cast<preferences::IntervalSyncer *>(preferences__preferences_intervalsyncer_id__pstorage);
alignas(safe_mode::SafeModeComponent) static unsigned char safe_mode__safe_mode_safemodecomponent_id__pstorage[sizeof(safe_mode::SafeModeComponent)];
static safe_mode::SafeModeComponent *const safe_mode_safemodecomponent_id = reinterpret_cast<safe_mode::SafeModeComponent *>(safe_mode__safe_mode_safemodecomponent_id__pstorage);
alignas(api::APIServer) static unsigned char api__api_apiserver_id__pstorage[sizeof(api::APIServer)];
static api::APIServer *const api_apiserver_id = reinterpret_cast<api::APIServer *>(api__api_apiserver_id__pstorage);
using namespace api;
alignas(web_server::WebServer) static unsigned char web_server__web_server_webserver_id__pstorage[sizeof(web_server::WebServer)];
static web_server::WebServer *const web_server_webserver_id = reinterpret_cast<web_server::WebServer *>(web_server__web_server_webserver_id__pstorage);
constexpr uint8_t ESPHOME_WEBSERVER_INDEX_HTML[174] PROGMEM = {60, 33, 68, 79, 67, 84, 89, 80, 69, 32, 104, 116, 109, 108, 62, 60, 104, 116, 109, 108, 62, 60, 104, 101, 97, 100, 62, 60, 109, 101, 116, 97, 32, 99, 104, 97, 114, 115, 101, 116, 61, 85, 84, 70, 45, 56, 62, 60, 108, 105, 110, 107, 32, 114, 101, 108, 61, 105, 99, 111, 110, 32, 104, 114, 101, 102, 61, 100, 97, 116, 97, 58, 62, 60, 47, 104, 101, 97, 100, 62, 60, 98, 111, 100, 121, 62, 60, 101, 115, 112, 45, 97, 112, 112, 62, 60, 47, 101, 115, 112, 45, 97, 112, 112, 62, 60, 115, 99, 114, 105, 112, 116, 32, 115, 114, 99, 61, 34, 104, 116, 116, 112, 115, 58, 47, 47, 111, 105, 46, 101, 115, 112, 104, 111, 109, 101, 46, 105, 111, 47, 118, 51, 47, 119, 119, 119, 46, 106, 115, 34, 62, 60, 47, 115, 99, 114, 105, 112, 116, 62, 60, 47, 98, 111, 100, 121, 62, 60, 47, 104, 116, 109, 108, 62};
constexpr size_t ESPHOME_WEBSERVER_INDEX_HTML_SIZE = 174;
using namespace json;
using namespace uart;
alignas(uart::IDFUARTComponent) static unsigned char uart__uart_bus__pstorage[sizeof(uart::IDFUARTComponent)];
static uart::IDFUARTComponent *const uart_bus = reinterpret_cast<uart::IDFUARTComponent *>(uart__uart_bus__pstorage);
alignas(esp32::ESP32InternalGPIOPin) static unsigned char esp32__esp32_esp32internalgpiopin_id_2__pstorage[sizeof(esp32::ESP32InternalGPIOPin)];
static esp32::ESP32InternalGPIOPin *const esp32_esp32internalgpiopin_id_2 = reinterpret_cast<esp32::ESP32InternalGPIOPin *>(esp32__esp32_esp32internalgpiopin_id_2__pstorage);
alignas(esp32::ESP32InternalGPIOPin) static unsigned char esp32__esp32_esp32internalgpiopin_id__pstorage[sizeof(esp32::ESP32InternalGPIOPin)];
static esp32::ESP32InternalGPIOPin *const esp32_esp32internalgpiopin_id = reinterpret_cast<esp32::ESP32InternalGPIOPin *>(esp32__esp32_esp32internalgpiopin_id__pstorage);
using namespace modbus;
alignas(modbus::ModbusClientHub) static unsigned char modbus__modbus_bus__pstorage[sizeof(modbus::ModbusClientHub)];
static modbus::ModbusClientHub *const modbus_bus = reinterpret_cast<modbus::ModbusClientHub *>(modbus__modbus_bus__pstorage);
alignas(modbus_controller::ModbusController) static unsigned char modbus_controller__sen0592__pstorage[sizeof(modbus_controller::ModbusController)];
static modbus_controller::ModbusController *const sen0592 = reinterpret_cast<modbus_controller::ModbusController *>(modbus_controller__sen0592__pstorage);
alignas(modbus_controller::ModbusSensor) static unsigned char modbus_controller__distance_mm__pstorage[sizeof(modbus_controller::ModbusSensor)];
static modbus_controller::ModbusSensor *const distance_mm = reinterpret_cast<modbus_controller::ModbusSensor *>(modbus_controller__distance_mm__pstorage);
alignas(improv_serial::ImprovSerialComponent) static unsigned char improv_serial__improv_serial_improvserialcomponent_id__pstorage[sizeof(improv_serial::ImprovSerialComponent)];
static improv_serial::ImprovSerialComponent *const improv_serial_improvserialcomponent_id = reinterpret_cast<improv_serial::ImprovSerialComponent *>(improv_serial__improv_serial_improvserialcomponent_id__pstorage);
#undef yield
#define yield() esphome::yield()
#undef millis
#define millis() esphome::millis()
#undef micros
#define micros() esphome::micros()
#undef delay
#define delay(x) esphome::delay(x)
#undef delayMicroseconds
#define delayMicroseconds(x) esphome::delayMicroseconds(x)
static constexpr size_t ESPHOME_LOOPING_COMPONENT_COUNT = \
  (1 * HasLoopOverride<logger::Logger>::value) + \
  (1 * HasLoopOverride<captive_portal::CaptivePortal>::value) + \
  (1 * HasLoopOverride<wifi::WiFiComponent>::value) + \
  (1 * HasLoopOverride<mdns::MDNSComponent>::value) + \
  (1 * HasLoopOverride<network::NetworkComponent>::value) + \
  (1 * HasLoopOverride<esphome::ESPHomeOTAComponent>::value) + \
  (1 * HasLoopOverride<preferences::IntervalSyncer>::value) + \
  (1 * HasLoopOverride<safe_mode::SafeModeComponent>::value) + \
  (1 * HasLoopOverride<web_server::WebServerOTAComponent>::value) + \
  (1 * HasLoopOverride<api::APIServer>::value) + \
  (1 * HasLoopOverride<web_server::WebServer>::value) + \
  (1 * HasLoopOverride<uart::IDFUARTComponent>::value) + \
  (1 * HasLoopOverride<modbus::ModbusClientHub>::value) + \
  (1 * HasLoopOverride<modbus_controller::ModbusController>::value) + \
  (1 * HasLoopOverride<modbus_controller::ModbusSensor>::value) + \
  (1 * HasLoopOverride<improv_serial::ImprovSerialComponent>::value);
namespace esphome {
static const char COMP_SRC_TABLE_STR_0[] PROGMEM = "logger";
static const char COMP_SRC_TABLE_STR_1[] PROGMEM = "captive_portal";
static const char COMP_SRC_TABLE_STR_2[] PROGMEM = "wifi";
static const char COMP_SRC_TABLE_STR_3[] PROGMEM = "mdns";
static const char COMP_SRC_TABLE_STR_4[] PROGMEM = "network";
static const char COMP_SRC_TABLE_STR_5[] PROGMEM = "esphome.ota";
static const char COMP_SRC_TABLE_STR_6[] PROGMEM = "preferences";
static const char COMP_SRC_TABLE_STR_7[] PROGMEM = "safe_mode";
static const char COMP_SRC_TABLE_STR_8[] PROGMEM = "web_server.ota";
static const char COMP_SRC_TABLE_STR_9[] PROGMEM = "api";
static const char COMP_SRC_TABLE_STR_10[] PROGMEM = "web_server";
static const char COMP_SRC_TABLE_STR_11[] PROGMEM = "uart";
static const char COMP_SRC_TABLE_STR_12[] PROGMEM = "modbus";
static const char COMP_SRC_TABLE_STR_13[] PROGMEM = "modbus_controller";
static const char COMP_SRC_TABLE_STR_14[] PROGMEM = "modbus_controller.sensor";
static const char COMP_SRC_TABLE_STR_15[] PROGMEM = "improv_serial";
static const char *const COMP_SRC_TABLE[] PROGMEM = {COMP_SRC_TABLE_STR_0, COMP_SRC_TABLE_STR_1, COMP_SRC_TABLE_STR_2, COMP_SRC_TABLE_STR_3, COMP_SRC_TABLE_STR_4, COMP_SRC_TABLE_STR_5, COMP_SRC_TABLE_STR_6, COMP_SRC_TABLE_STR_7, COMP_SRC_TABLE_STR_8, COMP_SRC_TABLE_STR_9, COMP_SRC_TABLE_STR_10, COMP_SRC_TABLE_STR_11, COMP_SRC_TABLE_STR_12, COMP_SRC_TABLE_STR_13, COMP_SRC_TABLE_STR_14, COMP_SRC_TABLE_STR_15};
const LogString *component_source_lookup(uint8_t index) {
  if (index == 0 || index > 16) return LOG_STR("<unknown>");
  return reinterpret_cast<const LogString *>(
    progmem_read_ptr(&COMP_SRC_TABLE[index - 1]));
}
}  // namespace esphome
namespace esphome {
static const char *const ENTITY_UOM_TABLE[] PROGMEM = {"mm"};
const char *entity_uom_lookup(uint8_t index) {
  if (index == 0 || index > 1) return "";
  return progmem_read_ptr(&ENTITY_UOM_TABLE[index - 1]);
}

}  // namespace esphome
// ========== AUTO GENERATED INCLUDE BLOCK END ==========="

void setup() {
  // ========== AUTO GENERATED CODE BEGIN ===========
  // logger:
  //   level: DEBUG
  //   logs:
  //     sensor: WARN
  //     text_sensor: WARN
  //   id: logger_logger_id
  //   baud_rate: 115200
  //   tx_buffer_size: 512
  //   deassert_rts_dtr: false
  //   task_log_buffer_size: 768
  //   hardware_uart: UART0
  //   runtime_tag_levels: false
  new(logger_logger_id) logger::Logger(115200);
  logger_logger_id->create_pthread_key();
  logger_logger_id->set_uart_selection(logger::UART_SELECTION_UART0);
  logger_logger_id->pre_setup();
  logger_logger_id->set_log_level(ESPHOME_LOG_LEVEL_DEBUG);
  // network:
  //   id: network_networkcomponent_id
  //   enable_ipv6: false
  //   min_ipv6_addr_count: 0
  // esphome:
  //   name: atomlite-distance
  //   name_add_mac_suffix: true
  //   platformio_options:
  //     build_flags:
  //       - -D CORE_DEBUG_LEVEL=0
  //       - -D ARDUINO_LOG_LEVEL=0
  //   min_version: 2026.7.3
  //   build_path: build/atomlite-distance
  //   friendly_name: ''
  //   build_flags: []
  //   environment_variables: {}
  //   includes: []
  //   includes_c: []
  //   libraries: []
  //   merge_warnings: true
  //   debug_scheduler: false
  //   areas: []
  //   devices: []
  new (&App) Application();
  App.pre_setup(esphome_app_name_buf, 24, esphome_app_friendly_name_buf, 0);
  App.looping_components_.init(ESPHOME_LOOPING_COMPONENT_COUNT);
  // sensor:
  logger_logger_id->set_log_level("sensor", ESPHOME_LOG_LEVEL_WARN);
  logger_logger_id->set_log_level("text_sensor", ESPHOME_LOG_LEVEL_WARN);
  App.register_component_(logger_logger_id, 1);
  // web_server_base:
  //   id: web_server_base_webserverbase_id
  new(web_server_base_webserverbase_id) web_server_base::WebServerBase();
  web_server_base::global_web_server_base = web_server_base_webserverbase_id;
  // captive_portal:
  //   id: captive_portal_captiveportal_id
  //   web_server_base_id: web_server_base_webserverbase_id
  //   compression: gzip
  new(captive_portal_captiveportal_id) captive_portal::CaptivePortal(web_server_base_webserverbase_id);
  App.register_component_(captive_portal_captiveportal_id, 2);
  // wifi:
  //   reboot_timeout: 15min
  //   output_power: 15.0
  //   power_save_mode: NONE
  //   ap:
  //     id: wifi_wifiap_id
  //     ap_timeout: 90s
  //   id: wifi_wificomponent_id
  //   domain: .local
  //   fast_connect:
  //     enabled: false
  //     storage: flash
  //   enable_btm: false
  //   enable_rrm: false
  //   passive_scan: false
  //   enable_on_boot: true
  //   post_connect_roaming: true
  //   min_auth_mode: WPA2
  //   use_address: atomlite-distance.local
  new(wifi_wificomponent_id) wifi::WiFiComponent();
  {
  wifi::WiFiAP wifi_wifiap_id = wifi::WiFiAP();
  wifi_wificomponent_id->set_ap(wifi_wifiap_id);
  }
  wifi_wificomponent_id->set_ap_timeout(90000);
  wifi_wificomponent_id->set_reboot_timeout(900000);
  wifi_wificomponent_id->set_power_save_mode(wifi::WIFI_POWER_SAVE_NONE);
  wifi_wificomponent_id->set_min_auth_mode(wifi::WIFI_MIN_AUTH_MODE_WPA2);
  wifi_wificomponent_id->set_output_power(15.0f);
  App.register_component_(wifi_wificomponent_id, 3);
  // mdns:
  //   id: mdns_mdnscomponent_id
  //   disabled: false
  //   services: []
  new(mdns_mdnscomponent_id) mdns::MDNSComponent();
  App.register_component_(mdns_mdnscomponent_id, 4);
  new(network_networkcomponent_id) network::NetworkComponent();
  App.register_component_(network_networkcomponent_id, 5);
  // ota:
  // ota.esphome:
  //   platform: esphome
  //   id: esphome_esphomeotacomponent_id
  //   version: 2
  //   port: 3232
  //   allow_partition_access: false
  new(esphome_esphomeotacomponent_id) esphome::ESPHomeOTAComponent();
  esphome_esphomeotacomponent_id->set_port(3232);
  App.register_component_(esphome_esphomeotacomponent_id, 6);
  // ota.web_server:
  //   platform: web_server
  //   id: web_server_webserverotacomponent_id
  new(web_server_webserverotacomponent_id) web_server::WebServerOTAComponent();
  // preferences:
  //   id: preferences_intervalsyncer_id
  //   flash_write_interval: 60s
  new(preferences_intervalsyncer_id) preferences::IntervalSyncer();
  preferences_intervalsyncer_id->set_write_interval(60000);
  App.register_component_(preferences_intervalsyncer_id, 7);
  // safe_mode:
  //   id: safe_mode_safemodecomponent_id
  //   boot_is_good_after: 1min
  //   disabled: false
  //   num_attempts: 10
  //   reboot_timeout: 5min
  //   storage: flash
  new(safe_mode_safemodecomponent_id) safe_mode::SafeModeComponent();
  App.register_component_(safe_mode_safemodecomponent_id, 8);
  if (safe_mode_safemodecomponent_id->should_enter_safe_mode(10, 300000, 60000, true)) return;
  App.register_component_(web_server_webserverotacomponent_id, 9);
  // api:
  //   reboot_timeout: 0s
  //   id: api_apiserver_id
  //   port: 6053
  //   batch_delay: 100ms
  //   custom_services: false
  //   homeassistant_services: false
  //   homeassistant_states: false
  //   listen_backlog: 4
  //   max_connections: 5
  //   max_send_queue: 8
  new(api_apiserver_id) api::APIServer();
  App.register_component_(api_apiserver_id, 10);
  api_apiserver_id->set_port(6053);
  api_apiserver_id->set_reboot_timeout(0);
  api_apiserver_id->set_batch_delay(100);
  api_apiserver_id->set_listen_backlog(4);
  // web_server:
  //   include_internal: false
  //   version: 3
  //   id: web_server_webserver_id
  //   port: 80
  //   enable_private_network_access: false
  //   web_server_base_id: web_server_base_webserverbase_id
  //   log: true
  //   compression: gzip
  //   css_url: ''
  //   js_url: https:oi.esphome.io/v3/www.js
  new(web_server_webserver_id) web_server::WebServer(web_server_base_webserverbase_id);
  App.register_component_(web_server_webserver_id, 11);
  web_server_base_webserverbase_id->set_port(80);
  web_server_webserver_id->set_expose_log(true);
  web_server_webserver_id->set_include_internal(false);
  // json:
  //   {}
  // substitutions:
  //   devicename: atomlite-distance
  // esp32:
  //   board: m5stack-atom
  //   framework:
  //     type: arduino
  //     version: 3.3.10
  //     sdkconfig_options: {}
  //     log_level: ERROR
  //     advanced:
  //       compiler_optimization: SIZE
  //       enable_idf_experimental_features: false
  //       enable_lwip_assert: true
  //       ignore_efuse_custom_mac: false
  //       ignore_efuse_mac_crc: false
  //       sram1_as_iram: false
  //       enable_lwip_mdns_queries: true
  //       enable_lwip_bridge_interface: false
  //       enable_lwip_tcpip_core_locking: true
  //       enable_lwip_check_thread_safety: true
  //       disable_libc_locks_in_iram: true
  //       disable_vfs_support_termios: true
  //       disable_vfs_support_select: true
  //       disable_vfs_support_dir: true
  //       freertos_in_iram: false
  //       ringbuf_in_iram: false
  //       heap_in_iram: false
  //       execute_from_psram: false
  //       loop_task_stack_size: 8192
  //       enable_ota_rollback: true
  //       enable_ota_downgrade_protection: false
  //       use_full_certificate_bundle: false
  //       include_builtin_idf_components: []
  //       enable_full_printf: false
  //       disable_debug_stubs: true
  //       disable_ocd_aware: true
  //       disable_usb_serial_jtag_secondary: true
  //       disable_dev_null_vfs: true
  //       disable_mbedtls_peer_cert: true
  //       disable_mbedtls_pkcs7: true
  //       disable_regi2c_in_iram: true
  //       adc_oneshot_in_iram: false
  //       disable_fatfs: true
  //     components: []
  //   flash_size: 4MB
  //   watchdog_timeout: 5s
  //   variant: ESP32
  //   cpu_frequency: 240MHZ
  // uart:
  //   id: uart_bus
  //   rx_pin:
  //     number: 22
  //     mode:
  //       input: true
  //       output: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id
  //     inverted: false
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   tx_pin:
  //     number: 19
  //     mode:
  //       output: true
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id_2
  //     inverted: false
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   baud_rate: 115200
  //   rx_buffer_size: 256
  //   rx_timeout: 2
  //   stop_bits: 1
  //   data_bits: 8
  //   parity: NONE
  new(uart_bus) uart::IDFUARTComponent();
  App.register_component_(uart_bus, 12);
  uart_bus->set_baud_rate(115200);
  new(esp32_esp32internalgpiopin_id_2) esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_2->set_pin(::GPIO_NUM_19);
  esp32_esp32internalgpiopin_id_2->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_2->set_flags(gpio::Flags::FLAG_OUTPUT);
  uart_bus->set_tx_pin(esp32_esp32internalgpiopin_id_2);
  new(esp32_esp32internalgpiopin_id) esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id->set_pin(::GPIO_NUM_22);
  esp32_esp32internalgpiopin_id->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id->set_flags(gpio::Flags::FLAG_INPUT);
  uart_bus->set_rx_pin(esp32_esp32internalgpiopin_id);
  uart_bus->set_rx_buffer_size(256);
  uart_bus->set_rx_full_threshold(114);
  uart_bus->set_rx_timeout(2);
  uart_bus->set_stop_bits(1);
  uart_bus->set_data_bits(8);
  uart_bus->set_parity(uart::UART_CONFIG_PARITY_NONE);
  // modbus:
  //   id: modbus_bus
  //   uart_id: uart_bus
  //   send_wait_time: 2000ms
  //   turnaround_time: 600ms
  //   role: client
  new(modbus_bus) modbus::ModbusClientHub();
  App.register_component_(modbus_bus, 13);
  modbus_bus->set_uart_parent(uart_bus);
  modbus_bus->set_send_wait_time(2000);
  modbus_bus->set_turnaround_time(600);
  // modbus_controller:
  //   id: sen0592
  //   modbus_id: modbus_bus
  //   address: 0x01
  //   setup_priority: -10.0
  //   allow_duplicate_commands: false
  //   command_throttle: 0ms
  //   max_cmd_retries: 4
  //   offline_skip_updates: 0
  //   update_interval: 60s
  new(sen0592) modbus_controller::ModbusController();
  sen0592->set_allow_duplicate_commands(false);
  sen0592->set_command_throttle(0);
  sen0592->set_max_cmd_retries(4);
  sen0592->set_offline_skip_updates(0);
  sen0592->set_address(0x01);
  sen0592->set_setup_priority(-10.0f);
  sen0592->set_update_interval(60000);
  App.register_component_(sen0592, 14);
  sen0592->set_parent(modbus_bus);
  sen0592->set_address(0x01);
  // sensor.modbus_controller:
  //   platform: modbus_controller
  //   modbus_controller_id: sen0592
  //   id: distance_mm
  //   name: SEN0592 Distance
  //   register_type: holding
  //   address: 256
  //   value_type: U_WORD
  //   unit_of_measurement: mm
  //   accuracy_decimals: 0
  //   disabled_by_default: false
  //   force_update: false
  //   bitmask: 0xFFFFFFFF
  //   skip_updates: 0
  //   force_new_range: false
  //   response_size: 0
  //   register_count: 0
  new(distance_mm) modbus_controller::ModbusSensor(modbus::ModbusRegisterType::HOLDING, 256, 0, 0xFFFFFFFF, modbus::helpers::SensorValueType::U_WORD, 1, 0, false);
  App.register_component_(distance_mm, 15);
  distance_mm->set_accuracy_decimals(0);
  App.register_sensor(distance_mm, "SEN0592 Distance", 2253100669UL, 256);  // uom:mm
  sen0592->add_sensor_item(distance_mm);
  // improv_serial:
  //   id: improv_serial_improvserialcomponent_id
  new(improv_serial_improvserialcomponent_id) improv_serial::ImprovSerialComponent();
  App.register_component_(improv_serial_improvserialcomponent_id, 16);
  // socket:
  //   implementation: bsd_sockets
  // md5:
  // sha256:
  //   {}
  // web_server_idf:
  //   {}
  // =========== AUTO GENERATED CODE END ============
  App.setup();
}

void loop() {
  App.loop();
}
