#pragma once

#include "mapper.h"

namespace EasySip
{
	typedef CodeMap RespCode;
	
	// RFC-3261
	// 1xx provisional
	const RespCode SIP_RESPONSE_TRYING(100, "Trying");
	const RespCode SIP_RESPONSE_RINGING(180, "Ringing");
	const RespCode SIP_RESPONSE_FORWARDING(181);
	const RespCode SIP_RESPONSE_QUEUED(182);
	const RespCode SIP_RESPONSE_SESSION_PROGRESS(183);
	// 2xx successful
	const RespCode SIP_RESPONSE_SUCCESSFUL(200, "OK");
	const RespCode SIP_RESPONSE_ACCEPTED(202, "Accepted");
	// 3xx redirection
	const RespCode SIP_RESPONSE_MULTI_CHOICES(300);
	const RespCode SIP_RESPONSE_MOVE_PERM(301);
	const RespCode SIP_RESPONSE_MOVE_TEMP(302);
	const RespCode SIP_RESPONSE_USE_PROXY(305);
	const RespCode SIP_RESPONSE_ALTER_SERVICE(380);
	// 4xx request failure
	const RespCode SIP_RESPONSE_BAD_REQUEST(400);
	const RespCode SIP_RESPONSE_UNAUTHORIZED(401);
	const RespCode SIP_RESPONSE_REQUIRE_PAYMENT(402);
	const RespCode SIP_RESPONSE_FORBIDDEN(403);
	const RespCode SIP_RESPONSE_NOT_FOUND(404);
	const RespCode SIP_RESPONSE_METHOD_NOT_ALLOWED(405);
	const RespCode SIP_RESPONSE_NOT_ACCEPTABLE(406);
	const RespCode SIP_RESPONSE_REQUIRE_PROXY_AUTHENTICATION(407);
	const RespCode SIP_RESPONSE_REQUIRE_REQUEST_TIMEOUT(408);
	const RespCode SIP_RESPONSE_RESOURCE_NOT_AVAIL(410);
	const RespCode SIP_RESPONSE_REQUEST_ENTITY_TOO_LARGE(413);
	const RespCode SIP_RESPONSE_REQUEST_URI_TOO_LONG(414);
	const RespCode SIP_RESPONSE_UNSUPPORTED_MEDIA_TYPE(415);
	const RespCode SIP_RESPONSE_UNSUPPORTED_URI_SCHEME(416);
	const RespCode SIP_RESPONSE_BAD_EXTENSION(420);
	const RespCode SIP_RESPONSE_REQUIRE_EXTENSION(421);
	const RespCode SIP_RESPONSE_INTERVAL_TOO_BRIEF(423);
	const RespCode SIP_RESPONSE_UNAVAIL_TEMP(480);
	const RespCode SIP_RESPONSE_CALL_OR_TRANSACTION_NOT_EXIST(481);
	const RespCode SIP_RESPONSE_LOOP_DETECTED(482);
	const RespCode SIP_RESPONSE_TOO_MANY_HOPS(483);
	const RespCode SIP_RESPONSE_ADDRESS_INCOMPLETE(484);
	const RespCode SIP_RESPONSE_AMBIGUOUS_URI(485);
	const RespCode SIP_RESPONSE_BUSY(486);
	const RespCode SIP_RESPONSE_REQUEST_TERMINATED(487);
	const RespCode SIP_RESPONSE_NOT_ACCEPTABLE_HERE(488);
	const RespCode SIP_RESPONSE_REQUEST_PENDING(491);
	const RespCode SIP_RESPONSE_UNDECIPHERABLE(493);
	// 5xx server failure
	const RespCode SIP_RESPONSE_SERVER_INTERNAL_ERROR(500);
	const RespCode SIP_RESPONSE_FUNC_NOT_IMPLEMENTED(501);
	const RespCode SIP_RESPONSE_BAD_GATEWAY(502);
	const RespCode SIP_RESPONSE_SERVICE_UNAVAIL(503);
	const RespCode SIP_RESPONSE_SERVICE_TIMEOUT(504);
	const RespCode SIP_RESPONSE_UNSUPPORTED_VERSION(505);
	const RespCode SIP_RESPONSE_MESSAGE_TOO_LARGE(513);
	// 6xx global failures
	const RespCode SIP_RESPONSE_GLOBAL_BUSY(600);
	const RespCode SIP_RESPONSE_CALLEE_DECLINE(603);
	const RespCode SIP_RESPONSE_GLOBAL_NOT_EXIST(604);
	const RespCode SIP_RESPONSE_GLOBAL_NOT_ACCEPTABLE(606);

} // namespace EasySip
