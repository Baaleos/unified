#pragma once

#include <cstdint>

#include "curl_mimepart_s.hpp"
#include "ssl_config_data.hpp"
#include "ssl_general_config.hpp"
#include "unknown_CURL_NETRC_OPTION.hpp"
#include "unknown_Curl_HttpReq.hpp"
#include "unknown_Curl_RtspReq.hpp"
#include "unknown__IO_FILE.hpp"
#include "unknown___time_t.hpp"
#include "unknown_curl_TimeCond.hpp"
#include "unknown_curl_chunk_bgn_callback.hpp"
#include "unknown_curl_chunk_end_callback.hpp"
#include "unknown_curl_closesocket_callback.hpp"
#include "unknown_curl_conv_callback.hpp"
#include "unknown_curl_debug_callback.hpp"
#include "unknown_curl_fnmatch_callback.hpp"
#include "unknown_curl_ftpauth.hpp"
#include "unknown_curl_ftpccc.hpp"
#include "unknown_curl_ftpfile.hpp"
#include "unknown_curl_ioctl_callback.hpp"
#include "unknown_curl_opensocket_callback.hpp"
#include "unknown_curl_progress_callback.hpp"
#include "unknown_curl_proxytype.hpp"
#include "unknown_curl_read_callback.hpp"
#include "unknown_curl_resolver_start_callback.hpp"
#include "unknown_curl_seek_callback.hpp"
#include "unknown_curl_sockopt_callback.hpp"
#include "unknown_curl_sshkeycallback.hpp"
#include "unknown_curl_usessl.hpp"
#include "unknown_curl_write_callback.hpp"
#include "unknown_curl_xferinfo_callback.hpp"

namespace NWNXLib {

namespace API {

// Forward class declarations (defined in the source file)
struct Curl_easy;
struct Curl_http2_dep;
struct curl_httppost;
struct curl_slist;

struct UserDefined
{
    _IO_FILE* err;
    void* debugdata;
    char* errorbuffer;
    int32_t proxyport;
    void* out;
    void* in_set;
    void* writeheader;
    void* rtp_out;
    int32_t use_port;
    uint32_t httpauth;
    uint32_t proxyauth;
    uint32_t socks5auth;
    int32_t followlocation;
    int32_t maxredirs;
    int32_t keep_post;
    bool free_referer;
    void* postfields;
    curl_seek_callback seek_func;
    int64_t postfieldsize;
    uint16_t localport;
    int32_t localportrange;
    curl_write_callback fwrite_func;
    curl_write_callback fwrite_header;
    curl_write_callback fwrite_rtp;
    curl_read_callback fread_func_set;
    int32_t is_fread_set;
    int32_t is_fwrite_set;
    curl_progress_callback fprogress;
    curl_xferinfo_callback fxferinfo;
    curl_debug_callback fdebug;
    curl_ioctl_callback ioctl_func;
    curl_sockopt_callback fsockopt;
    void* sockopt_client;
    curl_opensocket_callback fopensocket;
    void* opensocket_client;
    curl_closesocket_callback fclosesocket;
    void* closesocket_client;
    void* seek_client;
    curl_conv_callback convfromnetwork;
    curl_conv_callback convtonetwork;
    curl_conv_callback convfromutf8;
    void* progress_client;
    void* ioctl_client;
    int32_t timeout;
    int32_t connecttimeout;
    int32_t accepttimeout;
    int32_t happy_eyeballs_timeout;
    int32_t server_response_timeout;
    int32_t tftp_blksize;
    bool tftp_no_options;
    int64_t filesize;
    int32_t low_speed_limit;
    int32_t low_speed_time;
    int64_t max_send_speed;
    int64_t max_recv_speed;
    int64_t set_resume_from;
    curl_slist* headers;
    curl_slist* proxyheaders;
    curl_httppost* httppost;
    curl_mimepart_s mimepost;
    bool sep_headers;
    bool cookiesession;
    bool crlf;
    curl_slist* quote;
    curl_slist* postquote;
    curl_slist* prequote;
    curl_slist* source_quote;
    curl_slist* source_prequote;
    curl_slist* source_postquote;
    curl_slist* telnet_options;
    curl_slist* resolve;
    curl_slist* connect_to;
    curl_TimeCond timecondition;
    __time_t timevalue;
    Curl_HttpReq httpreq;
    int32_t httpversion;
    bool strip_path_slash;
    ssl_config_data ssl;
    ssl_config_data proxy_ssl;
    ssl_general_config general_ssl;
    curl_proxytype proxytype;
    int32_t dns_cache_timeout;
    int32_t buffer_size;
    void* private_data;
    curl_slist* http200aliases;
    int32_t ipver;
    int64_t max_filesize;
    curl_ftpfile ftp_filemethod;
    int32_t ftp_create_missing_dirs;
    curl_sshkeycallback ssh_keyfunc;
    void* ssh_keyfunc_userp;
    bool ssh_compression;
    bool printhost;
    bool get_filetime;
    bool tunnel_thru_httpproxy;
    bool prefer_ascii;
    bool ftp_append;
    bool ftp_list_only;
    bool ftp_use_port;
    bool hide_progress;
    bool http_fail_on_error;
    bool http_keep_sending_on_error;
    bool http_follow_location;
    bool http_transfer_encoding;
    bool allow_auth_to_other_hosts;
    bool include_header;
    bool http_set_referer;
    bool http_auto_referer;
    bool opt_no_body;
    bool upload;
    CURL_NETRC_OPTION use_netrc;
    bool verbose;
    bool krb;
    bool reuse_forbid;
    bool reuse_fresh;
    bool ftp_use_epsv;
    bool ftp_use_eprt;
    bool ftp_use_pret;
    curl_usessl use_ssl;
    curl_ftpauth ftpsslauth;
    curl_ftpccc ftp_ccc;
    bool no_signal;
    bool global_dns_cache;
    bool tcp_nodelay;
    bool ignorecl;
    bool ftp_skip_ip;
    bool connect_only;
    int32_t ssh_auth_types;
    bool http_te_skip;
    bool http_ce_skip;
    int32_t new_file_perms;
    int32_t new_directory_perms;
    bool proxy_transfer_mode;
    char* str[59];
    uint32_t scope_id;
    int32_t allowed_protocols;
    int32_t redir_protocols;
    curl_slist* mail_rcpt;
    bool sasl_ir;
    Curl_RtspReq rtspreq;
    int32_t rtspversion;
    bool wildcard_enabled;
    curl_chunk_bgn_callback chunk_bgn;
    curl_chunk_end_callback chunk_end;
    curl_fnmatch_callback fnmatch;
    void* fnmatch_data;
    int32_t gssapi_delegation;
    bool tcp_keepalive;
    int32_t tcp_keepidle;
    int32_t tcp_keepintvl;
    bool tcp_fastopen;
    uint32_t maxconnects;
    bool ssl_enable_npn;
    bool ssl_enable_alpn;
    bool path_as_is;
    bool pipewait;
    int32_t expect_100_timeout;
    bool suppress_connect_headers;
    bool dns_shuffle_addresses;
    Curl_easy* stream_depends_on;
    bool stream_depends_e;
    int32_t stream_weight;
    bool haproxyprotocol;
    Curl_http2_dep* stream_dependents;
    bool abstract_unix_socket;
    curl_resolver_start_callback resolver_start;
    void* resolver_start_client;
};

}

}
