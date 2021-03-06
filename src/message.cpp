/*
 * src/message.cpp
 * 
 * Author: Zex <top_zlynch@yahoo.com>
 */
#include "message.h"

namespace EasySip
{
    HFCallId* Message::add_call_id()
    {
        call_id_.append_item();
        return call_id_.last();
    }

    HFCSeq* Message::add_cseq()
    {
        cseq_.append_item();
        return cseq_.last();
    }

    HFFrom* Message::add_from()
    {
        from_.append_item();
        return from_.last();
    }

    HFTo* Message::add_to()
    {
        to_.append_item();
        return to_.last();
    }

    HFVia* Message::add_via()
    {
        via_.append_item();
        return via_.last();
    }

    HFAlertInfo* Message::add_alert_info()
    {
        alert_info_.append_item();
        return alert_info_.last();
    }

    HFAllowEvents* Message::add_allow_events()
    {
        allow_events_.append_item();
        return allow_events_.last();
    }

    HFDate* Message::add_date()
    {
        date_.append_item();
        return date_.last();
    }

    HFContact* Message::add_contact()
    {
        contact_.append_item();
        return contact_.last();
    }

    HFOrganization* Message::add_organization()
    {
        organization_.append_item();
        return organization_.last();
    }

    HFRecordRoute* Message::add_record_route()
    {
        record_route_.append_item();
        return record_route_.last();
    }

    HFRetryAfter* Message::add_retry_after()
    {
        retry_after_.append_item();
        return retry_after_.last();
    }

    HFSubject* Message::add_subject()
    {
        subject_.append_item();
        return subject_.last();
    }

    HFSupported* Message::add_supported()
    {
        supported_.append_item();
        return supported_.last();
    }

    HFTimestamp* Message::add_timestamp()
    {
        timestamp_.append_item();
        return timestamp_.last();
    }

    HFUserAgent* Message::add_user_agent()
    {
        user_agent_.append_item();
        return user_agent_.last();
    }

    HFAnswerMode* Message::add_answer_mode()
    {
        answer_mode_.append_item();
        return answer_mode_.last();
    }

    HFPrivAnswerMode* Message::add_priv_answer_mode()
    {
        priv_answer_mode_.append_item();
        return priv_answer_mode_.last();
    }

    HFAccept* Message::add_accept()
    {
        accept_.append_item();
        return accept_.last();
    }

    HFAcceptContact* Message::add_accept_contact()
    {
        accept_contact_.append_item();
        return accept_contact_.last();
    }

    HFAcceptEncoding* Message::add_accept_encoding()
    {
        accept_encoding_.append_item();
        return accept_encoding_.last();
    }

    HFAcceptLanguage* Message::add_accept_language()
    {
        accept_language_.append_item();
        return accept_language_.last();
    }

    HFAuthorization* Message::add_authorization()
    {
        authorization_.append_item();
        return authorization_.last();
    }

    HFCallInfo* Message::add_call_info()
    {
        call_info_.append_item();
        return call_info_.last();
    }

    HFEvent* Message::add_event()
    {
        event_.append_item();
        return event_.last();
    }

    HFInReplyTo* Message::add_in_replay_to()
    {
        in_replay_to_.append_item();
        return in_replay_to_.last();
    }

    HFJoin* Message::add_join()
    {
        join_.append_item();
        return join_.last();
    }

    HFPriority* Message::add_priority()
    {
        priority_.append_item();
        return priority_.last();
    }

    HFPrivacy* Message::add_privacy()
    {
        privacy_.append_item();
        return privacy_.last();
    }

    HFProxyAuthorization* Message::add_proxy_authorization()
    {
        proxy_authorization_.append_item();
        return proxy_authorization_.last();
    }

    HFProxyRequire* Message::add_proxy_require()
    {
        proxy_require_.append_item();
        return proxy_require_.last();
    }

    HFPOSPAuthToken* Message::add_p_osp_auth_token()
    {
        p_osp_auth_token_.append_item();
        return p_osp_auth_token_.last();
    }

    HFPAssertedIdentity* Message::add_p_asserted_identity()
    {
        p_asserted_identity_.append_item();
        return p_asserted_identity_.last();
    }

    HFPPreferredIdentity* Message::add_p_preferred_identity()
    {
        p_preferred_identity_.append_item();
        return p_preferred_identity_.last();
    }

    HFMaxForwards* Message::add_max_forwards()
    {
        max_forwards_.append_item();
        return max_forwards_.last();
    }

    HFReason* Message::add_reason()
    {
        reason_.append_item();
        return reason_.last();
    }

    HFReferTo* Message::add_refer_to()
    {
        refer_to_.append_item();
        return refer_to_.last();
    }

    HFReferredBy* Message::add_referred_by()
    {
        referred_by_.append_item();
        return referred_by_.last();
    }

    HFReplyTo* Message::add_reply_to()
    {
        reply_to_.append_item();
        return reply_to_.last();
    }

    HFReplaces* Message::add_replaces()
    {
        replaces_.append_item();
        return replaces_.last();
    }

    HFRejectContact* Message::add_reject_contact()
    {
        reject_contact_.append_item();
        return reject_contact_.last();
    }

    HFRequestDisposition* Message::add_request_disposition()
    {
        request_disposition_.append_item();
        return request_disposition_.last();
    }

    HFRequire* Message::add_require()
    {
        require_.append_item();
        return require_.last();
    }

    HFRoute* Message::add_route()
    {
        route_.append_item();
        return route_.last();
    }

    HFRack* Message::add_rack()
    {
        rack_.append_item();
        return rack_.last();
    }

    HFSessionExpires* Message::add_session_expires()
    {
        session_expires_.append_item();
        return session_expires_.last();
    }

    HFSubscriptionState* Message::add_subscription_state()
    {
        subscription_state_.append_item();
        return subscription_state_.last();
    }

    HFAuthenticationInfo* Message::add_authentication_info()
    {
        authentication_info_.append_item();
        return authentication_info_.last();
    }

    HFErrorInfo* Message::add_error_info()
    {
        error_info_.append_item();
        return error_info_.last();
    }

    HFMinExpires* Message::add_min_expires()
    {
        min_expires_.append_item();
        return min_expires_.last();
    }

    HFMinSE* Message::add_min_se()
    {
        min_se_.append_item();
        return min_se_.last();
    }

    HFProxyAuthenticate* Message::add_proxy_authenticate()
    {
        proxy_authenticate_.append_item();
        return proxy_authenticate_.last();
    }

    HFServer* Message::add_server()
    {
        server_.append_item();
        return server_.last();
    }

    HFUnsupported* Message::add_unsupported()
    {
        unsupported_.append_item();
        return unsupported_.last();
    }

    HFWarning* Message::add_warning()
    {
        warning_.append_item();
        return warning_.last();
    }

    HFWWWAuthenticate* Message::add_www_authenticate()
    {
        www_authenticate_.append_item();
        return www_authenticate_.last();
    }

    HFRSeq* Message::add_rseq()
    {
        rseq_.append_item();
        return rseq_.last();
    }

    HFAllow* Message::add_allow()
    {
        allow_.append_item();
        return allow_.last();
    }

    HFContentEncoding* Message::add_content_encoding()
    {
        content_encoding_.append_item();
        return content_encoding_.last();
    }

    HFContentLength* Message::add_content_length()
    {
        content_length_.append_item();
        content_length_.last()->length(user_data_.size());
        return content_length_.last();
    }

    HFContentDisposition* Message::add_content_disposition()
    {
        content_disposition_.append_item();
        return content_disposition_.last();
    }

    HFContentLanguage* Message::add_content_language()
    {
        content_language_.append_item();
        return content_language_.last();
    }

    HFContentType* Message::add_content_type()
    {
        content_type_.append_item();
        return content_type_.last();
    }

    HFExpires* Message::add_expires()
    {
        expires_.append_item();
        return expires_.last();
    }

    HFMIMEVersion* Message::add_mime_version()
    {
        mime_version_.append_item();
        return mime_version_.last();
    }

    std::ostream& operator<< (std::ostream& o, Message& msg)
    {
        out_if_not_null(o, msg.req_line_);
        out_if_not_null(o, msg.resp_status_);
        out_if_not_empty(o, msg.call_id_);
        out_if_not_empty(o, msg.cseq_);
        out_if_not_empty(o, msg.from_);
        out_if_not_empty(o, msg.to_);
        out_if_not_empty(o, msg.via_);
        out_if_not_empty(o, msg.alert_info_);
        out_if_not_empty(o, msg.allow_events_);
        out_if_not_empty(o, msg.date_);
        out_if_not_empty(o, msg.contact_);
        out_if_not_empty(o, msg.organization_);
        out_if_not_empty(o, msg.record_route_);
        out_if_not_empty(o, msg.retry_after_);
        out_if_not_empty(o, msg.subject_);
        out_if_not_empty(o, msg.supported_);
        out_if_not_empty(o, msg.timestamp_);
        out_if_not_empty(o, msg.user_agent_);
        out_if_not_empty(o, msg.answer_mode_);
        out_if_not_empty(o, msg.priv_answer_mode_);
        out_if_not_empty(o, msg.accept_);
        out_if_not_empty(o, msg.accept_contact_);
        out_if_not_empty(o, msg.accept_encoding_);
        out_if_not_empty(o, msg.accept_language_);
        out_if_not_empty(o, msg.authorization_);
        out_if_not_empty(o, msg.call_info_);
        out_if_not_empty(o, msg.event_);
        out_if_not_empty(o, msg.in_replay_to_);
        out_if_not_empty(o, msg.join_);
        out_if_not_empty(o, msg.priority_);
        out_if_not_empty(o, msg.privacy_);
        out_if_not_empty(o, msg.proxy_authorization_);
        out_if_not_empty(o, msg.proxy_require_);
        out_if_not_empty(o, msg.p_osp_auth_token_);
        out_if_not_empty(o, msg.p_asserted_identity_);
        out_if_not_empty(o, msg.p_preferred_identity_);
        out_if_not_empty(o, msg.max_forwards_);
        out_if_not_empty(o, msg.reason_);
        out_if_not_empty(o, msg.refer_to_);
        out_if_not_empty(o, msg.referred_by_);
        out_if_not_empty(o, msg.reply_to_);
        out_if_not_empty(o, msg.replaces_);
        out_if_not_empty(o, msg.reject_contact_);
        out_if_not_empty(o, msg.request_disposition_);
        out_if_not_empty(o, msg.require_);
        out_if_not_empty(o, msg.route_);
        out_if_not_empty(o, msg.rack_);
        out_if_not_empty(o, msg.session_expires_);
        out_if_not_empty(o, msg.subscription_state_);
        out_if_not_empty(o, msg.authentication_info_);
        out_if_not_empty(o, msg.error_info_);
        out_if_not_empty(o, msg.min_expires_);
        out_if_not_empty(o, msg.min_se_);
        out_if_not_empty(o, msg.proxy_authenticate_);
        out_if_not_empty(o, msg.server_);
        out_if_not_empty(o, msg.unsupported_);
        out_if_not_empty(o, msg.warning_);
        out_if_not_empty(o, msg.www_authenticate_);
        out_if_not_empty(o, msg.rseq_);
        out_if_not_empty(o, msg.allow_);
        out_if_not_empty(o, msg.content_encoding_);
//        out_if_not_empty(o, msg.content_length_);
        out_if_not_empty(o, msg.content_disposition_);
        out_if_not_empty(o, msg.content_language_);
        out_if_not_empty(o, msg.content_type_);
        out_if_not_empty(o, msg.expires_);
        out_if_not_empty(o, msg.mime_version_);
        out_if_not_empty(o, msg.content_length_);

        o << msg.user_data_ << "\r\n";

        return o;
    }

    Message& Message::create()
    {
        if (!is_valid())
        {
            // TODO: thown exception and log this
            std::cerr << __PRETTY_FUNCTION__ << ": message invalid!\n";
            return *this;
        }

        return *this;
    }

    bool Message::is_valid()
    {
        return_false_if_true(call_id_.empty()) 
        return_false_if_true(cseq_.empty()) 
        return_false_if_true(from_.empty()) 
        return_false_if_true(to_.empty()) 
        return_false_if_true(via_.empty()) 
//        return_false_if_true(max_forwards_.empty() && resp_status_.empty()) 

        return true;
    }

    int Message::get_method_from_buffer(
        MethodMapList &allowed_methods, std::string msg, std::string sym)
    {
        std::string ret = msg.substr(0, msg.find_first_of(sym));

        for (auto &it : allowed_methods)
        {
            if (ret == it.second)
                return it.code();
        }

        return -1;
    }

    int Message::get_response_code_from_buffer(
        RespCodeList &allowed_responses, std::string msg, std::string sym)
    {
        RespCodeList::iterator it;
        size_t pos = msg.find_first_of(sym);

        if (pos == std::string::npos)
            return -1;

        pos++;
        int next = msg.find_first_of(sym, pos);
        std::string ret = msg.substr(pos, next-pos);

        for (it = allowed_responses.begin(); it != allowed_responses.end(); it++)
        {
            if (ret == it->CodeStr())
                return it->code();
        }

        return -1;
    }

    std::vector<std::string> Message::split_by(std::string msg, std::string sym)
    {
        size_t pos, next;
        std::vector<std::string> ret;

        for (next = pos = 0; ; pos = next+1)
        {
            next = msg.find_first_of(sym, pos);
            if (next == std::string::npos)
                break;

            ret.push_back(msg.substr(pos, next-pos));
        }

        return ret;
    }

    void Message::parse_dispatch(std::string field, size_t &pos)
    {
        switch(allowed_fields_[field])
        {
            case HF_CALLID:             add_call_id()->parse(msg_, pos); break;
            case HF_CSEQ:               add_cseq()->parse(msg_, pos); break;
            case HF_FROM:               add_from()->parse(msg_, pos); break;
            case HF_TO:                 add_to()->parse(msg_, pos); break;
            case HF_VIA:                add_via()->parse(msg_, pos); break;
            case HF_ALERT_INFO:         add_alert_info()->parse(msg_, pos); break;
            case HF_ALLOW_EVENTS:       add_allow_events()->parse(msg_, pos); break;
            case HF_DATE:               add_date()->parse(msg_, pos); break;
            case HF_CONTACT:            add_contact()->parse(msg_, pos); break;
            case HF_ORGANIZATION:       add_organization()->parse(msg_, pos); break;
            case HF_RECORD_ROUTE:       add_record_route()->parse(msg_, pos); break;
            case HF_RETRY_AFTER:        add_retry_after()->parse(msg_, pos); break;
            case HF_SUBJECT:            add_subject()->parse(msg_, pos); break;
            case HF_SUPPORTED:          add_supported()->parse(msg_, pos); break;
            case HF_TIMESTAMP:          add_timestamp()->parse(msg_, pos); break;
            case HF_USER_AGENT:         add_user_agent()->parse(msg_, pos); break;
            case HF_ANSWER_MODE:        add_answer_mode()->parse(msg_, pos); break;
            case HF_PRIV_ANSWER_MODE:   add_priv_answer_mode()->parse(msg_, pos); break;
            case HF_ACCEPT:             add_accept()->parse(msg_, pos); break;
            case HF_ACCEPT_CONTACT:     add_accept_contact()->parse(msg_, pos); break;
            case HF_ACCEPT_ENCODING:    add_accept_encoding()->parse(msg_, pos); break;
            case HF_ACCEPT_LANGUAGE:    add_accept_language()->parse(msg_, pos); break;
            case HF_AUTHORIZATION:      add_authorization()->parse(msg_, pos); break;
            case HF_CALL_INFO:          add_call_info()->parse(msg_, pos); break;
            case HF_EVENT:              add_event()->parse(msg_, pos); break;
            case HF_IN_REPLY_TO:        add_in_replay_to()->parse(msg_, pos); break;
            case HF_JOIN:               add_join()->parse(msg_, pos); break;
            case HF_PRIORITY:           add_priority()->parse(msg_, pos); break;
            case HF_PRIVACY:            add_privacy()->parse(msg_, pos); break;
            case HF_PROXY_AUTHORIZATION:add_proxy_authorization()->parse(msg_, pos); break;
            case HF_PROXY_REQUIRE:      add_proxy_require()->parse(msg_, pos); break;
            case HF_P_OSP_AUTHTOKEN:    add_p_osp_auth_token()->parse(msg_, pos); break;
            case HF_PASSERTED_IDENTITY: add_p_asserted_identity()->parse(msg_, pos); break;
            case HF_PPREFERRED_IDENTITY:add_p_preferred_identity()->parse(msg_, pos); break;
            case HF_MAX_FORWARDS:       add_max_forwards()->parse(msg_, pos); break;
            case HF_REASON:             add_reason()->parse(msg_, pos); break;
            case HF_REFER_TO:           add_refer_to()->parse(msg_, pos); break;
            case HF_REFERRED_BY:        add_referred_by()->parse(msg_, pos); break;
            case HF_REPLY_TO:           add_reply_to()->parse(msg_, pos); break;
            case HF_REPLACES:           add_replaces()->parse(msg_, pos); break;
            case HF_REJECT_CONTACT:     add_reject_contact()->parse(msg_, pos); break;
            case HF_REQUEST_DISPOSITION:add_request_disposition()->parse(msg_, pos); break;
            case HF_REQUIRE:            add_require()->parse(msg_, pos); break;
            case HF_ROUTE:              add_route()->parse(msg_, pos); break;
            case HF_RACK:               add_rack()->parse(msg_, pos); break;
            case HF_SESSION_EXPIRES:    add_session_expires()->parse(msg_, pos); break;
            case HF_SUBSCRIPTION_STATE: add_subscription_state()->parse(msg_, pos); break;
            case HF_AUTHENTICATIONINFO: add_authentication_info()->parse(msg_, pos); break;
            case HF_ERROR_INFO:         add_error_info()->parse(msg_, pos); break;
            case HF_MIN_EXPIRES:        add_min_expires()->parse(msg_, pos); break;
            case HF_MIN_SE:             add_min_se()->parse(msg_, pos); break;
            case HF_PROXY_AUTHENTICATE: add_proxy_authenticate()->parse(msg_, pos); break;
            case HF_SERVER:             add_server()->parse(msg_, pos); break;
            case HF_UNSUPPORTED:        add_unsupported()->parse(msg_, pos); break;
            case HF_WARNING:            add_warning()->parse(msg_, pos); break;
            case HF_WWW_AUTHENTICATE:   add_www_authenticate()->parse(msg_, pos); break;
            case HF_RSEQ:               add_rseq()->parse(msg_, pos); break;
            case HF_ALLOW:              add_allow()->parse(msg_, pos); break;
            case HF_CONTENT_ENCODING:   add_content_encoding()->parse(msg_, pos); break;
            case HF_CONTENT_LENGTH:     add_content_length()->parse(msg_, pos); break;
            case HF_CONTENT_DISPOSITION: add_content_disposition()->parse(msg_, pos); break;
            case HF_CONTENT_LANGUAGE:   add_content_language()->parse(msg_, pos); break;
            case HF_CONTENT_TYPE:       add_content_type()->parse(msg_, pos); break;
            case HF_EXPIRES:            add_expires()->parse(msg_, pos); break;
            case HF_MIME_VERSION:       add_mime_version()->parse(msg_, pos); break;
            default:
            {
                std::cerr << "Unexpected header: " << field << '\n';
            }
        }
    }

    /* parse buffered header into formated header fields
     */
    int Message::parse(size_t &pos)
    {
        if (msg_.empty()) return PROCEDURE_ERROR;

        bool run = true;
        std::string buffer;

        while (run)
        {
            if (pos+1 >= msg_.size()) break;

            switch(msg_.at(pos))
            {
                CASE_ALPHA
                case '-':
                {
                    buffer += msg_.at(pos++);
                    break;
                }
                case '\r':
                {
                    pos++;
                    break;
                }
                case '\n':
                {
                    pos++;
                    buffer.clear();
                    break;
                }
                case ':':
                {
                    pos++;

                    parse_dispatch(buffer, pos);
                    buffer.clear();

                    break;
                }
                default:
                {
                    if (content_length_.size())
                    {
                        run = false;
                    }
                    else
                    {
                        std::cerr << __PRETTY_FUNCTION__ << " Unexpected '" << msg_.at(pos) << '(' << (int)msg_.at(pos)<< ")': " << buffer << "\n";
                        pos++;
                        buffer.clear();
                    }
                }
            }
        }

        if (content_length_.size())
        {
            size_t i = 1, len = 0;
            std::istringstream in(content_length_.first()->length());
            in >> len;
    
            while (pos < msg_.size() && i < len)
            {
                buffer += msg_.at(pos++);
            }

            user_data_ = buffer;
        }

        return PROCEDURE_OK;
    }

    RequestMessage& RequestMessage::create()
    {
        Ancestor::create();
        std::ostringstream o;

//        std::ostringstream len;
//        len << user_data_.size();
//        add_content_length().length(len.str());

        o << *this;
        msg_ = o.str();

        return *this;
    }

    int RequestMessage::parse(size_t &pos)
    {
        if (msg_.empty()) return PROCEDURE_ERROR;

        int ret;

        if (PROCEDURE_OK != (ret = req_line_->parse(msg_, pos)))
            return ret;
        Ancestor::parse(pos);

        if (!is_valid())
        {
            std::cerr << __PRETTY_FUNCTION__ << ": message invalid!\n";
        }

        std::cout << "-request------------------------\n";
        std::cout << *this;
        std::cout << "--------------------------------\n";

        return PROCEDURE_OK;
    }

    RequestMessage::RequestMessage(ResponseMessage &in_msg)
    {
        req_line_ = std::make_shared<RequestLine>();

        add_call_id()
        ->id(in_msg.call_id_.first()->id());

        add_from()
        ->add_name(in_msg.from_.first()->name())
        .add_uri(in_msg.from_.first()->uri());

        for (auto &it : in_msg.from_.first()->header_params_)
        {
            from_.first()->HeaderParam(it.name(), it.value());
        }

        add_to()
        ->add_name(in_msg.to_.first()->name())
        .add_uri(in_msg.to_.first()->uri());

        for (auto &it : in_msg.to_.first()->header_params_)
        {
            to_.first()->HeaderParam(it.name(), it.value());
        }

        add_via()
        ->add_proto(SIP_VERSION_2_0_UDP)
        .add_sentby(in_msg.via_.first()->sent_by_);

        for (auto &it : in_msg.via_.first()->header_params_)
        {
            via_.first()->HeaderParam(it.name(), it.value());
        }
    }

    bool InviteMessage::is_valid()
    {
        return_false_if_true(!Ancestor::is_valid())
        return_false_if_true(contact_.empty())

        return true;
    }
    // RegisterMessage
    bool RegisterMessage::is_valid()
    {
        return_false_if_true(!Ancestor::is_valid())

        if (record_route_.size()) record_route_.clear();

        return true;
    }
    // AckMessage
    bool AckMessage::is_valid()
    {
        return_false_if_true(!Ancestor::is_valid())
        return true;
    }

    AckMessage::AckMessage(ResponseMessage &in_msg)
    : RequestMessage(in_msg)
    {
        req_line_->method_ = METHOD_ACK;

        add_cseq()
        ->cseq("1")
        .method(METHOD_ACK.name());
    }
    // ByeMessage
    bool ByeMessage::is_valid()
    {
        return_false_if_true(!Ancestor::is_valid())
        return true;
    }
    // CancelMessage
    bool CancelMessage::is_valid()
    {
        return_false_if_true(!Ancestor::is_valid())
        return true;
    }
    // OptionsMessage
    bool OptionsMessage::is_valid()
    {
        return_false_if_true(!Ancestor::is_valid())
        return true;
    }

    // ReferMessage
    bool ReferMessage::is_valid()
    {
        return_false_if_true(!Ancestor::is_valid())
        return_false_if_true(contact_.empty())
        return_false_if_true(refer_to_.empty())

        return true;
    }
    // SubscribeMessage
    bool SubscribeMessage::is_valid()
    {
        return_false_if_true(!Ancestor::is_valid())
        return_false_if_true(contact_.empty())
        return_false_if_true(event_.empty())
        return_false_if_true(allow_events_.empty())

        return true;
    }
    // NotifyMessage
    bool NotifyMessage::is_valid()
    {
        return_false_if_true(!Ancestor::is_valid())
        return_false_if_true(contact_.empty())
        return_false_if_true(event_.empty())
        return_false_if_true(allow_events_.empty())
        return_false_if_true(subscription_state_.empty())

        return true;
    }
    // MessageMessage
    bool MessageMessage::is_valid()
    {
        return_false_if_true(!Ancestor::is_valid())
        return true;
    }
    // InfoMessage
    bool InfoMessage::is_valid()
    {
        return_false_if_true(!Ancestor::is_valid())
        return true;
    }
    // PrackMessage
    bool PrackMessage::is_valid()
    {
        return_false_if_true(!Ancestor::is_valid())
        return true;
    }
    // UpdateMessage
    bool UpdateMessage::is_valid()
    {
        return_false_if_true(!Ancestor::is_valid())
        return_false_if_true(contact_.empty())

        return true;
    }

    ResponseMessage& ResponseMessage::create()
    {
        Ancestor::create();
        std::ostringstream o;

//        std::ostringstream len;
//        len << user_data_.size();
//        add_content_length().length(len.str());

        o << *this;
        msg_ = o.str();

        return *this;
    }

    int ResponseMessage::parse(size_t &pos)
    {
        if (msg_.empty()) return PROCEDURE_ERROR;

        int ret;

        if (PROCEDURE_OK != (ret = resp_status_->parse(msg_, pos)))
            return ret;

        Ancestor::parse(pos);

        if (!is_valid())
        {
            std::cerr << __PRETTY_FUNCTION__ << ": message invalid!\n";
        }
        
        std::cout << "-reponse------------------------\n";
        std::cout << *this;
        std::cout << "--------------------------------\n";

        return PROCEDURE_OK;
    }

    ResponseMessage::ResponseMessage(RequestMessage &in_msg)
    {
        resp_status_ = std::make_shared<ResponseStatus>();

        add_call_id()
        ->id(in_msg.call_id_.last()->id());

        add_from()
        ->add_name(in_msg.from_.last()->name())
        .add_uri(in_msg.from_.last()->uri());

        for (auto &it : in_msg.from_.last()->header_params_)
        {
            from_.last()->HeaderParam(it.name(), it.value());
        }

        add_to()
        ->add_name(in_msg.to_.last()->name())
        .add_uri(in_msg.to_.last()->uri());

        for (auto &it : in_msg.to_.last()->header_params_)
        {
            to_.last()->HeaderParam(it.name(), it.value());
        }

        add_cseq()
        ->cseq(in_msg.cseq_.last()->cseq())
        .method(in_msg.cseq_.last()->method())
        .inc_seq();

        add_via()
        ->add_proto(SIP_VERSION_2_0_UDP)
        .add_sentby(in_msg.via_.last()->sent_by_);

        for (auto &it : in_msg.via_.last()->header_params_)
        {
            via_.last()->HeaderParam(it.name(), it.value());
        }
    }
} // namespace EasySip

