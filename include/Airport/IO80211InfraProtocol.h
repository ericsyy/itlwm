//
//  IO80211InfraProtocol.h
//  itlwm
//
//  Created by qcwap on 2023/6/14.
//  Copyright © 2023 钟先耀. All rights reserved.
//

#ifndef IO80211InfraProtocol_h
#define IO80211InfraProtocol_h

#include <IOKit/IOService.h>
#include <Airport/apple80211_var.h>
#include <Airport/apple80211_ioctl.h>

struct apple80211_sta_ie_data;
struct apple80211_sta_stats_data;
struct apple80211_rssi_bounds_data;
struct apple80211_rate_set_data;
struct apple80211_power_debug_info;
struct apple80211_bgscan_cached_network_data_list;
struct apple80211_private_mac_data;
struct apple80211_dbg_guard_time_params;
struct apple80211_ranging_enable_request_t;
struct apple80211_gas_result_t;
struct apple80211_ranging_start_request_t;
struct apple80211_leaky_ap_setting;
struct apple80211_rsdb_capability;
struct apple80211_tko_params;
struct apple80211_tko_dump;
struct apple80211_thermal_index_t;
struct apple80211_btcoex_max_nss_for_ap_data;
struct apple80211_btcoex_2g_chain_disable;
struct apple80211_power_budget_t;
struct apple80211_ranging_capabilities_t;
struct apple80211_suppress_scans_t;
struct apple80211_host_ap_mode_hidden_t;
struct apple80211_lqm_config_t;
struct apple80211_trap_mini_dump_data;
struct apple80211_beacon_info_t;
struct apple80211_softap_params;
struct apple80211_chip_power_limit;
struct apple80211_softap_stats;
struct apple80211_nss_data;
struct apple80211_hw_mac_address;
struct apple80211_he_mcs_index_set_data;
struct appl80211_chip_diags_data;
struct apple80211_hp2p_ctrl;
struct apple80211_assoc_ready;
struct apple80211_txrx_chain_info;
struct apple80211_mimo_status;
struct apple80211_dynsar_detail;
struct apple80211_mac_randomisation_status;
struct apple80211_colocated_network_scope_id
{
    uint32_t version;
    uint32_t id1;
    uint32_t id2;
};
struct apple80211_slow_wifi_feature_enabled;
struct apple80211_interface_cca_data;
struct apple80211_timesync_info;
struct apple80211_sensing_data_t;
struct apple80211_country_band_support;
struct apple80211_fw_hot_channels;
struct apple80211_low_latency_info;
struct apple80211_beacon_msg;
struct apple80211_wcl_traffic_counters;
struct apple80211_ssid_transition_feature_enabled;
typedef enum {
    
} p2pStatusForScan;
struct apple80211ChannelInfo;
struct apple80211_p2p_steering_metrics;;
struct apple80211_rsn_xe_data;
struct apple80211_sib_coex_status;
struct apple80211_extended_bss_info;
struct apple80211_wcl_low_latency_stats;
struct apple80211_noise_per_ant_t;
struct apple80211_blocked_bands;
struct apple80211_disassoc_data;
struct apple80211_bgscan_data;
struct apple80211_sta_authorize_data;
struct apple80211_sta_disassoc_data;
struct apple80211_rsn_conf_data;
struct apple80211_country_channel_data;
struct apple80211_awdl_forced_roam_config;
struct apple80211_offload_arp_data;
struct apple80211_offload_ndp_data;
struct apple80211_offload_scan_data;
struct apple80211_gas_query_t;
struct apple80211_gas_peer_t;
struct apple80211_btcoex_profile;
struct apple80211_btcoex_profile_active_data;
struct apple80211_trap_info_data;
struct apple80211_he_capability;
struct apple80211_pmk;
struct apple80211_wow_test_data;
struct apple80211_reset_command;
struct apple80211_crash_command;
struct apple80211_ranging_authenticate_request_t;
struct apple80211_softap_csa_params;
struct apple80211_softap_wifi_network_info;
struct apple80211_scan_control_params;
struct apple80211_usb_host_notification_data;
struct apple80211_set_mac_address;
struct apple80211_abort_scan;
struct apple80211_set_property_unserialized_data;
struct apple80211_roam_cache_data;
struct apple80211_pm_mode;
struct apple80211_wifi_assertion_data;
struct apple80211_capture_debug_info_t;
struct apple80211_linkdown_debounce_status;
struct apple80211_softap_extended_capabilities_info;
struct apple80211_sensing_enable_t;
struct apple80211_sensing_disable_t;
struct apple80211_nan_link_association_info;
struct apple80211_6G_mode;
struct apple80211_leave_network;
struct apple80211_reassoc;
struct apple80211_set_roam_lock;
struct apple80211_roam_profile_config;
struct apple80211_roam_profile_configV1;
struct apple80211_user_roam_cache;
struct apple80211_set_multi_ap_env;
struct apple80211_wcl_real_time_mode;
struct apple80211_wcl_garp_mode;
struct triggerCC;
struct apple80211ScanRequest;
struct apple80211_assoc_candidates;
struct apple80211_wcl_protect_ip_mode;
struct scanHomeAndAwayTime;
struct apple80211_wcl_voluntary_network_disconnect;
struct apple80211_wcl_update_link_state;
struct apple80211_wcl_ulofdma_state;
struct apple80211_wcl_action_frame;
struct apple80211_wcl_real_time_policy;
struct apple80211_feature_flags;
struct apple80211_dhcp_renewal_data;
struct apple80211_network_flags;
struct apple80211_battery_ps_config;
struct apple80211_mimo_config;
struct apple80211_bg_motion_profile;
struct apple80211_bg_network;
struct apple80211_bg_scan;
struct apple80211_bg_params;
typedef UInt apple80211_offload_tcpka_enable_t;

class IO80211InfraProtocol : public IO80211InfraInterface {
    OSDeclareAbstractStructors(IO80211InfraProtocol)
    
public:
    virtual IOReturn getSSID(apple80211_ssid_data *) = 0;
    virtual IOReturn getAUTH_TYPE(apple80211_authtype_data *) = 0;
    virtual IOReturn getCHANNEL(apple80211_channel_data *) = 0;
    virtual IOReturn getPOWERSAVE(apple80211_powersave_data *) = 0;
    virtual IOReturn getTXPOWER(apple80211_txpower_data *) = 0;
    virtual IOReturn getRATE(apple80211_rate_data *) = 0;
    virtual IOReturn getBSSID(apple80211_bssid_data *) = 0;
    virtual IOReturn getSCAN_RESULT(apple80211_scan_result *) = 0;
    virtual IOReturn getSTATE(apple80211_state_data *) = 0;
    virtual IOReturn getPHY_MODE(apple80211_phymode_data *) = 0;
    virtual IOReturn getOP_MODE(apple80211_opmode_data *) = 0;
    virtual IOReturn getRSSI(apple80211_rssi_data *) = 0;
    virtual IOReturn getNOISE(apple80211_noise_data *) = 0;
    virtual IOReturn getSUPPORTED_CHANNELS(apple80211_sup_channel_data *) = 0;
    virtual IOReturn getLOCALE(apple80211_locale_data *) = 0;
    virtual IOReturn getDEAUTH(apple80211_deauth_data *) = 0;
    virtual IOReturn getRATE_SET(apple80211_rate_set_data *) = 0;
    virtual IOReturn getDTIM_INT(apple80211_dtim_int_data *) = 0;
    virtual IOReturn getSTATION_LIST(apple80211_sta_data *) = 0;
    virtual IOReturn getRSN_IE(apple80211_rsn_ie_data *) = 0;
    virtual IOReturn getAP_IE_LIST(apple80211_ap_ie_data *) = 0;
    virtual IOReturn getSTATS(apple80211_stats_data *) = 0;
    virtual IOReturn getASSOCIATION_STATUS(apple80211_assoc_status_data *) = 0;
    virtual IOReturn getGUARD_INTERVAL(apple80211_guard_interval_data *) = 0;
    virtual IOReturn getMCS(apple80211_mcs_data *) = 0;
    virtual IOReturn getMCS_INDEX_SET(apple80211_mcs_index_set_data *) = 0;
    virtual IOReturn getWOW_PARAMETERS(apple80211_wow_parameter_data *) = 0;
    virtual IOReturn getWOW_ENABLED(apple80211_state_data *) = 0;
    virtual IOReturn getPID_LOCK(apple80211_state_data *) = 0;
    virtual IOReturn getSTA_IE_LIST(apple80211_sta_ie_data *) = 0;
    virtual IOReturn getSTA_STATS(apple80211_sta_stats_data *) = 0;
    virtual IOReturn getBT_COEX_FLAGS(apple80211_state_data *) = 0;
    virtual IOReturn getCURRENT_NETWORK(apple80211_scan_result *) = 0;
    virtual IOReturn getRSSI_BOUNDS(apple80211_rssi_bounds_data *) = 0;
    virtual IOReturn getPOWER_DEBUG_INFO(apple80211_power_debug_info *) = 0;
    virtual IOReturn getHT_CAPABILITY(apple80211_ht_capability *) = 0;
    virtual IOReturn getLINK_CHANGED_EVENT_DATA(apple80211_link_changed_event_data *) = 0;
    virtual IOReturn getEXTENDED_STATS(apple80211_extended_stats *) = 0;
    virtual IOReturn getBEACON_PERIOD(apple80211_beacon_period_data *) = 0;
    virtual IOReturn getVHT_MCS_INDEX_SET(apple80211_vht_mcs_index_set_data *) = 0;
    virtual IOReturn getMCS_VHT(apple80211_mcs_vht_data *) = 0;
    virtual IOReturn getGAS_RESULTS(apple80211_gas_result_t *) = 0;
    virtual IOReturn getCHANNELS_INFO(apple80211_channels_info *) = 0;
    virtual IOReturn getVHT_CAPABILITY(apple80211_vht_capability *) = 0;
    virtual IOReturn getBGSCAN_CACHE_RESULTS(apple80211_bgscan_cached_network_data_list *) = 0;
    virtual IOReturn getROAM_PROFILE(apple80211_roam_profile_band_data *) = 0;
    virtual IOReturn getCHIP_COUNTER_STATS(apple80211_chip_stats *) = 0;
    virtual IOReturn getDBG_GUARD_TIME_PARAMS(apple80211_dbg_guard_time_params *) = 0;
    virtual IOReturn getLEAKY_AP_STATS_MODE(apple80211_leaky_ap_setting *) = 0;
    virtual IOReturn getCOUNTRY_CHANNELS(apple80211_country_channel_data *) = 0;
    virtual IOReturn getPRIVATE_MAC(apple80211_private_mac_data *) = 0;
    virtual IOReturn getRANGING_ENABLE(apple80211_ranging_enable_request_t *) = 0;
    virtual IOReturn getRANGING_START(apple80211_ranging_start_request_t *) = 0;
    virtual IOReturn getAWDL_RSDB_CAPS(apple80211_rsdb_capability *) = 0;
    virtual IOReturn getTKO_PARAMS(apple80211_tko_params *) = 0;
    virtual IOReturn getTKO_DUMP(apple80211_tko_dump *) = 0;
    virtual IOReturn getHW_SUPPORTED_CHANNELS(apple80211_sup_channel_data *) = 0;
    virtual IOReturn getBTCOEX_PROFILE(apple80211_btcoex_profile *) = 0;
    virtual IOReturn getBTCOEX_PROFILE_ACTIVE(apple80211_btcoex_profile_active_data *) = 0;
    virtual IOReturn getTRAP_INFO(apple80211_trap_info_data *) = 0;
    virtual IOReturn getTHERMAL_INDEX(apple80211_thermal_index_t *) = 0;
    virtual IOReturn getMAX_NSS_FOR_AP(apple80211_btcoex_max_nss_for_ap_data *) = 0;
    virtual IOReturn getBTCOEX_2G_CHAIN_DISABLE(apple80211_btcoex_2g_chain_disable *) = 0;
    virtual IOReturn getPOWER_BUDGET(apple80211_power_budget_t *) = 0;
    virtual IOReturn getOFFLOAD_TCPKA_ENABLE(apple80211_offload_tcpka_enable_t *) = 0;
    virtual IOReturn getRANGING_CAPS(apple80211_ranging_capabilities_t *) = 0;
    virtual IOReturn getSUPPRESS_SCANS(apple80211_suppress_scans_t *) = 0;
    virtual IOReturn getHOST_AP_MODE_HIDDEN(apple80211_host_ap_mode_hidden_t *) = 0;
    virtual IOReturn getLQM_CONFIG(apple80211_lqm_config_t *) = 0;
    virtual IOReturn getTRAP_CRASHTRACER_MINI_DUMP(apple80211_trap_mini_dump_data *) = 0;
    virtual IOReturn getHE_CAPABILITY(apple80211_he_capability *) = 0;
    virtual IOReturn getBEACON_INFO(apple80211_beacon_info_t *) = 0;
    virtual IOReturn getSOFTAP_PARAMS(apple80211_softap_params *) = 0;
    virtual IOReturn getCHIP_POWER_RANGE(apple80211_chip_power_limit *) = 0;
    virtual IOReturn getSOFTAP_STATS(apple80211_softap_stats *) = 0;
    virtual IOReturn getNSS(apple80211_nss_data *) = 0;
    virtual IOReturn getHW_ADDR(apple80211_hw_mac_address *) = 0;
    virtual IOReturn getHE_MCS_INDEX_SET(apple80211_he_mcs_index_set_data *) = 0;
    virtual IOReturn getCHIP_DIAGS(appl80211_chip_diags_data *) = 0;
    virtual IOReturn getHP2P_CTRL(apple80211_hp2p_ctrl *) = 0;
    virtual IOReturn getREQUEST_BSS_BLACKLIST(void *) = 0;
    virtual IOReturn getASSOC_READY_STATUS(apple80211_assoc_ready *) = 0;
    virtual IOReturn getTXRX_CHAIN_INFO(apple80211_txrx_chain_info *) = 0;
    virtual IOReturn getMIMO_STATUS(apple80211_mimo_status *) = 0;
    virtual IOReturn getCUR_PMK(apple80211_pmk *) = 0;
    virtual IOReturn getDYNSAR_DETAIL(apple80211_dynsar_detail *) = 0;
    virtual IOReturn getRANDOMISATION_STATUS(apple80211_mac_randomisation_status *) = 0;
    virtual IOReturn getCOUNTRY_CHANNELS_INFO(apple80211_channels_info *) = 0;
    virtual IOReturn getLQM_SUMMARY(apple80211_lqm_summary *) = 0;
    virtual IOReturn getCOLOCATED_NETWORK_SCOPE_ID(apple80211_colocated_network_scope_id *) = 0;
    virtual IOReturn getBEACON_SCAN_CACHE_REQ(apple80211_scan_result *) = 0;
    virtual IOReturn getSLOW_WIFI_FEATURE_ENABLED(apple80211_slow_wifi_feature_enabled *) = 0;
    virtual IOReturn getCCA(apple80211_interface_cca_data *) = 0;
    virtual IOReturn getRX_RATE(apple80211_rate_data *) = 0;
    virtual IOReturn getTIMESYNC_INFO(apple80211_timesync_info *) = 0;
    virtual IOReturn getSENSING_DATA(apple80211_sensing_data_t *) = 0;
    virtual IOReturn getCOUNTRY_BAND_SUPPORT(apple80211_country_band_support *) = 0;
    virtual IOReturn getWCL_FW_HOT_CHANNELS(apple80211_fw_hot_channels *) = 0;
    virtual IOReturn getWCL_LOW_LATENCY_INFO(apple80211_low_latency_info *) = 0;
    virtual IOReturn getWCL_BSS_INFO(apple80211_beacon_msg *) = 0;
    virtual IOReturn getWCL_TRAFFIC_COUNTERS(apple80211_wcl_traffic_counters *) = 0;
    virtual IOReturn getWCL_GET_TX_BLANKING_STATUS(uint *) = 0;
    virtual IOReturn getSSID_TRANSITION_SUPPORT(apple80211_ssid_transition_feature_enabled *) = 0;
    virtual IOReturn getWCL_VALID_CHANNEL_COUNT(unsigned long *) = 0;
    virtual IOReturn getWCL_P2P_STATUS_FOR_SCAN(p2pStatusForScan *) = 0;
    virtual IOReturn getWCL_CHANNELS_INFO(apple80211ChannelInfo *) = 0;
    virtual IOReturn getP2P_STEERING_METRIC(apple80211_p2p_steering_metrics *) = 0;
    virtual IOReturn getRSN_XE(apple80211_rsn_xe_data *) = 0;
    virtual IOReturn getSIB_COEX_STATUS(apple80211_sib_coex_status *) = 0;
    virtual IOReturn getWCL_EXTENDED_BSS_INFO(apple80211_extended_bss_info *) = 0;
    virtual IOReturn getWCL_LOW_LATENCY_INFO_STATS(apple80211_wcl_low_latency_stats *) = 0;
    virtual IOReturn getWCL_BGSCAN_CACHE_RESULT(apple80211_bgscan_cached_network_data_list *) = 0;
    virtual IOReturn getWIFI_NOISE_PER_ANT(apple80211_noise_per_ant_t *) = 0;
    virtual IOReturn getBLOCKED_BANDS(apple80211_blocked_bands *) = 0;
    virtual IOReturn setSSID(apple80211_ssid_data *) = 0;
    virtual IOReturn setAUTH_TYPE(apple80211_authtype_data *) = 0;
    virtual IOReturn setCIPHER_KEY(apple80211_key *) = 0;
    virtual IOReturn setCHANNEL(apple80211_channel_data *) = 0;
    virtual IOReturn setPOWERSAVE(apple80211_powersave_data *) = 0;
    virtual IOReturn setTXPOWER(apple80211_txpower_data *) = 0;
    virtual IOReturn setRATE(apple80211_rate_data *) = 0;
    virtual IOReturn setSCAN_REQ(apple80211_scan_data *) = 0;
    virtual IOReturn setASSOCIATE(apple80211_assoc_data *) = 0;
    virtual IOReturn setDISASSOCIATE(apple80211_disassoc_data *) = 0;
    virtual IOReturn setIBSS_MODE(apple80211_network_data *) = 0;
    virtual IOReturn setHOST_AP_MODE(apple80211_network_data *) = 0;
    virtual IOReturn setAP_MODE(apple80211_apmode_data *) = 0;
    virtual IOReturn setDEAUTH(apple80211_deauth_data *) = 0;
    virtual IOReturn setTX_ANTENNA(void *) = 0;
    virtual IOReturn setANTENNA_DIVERSITY(void *) = 0;
    virtual IOReturn setRSN_IE(apple80211_rsn_ie_data *) = 0;
    virtual IOReturn setBACKGROUND_SCAN(apple80211_bgscan_data *) = 0;
    virtual IOReturn setWOW_PARAMETERS(apple80211_wow_parameter_data *) = 0;
    virtual IOReturn setWOW_ENABLED(apple80211_state_data *) = 0;
    virtual IOReturn setPID_LOCK(apple80211_state_data *) = 0;
    virtual IOReturn setSTA_AUTHORIZE(apple80211_sta_authorize_data *) = 0;
    virtual IOReturn setSTA_DISASSOCIATE(apple80211_sta_disassoc_data *) = 0;
    virtual IOReturn setSTA_DEAUTH(apple80211_sta_disassoc_data *) = 0;
    virtual IOReturn setRSN_CONF(apple80211_rsn_conf_data *) = 0;
    virtual IOReturn setIE(apple80211_ie_data *) = 0;
    virtual IOReturn setWOW_TEST(apple80211_wow_test_data *) = 0;
    virtual IOReturn setSCANCACHE_CLEAR(void *) = 0;
    virtual IOReturn setVIRTUAL_IF_CREATE(apple80211_virt_if_create_data *) = 0;
    virtual IOReturn setBT_COEX_FLAGS(apple80211_state_data *) = 0;
    virtual IOReturn setROAM(apple80211_sta_roam_data *) = 0;
    virtual IOReturn setHT_CAPABILITY(apple80211_ht_capability *) = 0;
    virtual IOReturn setAWDL_FORCED_ROAM_CONFIG(apple80211_awdl_forced_roam_config *) = 0;
    virtual IOReturn setOFFLOAD_ARP(apple80211_offload_arp_data *) = 0;
    virtual IOReturn setOFFLOAD_NDP(apple80211_offload_ndp_data *) = 0;
    virtual IOReturn setOFFLOAD_SCAN(apple80211_offload_scan_data *) = 0;
    virtual IOReturn setGAS_REQ(apple80211_gas_query_t *) = 0;
    virtual IOReturn setGAS_START(apple80211_gas_query_t *) = 0;
    virtual IOReturn setGAS_SET_PEER(apple80211_gas_peer_t *) = 0;
    virtual IOReturn setVHT_CAPABILITY(apple80211_vht_capability *) = 0;
    virtual IOReturn setROAM_PROFILE(apple80211_roam_profile_band_data *) = 0;
    virtual IOReturn setAWDL_ENABLE_ROAMING(void *) = 0;
    virtual IOReturn setDBG_GUARD_TIME_PARAMS(apple80211_dbg_guard_time_params *) = 0;
    virtual IOReturn setLEAKY_AP_STATS_MODE(apple80211_leaky_ap_setting *) = 0;
    virtual IOReturn setPRIVATE_MAC(apple80211_private_mac_data *) = 0;
    virtual IOReturn setRESET_CHIP(apple80211_reset_command *) = 0;
    virtual IOReturn setCRASH(apple80211_crash_command *) = 0;
    virtual IOReturn setRANGING_ENABLE(apple80211_ranging_enable_request_t *) = 0;
    virtual IOReturn setRANGING_START(apple80211_ranging_start_request_t *) = 0;
    virtual IOReturn setRANGING_AUTHENTICATE(apple80211_ranging_authenticate_request_t *) = 0;
    virtual IOReturn setTKO_PARAMS(apple80211_tko_params *) = 0;
    virtual IOReturn setBTCOEX_PROFILE(apple80211_btcoex_profile *) = 0;
    virtual IOReturn setBTCOEX_PROFILE_ACTIVE(apple80211_btcoex_profile_active_data *) = 0;
    virtual IOReturn setTHERMAL_INDEX(apple80211_thermal_index_t *) = 0;
    virtual IOReturn setBTCOEX_2G_CHAIN_DISABLE(apple80211_btcoex_2g_chain_disable *) = 0;
    virtual IOReturn setPOWER_BUDGET(apple80211_power_budget_t *) = 0;
    virtual IOReturn setOFFLOAD_TCPKA_ENABLE(apple80211_offload_tcpka_enable_t *) = 0;
    virtual IOReturn setSUPPRESS_SCANS(apple80211_suppress_scans_t *) = 0;
    virtual IOReturn setHOST_AP_MODE_HIDDEN(apple80211_host_ap_mode_hidden_t *) = 0;
    virtual IOReturn setLQM_CONFIG(apple80211_lqm_config_t *) = 0;
    virtual IOReturn setSOFTAP_PARAMS(apple80211_softap_params *) = 0;
    virtual IOReturn setSOFTAP_TRIGGER_CSA(apple80211_softap_csa_params *) = 0;
    virtual IOReturn setSOFTAP_WIFI_NETWORK_INFO_IE(apple80211_softap_wifi_network_info *) = 0;
    virtual IOReturn setBTCOEX_DISABLE_ULOFDMA(uint *) = 0;
    virtual IOReturn setSCAN_CONTROL(apple80211_scan_control_params *) = 0;
    virtual IOReturn setUSB_HOST_NOTIFICATION(apple80211_usb_host_notification_data *) = 0;
    virtual IOReturn setSET_MAC_ADDRESS(apple80211_set_mac_address *) = 0;
    virtual IOReturn setHP2P_CTRL(apple80211_hp2p_ctrl *) = 0;
    virtual IOReturn setABORT_SCAN(apple80211_abort_scan *) = 0;
    virtual IOReturn setSET_PROPERTY(apple80211_set_property_unserialized_data *) = 0;
    virtual IOReturn setROAM_CACHE_UPDATE(apple80211_roam_cache_data *) = 0;
    virtual IOReturn setPM_MODE(apple80211_pm_mode *) = 0;
    virtual IOReturn setSET_WIFI_ASSERTION_STATE(apple80211_wifi_assertion_data *) = 0;
    virtual IOReturn setREASSOCIATE_WITH_CORECAPTURE(apple80211_capture_debug_info_t *) = 0;
    virtual IOReturn setLINKDOWN_DEBOUNCE_STATUS(apple80211_linkdown_debounce_status *) = 0;
    virtual IOReturn setSOFTAP_EXTENDED_CAPABILITIES_IE(apple80211_softap_extended_capabilities_info *) = 0;
    virtual IOReturn setREALTIME_QOS_MSCS(apple80211_state_data *) = 0;
    virtual IOReturn setSENSING_ENABLE(apple80211_sensing_enable_t *) = 0;
    virtual IOReturn setSENSING_DISABLE(apple80211_sensing_disable_t *) = 0;
    virtual IOReturn setNANPHS_ASSOCIATION(apple80211_nan_link_association_info *) = 0;
    virtual IOReturn setNANPHS_TERMINATED(apple80211_nan_link_association_info *) = 0;
    virtual IOReturn set6G_MODE(apple80211_6G_mode *) = 0;
    virtual IOReturn setWCL_LEAVE_NETWORK(apple80211_leave_network *) = 0;
    virtual IOReturn setWCL_REASSOC(apple80211_reassoc *) = 0;
    virtual IOReturn setWCL_SET_ROAM_LOCK(apple80211_set_roam_lock *) = 0;
    virtual IOReturn setWCL_ROAM_PROFILE_CONFIG(apple80211_roam_profile_config *) = 0;
    virtual IOReturn setWCL_ROAM_PROFILE_CONFIGV1(apple80211_roam_profile_configV1 *) = 0;
    virtual IOReturn setWCL_ROAM_USER_CACHE(apple80211_user_roam_cache *) = 0;
    virtual IOReturn setWCL_SET_MULTI_AP_ENV(apple80211_set_multi_ap_env *) = 0;
    virtual IOReturn setWCL_SCAN_ABORT(void *) = 0;
    virtual IOReturn setWCL_REAL_TIME_MODE(apple80211_wcl_real_time_mode *) = 0;
    virtual IOReturn setWCL_GARP_MODE(apple80211_wcl_garp_mode *) = 0;
    virtual IOReturn setWCL_JOIN_ABORT(void *) = 0;
    virtual IOReturn setWCL_TRIGGER_CC(triggerCC *) = 0;
    virtual IOReturn setWCL_SCAN_REQ(apple80211ScanRequest *) = 0;
    virtual IOReturn setWCL_ASSOCIATE(apple80211_assoc_candidates *) = 0;
    virtual IOReturn setWCL_PROTECT_IP(apple80211_wcl_protect_ip_mode *) = 0;
    virtual IOReturn setWCL_LINK_UP_DONE(void *) = 0;
    virtual IOReturn setWCL_SET_SCAN_HOME_AWAY_TIME(scanHomeAndAwayTime *) = 0;
    virtual IOReturn setWCL_VOLUNTARY_NETWORK_DISCONNECT(apple80211_wcl_voluntary_network_disconnect *) = 0;
    virtual IOReturn setWCL_LINK_STATE_UPDATE(apple80211_wcl_update_link_state *) = 0;
    virtual IOReturn setSLOW_WIFI_RECOVERY(void *) = 0;
    virtual IOReturn setRSN_XE(apple80211_rsn_xe_data *) = 0;
    virtual IOReturn setWCL_ULOFDMA_STATE(apple80211_wcl_ulofdma_state *) = 0;
    virtual IOReturn setWCL_ACTION_FRAME(apple80211_wcl_action_frame *) = 0;
    virtual IOReturn setWCL_REAL_TIME_POLICY(apple80211_wcl_real_time_policy *) = 0;
    virtual IOReturn setGAS_ABORT(void *) = 0;
    virtual IOReturn setOS_FEATURE_FLAGS(apple80211_feature_flags *) = 0;
    virtual IOReturn setDHCP_RENEWAL_DATA(apple80211_dhcp_renewal_data *) = 0;
    virtual IOReturn setMOVING_NETWORK(apple80211_network_flags *) = 0;
    virtual IOReturn setBATTERY_POWERSAVE_CONFIG(apple80211_battery_ps_config *) = 0;
    virtual IOReturn setMIMO_CONFIG(apple80211_mimo_config *) = 0;
    virtual IOReturn setWCL_CONFIG_BG_MOTIONPROFILE(apple80211_bg_motion_profile *) = 0;
    virtual IOReturn setWCL_CONFIG_BG_NETWORK(apple80211_bg_network *) = 0;
    virtual IOReturn setWCL_CONFIG_BGSCAN(apple80211_bg_scan *) = 0;
    virtual IOReturn setWCL_CONFIG_BG_PARAMS(apple80211_bg_params *) = 0;
    virtual IOReturn setBLOCKED_BANDS(apple80211_blocked_bands *) = 0;
    
public:
    uint8_t filter[0x120];
};

#endif /* IO80211InfraProtocol_h */
