#pragma once
#include <Interpret/ExtraPropTags.h>

namespace columns
{
	struct TagNames
	{
		ULONG ulMatchingTableColumn;
		UINT uidName;
	};

	// All SizedSPropTagArray arrays in ColumnTags.h must have PR_INSTANCE_KEY and PR_ENTRY_ID
	// as the first two properties. The code in CContentsTableListCtrl depends on this.

	// The following enums and structures define the columns and
	// properties used by ContentsTableListCtrl objects.

	// Default properties and columns
	enum
	{
		deftagPR_INSTANCE_KEY,
		deftagPR_ENTRYID,
		deftagPR_ROW_TYPE,
		deftagPR_DISPLAY_NAME,
		deftagPR_CONTENT_COUNT,
		deftagPR_CONTENT_UNREAD,
		deftagPR_DEPTH,
		deftagPT_OBJECT_TYPE,
		DEFTAGS_NUM_COLS
	};

	// These tags represent the default information we would like to pick up
	static const SizedSPropTagArray(DEFTAGS_NUM_COLS, sptDEFCols) = {
		DEFTAGS_NUM_COLS,
		{PR_INSTANCE_KEY,
		 PR_ENTRYID,
		 PR_ROW_TYPE,
		 PR_DISPLAY_NAME_W,
		 PR_CONTENT_COUNT,
		 PR_CONTENT_UNREAD,
		 PR_DEPTH,
		 PR_OBJECT_TYPE},
	};

	static std::vector<TagNames> DEFColumns = {{deftagPR_INSTANCE_KEY, IDS_COLINSTANCEKEY},
											   {deftagPR_DISPLAY_NAME, IDS_COLDISPLAYNAME},
											   {deftagPR_ROW_TYPE, IDS_COLROWTYPE},
											   {deftagPR_DEPTH, IDS_COLDEPTH}};

	// Message store properties and columns
	enum
	{
		storetagPR_INSTANCE_KEY,
		storetagPR_DISPLAY_NAME,
		storetagPR_ENTRY_ID,
		storetagPR_OBJECT_TYPE,
		storetagPR_PROVIDER_DISPLAY,
		storetagPR_RESOURCE_FLAGS,
		storetagPR_DEFAULT_STORE,
		storetagPR_MDB_PROVIDER,
		storetagPR_RESOURCE_TYPE,
		storetagPR_RECORD_KEY,
		storetagPR_SERVICE_UID,
		storetagPR_PROVIDER_UID,
		STORETAGS_NUM_COLS
	};

	// These tags represent the message store information we would like to pick up
	static const SizedSPropTagArray(STORETAGS_NUM_COLS, sptSTORECols) = {
		STORETAGS_NUM_COLS,
		{PR_INSTANCE_KEY,
		 PR_DISPLAY_NAME_W,
		 PR_ENTRYID,
		 PR_OBJECT_TYPE,
		 PR_PROVIDER_DISPLAY_W,
		 PR_RESOURCE_FLAGS,
		 PR_DEFAULT_STORE,
		 PR_MDB_PROVIDER,
		 PR_RESOURCE_TYPE,
		 PR_RECORD_KEY,
		 PR_SERVICE_UID,
		 PR_PROVIDER_UID},
	};

	static std::vector<TagNames> STOREColumns = {
		{storetagPR_DISPLAY_NAME, IDS_COLDISPLAYNAME},
		{storetagPR_DEFAULT_STORE, IDS_COLDEFAULTSTORE},
		{storetagPR_PROVIDER_DISPLAY, IDS_COLPROVIDERDISPLAY},
		{storetagPR_ENTRY_ID, IDS_COLEID},
		{storetagPR_RESOURCE_FLAGS, IDS_COLRESOURCEFLAGS},
		{storetagPR_OBJECT_TYPE, IDS_COLOBJECTTYPE},
		{storetagPR_RESOURCE_TYPE, IDS_COLRESOURCETYPE},
	};

	// Message properties and columns
	enum
	{
		msgtagPR_INSTANCE_KEY,
		msgtagPR_ENTRYID,
		msgtagPR_LONGTERM_ENTRYID_FROM_TABLE,
		msgtagPR_SENT_REPRESENTING_NAME,
		msgtagPR_SUBJECT,
		msgtagPR_CONVERSATION_ID,
		msgtagPR_MESSAGE_CLASS,
		msgtagPR_MESSAGE_DELIVERY_TIME,
		msgtagPR_CLIENT_SUBMIT_TIME,
		msgtagPR_HASATTACH,
		msgtagPR_DISPLAY_TO,
		msgtagPR_MESSAGE_SIZE,
		msgtagPR_MESSAGE_FLAGS,
		msgtagPR_LAST_MODIFICATION_TIME,
		msgtagPR_LAST_MODIFIER_NAME,
		msgtagPR_ROW_TYPE,
		msgtagPR_CONTENT_COUNT,
		msgtagPR_CONTENT_UNREAD,
		msgtagPR_DEPTH,
		msgtagPR_OBJECT_TYPE,
		msgtagPR_CONTENT_FILTER_SCL,
		MSGTAGS_NUM_COLS
	};

	// These tags represent the message information we would like to pick up
	static const SizedSPropTagArray(MSGTAGS_NUM_COLS, sptMSGCols) = {
		MSGTAGS_NUM_COLS,
		{PR_INSTANCE_KEY,
		 PR_ENTRYID,
		 PR_LONGTERM_ENTRYID_FROM_TABLE,
		 PR_SENT_REPRESENTING_NAME_W,
		 PR_SUBJECT_W,
		 PR_CONVERSATION_ID,
		 PR_MESSAGE_CLASS_W,
		 PR_MESSAGE_DELIVERY_TIME,
		 PR_CLIENT_SUBMIT_TIME,
		 PR_HASATTACH,
		 PR_DISPLAY_TO_W,
		 PR_MESSAGE_SIZE,
		 PR_MESSAGE_FLAGS,
		 PR_LAST_MODIFICATION_TIME,
		 CHANGE_PROP_TYPE(PR_LAST_MODIFIER_NAME, PT_UNICODE),
		 PR_ROW_TYPE,
		 PR_CONTENT_COUNT,
		 PR_CONTENT_UNREAD,
		 PR_DEPTH,
		 PR_OBJECT_TYPE,
		 PR_CONTENT_FILTER_SCL},
	};

	static std::vector<TagNames> MSGColumns = {{msgtagPR_INSTANCE_KEY, IDS_COLINSTANCEKEY},
											   {msgtagPR_HASATTACH, IDS_COLATT},
											   {msgtagPR_SENT_REPRESENTING_NAME, IDS_COLFROM},
											   {msgtagPR_DISPLAY_TO, IDS_COLTO},
											   {msgtagPR_SUBJECT, IDS_COLSUBJECT},
											   {msgtagPR_CONVERSATION_ID, IDS_COLCONVERSATIONID},
											   {msgtagPR_ROW_TYPE, IDS_COLROWTYPE},
											   {msgtagPR_CONTENT_COUNT, IDS_COLCONTENTCOUNT},
											   {msgtagPR_CONTENT_UNREAD, IDS_COLCONTENTUNREAD},
											   {msgtagPR_DEPTH, IDS_COLDEPTH},
											   {msgtagPR_MESSAGE_DELIVERY_TIME, IDS_COLRECEIVED},
											   {msgtagPR_CLIENT_SUBMIT_TIME, IDS_COLSUBMITTED},
											   {msgtagPR_MESSAGE_CLASS, IDS_COLMESSAGECLASS},
											   {msgtagPR_MESSAGE_SIZE, IDS_COLSIZE},
											   {msgtagPR_MESSAGE_FLAGS, IDS_COLMSGFLAGS},
											   {msgtagPR_ENTRYID, IDS_COLEID},
											   {msgtagPR_LONGTERM_ENTRYID_FROM_TABLE, IDS_COLLONGTERMEID},
											   {msgtagPR_CONTENT_FILTER_SCL, IDS_COLCONTENTSCL}};

	// Address Book entry properties and columns
	enum
	{
		abtagPR_INSTANCE_KEY,
		abtagPR_ENTRYID,
		abtagPR_DISPLAY_NAME,
		abtagPR_EMAIL_ADDRESS,
		abtagPR_DISPLAY_TYPE,
		abtagPR_OBJECT_TYPE,
		abtagPR_ADDRTYPE,
		ABTAGS_NUM_COLS
	};

	// These tags represent the address book information we would like to pick up
	static const SizedSPropTagArray(ABTAGS_NUM_COLS, sptABCols) = {
		ABTAGS_NUM_COLS,
		PR_INSTANCE_KEY,
		PR_ENTRYID,
		PR_DISPLAY_NAME_W,
		PR_EMAIL_ADDRESS_W,
		PR_DISPLAY_TYPE,
		PR_OBJECT_TYPE,
		PR_ADDRTYPE_W,
	};

	static std::vector<TagNames> ABColumns = {
		{abtagPR_INSTANCE_KEY, IDS_COLINSTANCEKEY},
		{abtagPR_DISPLAY_NAME, IDS_COLDISPLAYNAME},
		{abtagPR_EMAIL_ADDRESS, IDS_COLEMAIL},
		{abtagPR_DISPLAY_TYPE, IDS_COLDISPLAYTYPE},
		{abtagPR_OBJECT_TYPE, IDS_COLOBJECTTYPE},
		{abtagPR_ADDRTYPE, IDS_COLADDRTYPE},
	};

	// Attachment properties and columns
	enum
	{
		attachtagPR_INSTANCE_KEY,
		attachtagPR_ATTACH_NUM,
		attachtagPR_ATTACH_METHOD,
		attachtagPR_ATTACH_LONG_FILENAME,
		attachtagPR_ATTACH_FILENAME,
		attachtagPR_OBJECT_TYPE,
		ATTACHTAGS_NUM_COLS
	};

	// These tags represent the attachment information we would like to pick up
	static const SizedSPropTagArray(ATTACHTAGS_NUM_COLS, sptATTACHCols) = {
		ATTACHTAGS_NUM_COLS,
		PR_INSTANCE_KEY,
		PR_ATTACH_NUM,
		PR_ATTACH_METHOD,
		PR_ATTACH_LONG_FILENAME_W,
		PR_ATTACH_FILENAME_W,
		PR_OBJECT_TYPE,
	};

	static std::vector<TagNames> ATTACHColumns = {
		{attachtagPR_INSTANCE_KEY, IDS_COLINSTANCEKEY},
		{attachtagPR_ATTACH_NUM, IDS_COLNUM},
		{attachtagPR_ATTACH_METHOD, IDS_COLMETHOD},
		{attachtagPR_ATTACH_FILENAME, IDS_COLFILENAME},
	};

	// Mailbox properties and columns
	enum
	{
		mbxtagPR_INSTANCE_KEY,
		mbxtagPR_DISPLAY_NAME,
		mbxtagPR_EMAIL_ADDRESS,
		mbxtagPR_LOCALE_ID,
		mbxtagPR_MESSAGE_SIZE,
		mbxtagPR_MESSAGE_SIZE_EXTENDED,
		mbxtagPR_DELETED_MESSAGE_SIZE_EXTENDED,
		mbxtagPR_DELETED_NORMAL_MESSAGE_SIZE_EXTENDED,
		mbxtagPR_DELETED_ASSOC_MESSAGE_SIZE_EXTENDED,
		mbxtagPR_CONTENT_COUNT,
		mbxtagPR_ASSOC_CONTENT_COUNT,
		mbxtagPR_DELETED_MSG_COUNT,
		mbxtagPR_DELETED_ASSOC_MSG_COUNT,
		mbxtagPR_NT_USER_NAME,
		mbxtagPR_LAST_LOGON_TIME,
		mbxtagPR_LAST_LOGOFF_TIME,
		mbxtagPR_STORAGE_LIMIT_INFORMATION,
		mbxtagPR_QUOTA_WARNING_THRESHOLD,
		mbxtagPR_QUOTA_SEND_THRESHOLD,
		mbxtagPR_QUOTA_RECEIVE_THRESHOLD,
		mbxtagPR_INTERNET_MDNS,
		MBXTAGS_NUM_COLS
	};

	// These tags represent the mailbox information we would like to pick up
	static const SizedSPropTagArray(MBXTAGS_NUM_COLS, sptMBXCols) = {
		MBXTAGS_NUM_COLS,
		PR_INSTANCE_KEY,
		PR_DISPLAY_NAME_W,
		PR_EMAIL_ADDRESS_W,
		PR_LOCALE_ID,
		PR_MESSAGE_SIZE,
		PR_MESSAGE_SIZE_EXTENDED,
		PR_DELETED_MESSAGE_SIZE_EXTENDED,
		PR_DELETED_NORMAL_MESSAGE_SIZE_EXTENDED,
		PR_DELETED_ASSOC_MESSAGE_SIZE_EXTENDED,
		PR_CONTENT_COUNT,
		PR_ASSOC_CONTENT_COUNT,
		PR_DELETED_MSG_COUNT,
		PR_DELETED_ASSOC_MSG_COUNT,
		PR_NT_USER_NAME_W,
		PR_LAST_LOGON_TIME,
		PR_LAST_LOGOFF_TIME,
		PR_STORAGE_LIMIT_INFORMATION,
		PR_QUOTA_WARNING_THRESHOLD,
		PR_QUOTA_SEND_THRESHOLD,
		PR_QUOTA_RECEIVE_THRESHOLD,
		PR_INTERNET_MDNS,
	};

	static std::vector<TagNames> MBXColumns = {
		{mbxtagPR_INSTANCE_KEY, IDS_COLINSTANCEKEY},
		{mbxtagPR_DISPLAY_NAME, IDS_COLDISPLAYNAME},
		{mbxtagPR_EMAIL_ADDRESS, IDS_COLEMAILADDRESS},
		{mbxtagPR_LOCALE_ID, IDS_COLLOCALE},
		{mbxtagPR_MESSAGE_SIZE, IDS_COLSIZE},
		{mbxtagPR_MESSAGE_SIZE_EXTENDED, IDS_COLSIZEEX},
		{mbxtagPR_DELETED_MESSAGE_SIZE_EXTENDED, IDS_COLDELSIZEEX},
		{mbxtagPR_DELETED_NORMAL_MESSAGE_SIZE_EXTENDED, IDS_COLDELNORMALSIZEEX},
		{mbxtagPR_DELETED_ASSOC_MESSAGE_SIZE_EXTENDED, IDS_COLDELASSOCSIZEEX},
		{mbxtagPR_CONTENT_COUNT, IDS_COLCONTENTCOUNT},
		{mbxtagPR_ASSOC_CONTENT_COUNT, IDS_COLASSOCCONTENTCOUNT},
		{mbxtagPR_DELETED_MSG_COUNT, IDS_COLDELCONTENTCOUNT},
		{mbxtagPR_DELETED_ASSOC_MSG_COUNT, IDS_COLDELASSOCCONTENTCOUNT},
		{mbxtagPR_NT_USER_NAME, IDS_COLNTUSER},
		{mbxtagPR_LAST_LOGON_TIME, IDS_COLLASTLOGON},
		{mbxtagPR_LAST_LOGOFF_TIME, IDS_COLLASTLOGOFF},
		{mbxtagPR_STORAGE_LIMIT_INFORMATION, IDS_COLLIMITINFO},
		{mbxtagPR_QUOTA_WARNING_THRESHOLD, IDS_COLQUOTAWARNING},
		{mbxtagPR_QUOTA_SEND_THRESHOLD, IDS_COLQUOTASEND},
		{mbxtagPR_QUOTA_RECEIVE_THRESHOLD, IDS_COLQUOTARECEIVE},
		{mbxtagPR_INTERNET_MDNS, IDS_COLINTERNETMDNS},
	};

	// Public Folder properties and columns
	enum
	{
		pftagPR_INSTANCE_KEY,
		pftagPR_DISPLAY_NAME,
		pftagPR_ASSOC_CONTENT_COUNT,
		pftagPR_ASSOC_MESSAGE_SIZE,
		pftagPR_ASSOC_MESSAGE_SIZE_EXTENDED,
		pftagPR_ASSOC_MSG_W_ATTACH_COUNT,
		pftagPR_ATTACH_ON_ASSOC_MSG_COUNT,
		pftagPR_ATTACH_ON_NORMAL_MSG_COUNT,
		pftagPR_CACHED_COLUMN_COUNT,
		pftagPR_CATEG_COUNT,
		pftagPR_CONTACT_COUNT,
		pftagPR_CONTENT_COUNT,
		pftagPR_CREATION_TIME,
		pftagPR_EMAIL_ADDRESS,
		pftagPR_FOLDER_FLAGS,
		pftagPR_FOLDER_PATHNAME,
		pftagPR_LAST_ACCESS_TIME,
		pftagPR_LAST_MODIFICATION_TIME,
		pftagPR_MESSAGE_SIZE,
		pftagPR_MESSAGE_SIZE_EXTENDED,
		pftagPR_NORMAL_MESSAGE_SIZE,
		pftagPR_NORMAL_MESSAGE_SIZE_EXTENDED,
		pftagPR_NORMAL_MSG_W_ATTACH_COUNT,
		pftagPR_OWNER_COUNT,
		pftagPR_RECIPIENT_ON_ASSOC_MSG_COUNT,
		pftagPR_RECIPIENT_ON_NORMAL_MSG_COUNT,
		pftagPR_RESTRICTION_COUNT,
		pftagPR_PF_OVER_HARD_QUOTA_LIMIT,
		pftagPR_PF_MSG_SIZE_LIMIT,
		pftagPR_PF_DISALLOW_MDB_WIDE_EXPIRY,
		pftagPR_LOCALE_ID,
		pftagPR_CODE_PAGE_ID,
		pftagPR_SORT_LOCALE_ID,
		PFTAGS_NUM_COLS
	};

	// These tags represent the PF information we would like to pick up
	static const SizedSPropTagArray(PFTAGS_NUM_COLS, sptPFCols) = {
		PFTAGS_NUM_COLS,
		PR_INSTANCE_KEY,
		PR_DISPLAY_NAME_W,
		PR_ASSOC_CONTENT_COUNT,
		PR_ASSOC_MESSAGE_SIZE,
		PR_ASSOC_MESSAGE_SIZE_EXTENDED,
		PR_ASSOC_MSG_W_ATTACH_COUNT,
		PR_ATTACH_ON_ASSOC_MSG_COUNT,
		PR_ATTACH_ON_NORMAL_MSG_COUNT,
		PR_CACHED_COLUMN_COUNT,
		PR_CATEG_COUNT,
		PR_CONTACT_COUNT,
		PR_CONTENT_COUNT,
		PR_CREATION_TIME,
		PR_EMAIL_ADDRESS_W,
		PR_FOLDER_FLAGS,
		CHANGE_PROP_TYPE(PR_FOLDER_PATHNAME, PT_UNICODE),
		PR_LAST_ACCESS_TIME,
		PR_LAST_MODIFICATION_TIME,
		PR_MESSAGE_SIZE,
		PR_MESSAGE_SIZE_EXTENDED,
		PR_NORMAL_MESSAGE_SIZE,
		PR_NORMAL_MESSAGE_SIZE_EXTENDED,
		PR_NORMAL_MSG_W_ATTACH_COUNT,
		PR_OWNER_COUNT,
		PR_RECIPIENT_ON_ASSOC_MSG_COUNT,
		PR_RECIPIENT_ON_NORMAL_MSG_COUNT,
		PR_RESTRICTION_COUNT,
		PR_PF_OVER_HARD_QUOTA_LIMIT,
		PR_PF_MSG_SIZE_LIMIT,
		PR_PF_DISALLOW_MDB_WIDE_EXPIRY,
		PR_LOCALE_ID,
		PR_CODE_PAGE_ID,
		PR_SORT_LOCALE_ID,
	};

	static std::vector<TagNames> PFColumns = {{pftagPR_INSTANCE_KEY, IDS_COLINSTANCEKEY},
											  {pftagPR_DISPLAY_NAME, IDS_COLDISPLAYNAME},
											  {pftagPR_CONTENT_COUNT, IDS_COLCONTENTCOUNT},
											  {pftagPR_MESSAGE_SIZE, IDS_COLMESSAGESIZE}};

	// Status table properties and columns
	enum
	{
		statustagPR_INSTANCE_KEY,
		statustagPR_ENTRYID,
		statustagPR_DISPLAY_NAME,
		statustagPR_STATUS_CODE,
		statustagPR_RESOURCE_METHODS,
		statustagPR_PROVIDER_DLL_NAME,
		statustagPR_RESOURCE_FLAGS,
		statustagPR_RESOURCE_TYPE,
		statustagPR_IDENTITY_DISPLAY,
		statustagPR_IDENTITY_ENTRYID,
		statustagPR_IDENTITY_SEARCH_KEY,
		statustagPR_OBJECT_TYPE,
		STATUSTAGS_NUM_COLS
	};

	// These tags represent the status information we would like to pick up
	static const SizedSPropTagArray(STATUSTAGS_NUM_COLS, sptSTATUSCols) = {
		STATUSTAGS_NUM_COLS,
		PR_INSTANCE_KEY,
		PR_ENTRYID,
		PR_DISPLAY_NAME_A, // Since the MAPI status table does not support Unicode, we have to ask for ANSI
		PR_STATUS_CODE,
		PR_RESOURCE_METHODS,
		PR_PROVIDER_DLL_NAME_A,
		PR_RESOURCE_FLAGS,
		PR_RESOURCE_TYPE,
		PR_IDENTITY_DISPLAY_A,
		PR_IDENTITY_ENTRYID,
		PR_IDENTITY_SEARCH_KEY,
		PR_OBJECT_TYPE,
	};

	static std::vector<TagNames> STATUSColumns = {{statustagPR_INSTANCE_KEY, IDS_COLINSTANCEKEY},
												  {statustagPR_DISPLAY_NAME, IDS_COLDISPLAYNAME},
												  {statustagPR_IDENTITY_DISPLAY, IDS_COLIDENTITY},
												  {statustagPR_PROVIDER_DLL_NAME, IDS_COLPROVIDERDLL},
												  {statustagPR_RESOURCE_METHODS, IDS_COLRESOURCEMETHODS},
												  {statustagPR_RESOURCE_FLAGS, IDS_COLRESOURCEFLAGS},
												  {statustagPR_RESOURCE_TYPE, IDS_COLRESOURCETYPE},
												  {statustagPR_STATUS_CODE, IDS_COLSTATUSCODE},
												  {statustagPR_OBJECT_TYPE, IDS_COLOBJECTTYPE}};

	// Receive table properties and columns
	enum
	{
		receivetagPR_INSTANCE_KEY,
		receivetagPR_ENTRYID,
		receivetagPR_MESSAGE_CLASS,
		receivetagPR_OBJECT_TYPE,
		RECEIVETAGS_NUM_COLS
	};

	// These tags represent the receive table information we would like to pick up
	static const SizedSPropTagArray(RECEIVETAGS_NUM_COLS, sptRECEIVECols) = {
		RECEIVETAGS_NUM_COLS,
		PR_INSTANCE_KEY,
		PR_ENTRYID,
		PR_MESSAGE_CLASS_W,
		PR_OBJECT_TYPE,
	};

	static std::vector<TagNames> RECEIVEColumns = {{receivetagPR_INSTANCE_KEY, IDS_COLINSTANCEKEY},
												   {receivetagPR_MESSAGE_CLASS, IDS_COLMESSAGECLASS}};

	// Hierarchy table properties and columns
	enum
	{
		hiertagPR_DISPLAY_NAME,
		hiertagPR_INSTANCE_KEY,
		hiertagPR_DEPTH,
		hiertagPR_OBJECT_TYPE,
		hiertagPR_SORT_POSITION,
		hiertagPR_SORT_PARENTID,
		HIERARCHYTAGS_NUM_COLS
	};

	// These tags represent the hierarchy information we would like to pick up
	static const SizedSPropTagArray(HIERARCHYTAGS_NUM_COLS, sptHIERARCHYCols) = {
		HIERARCHYTAGS_NUM_COLS,
		PR_DISPLAY_NAME_W,
		PR_INSTANCE_KEY,
		PR_DEPTH,
		PR_OBJECT_TYPE,
		PR_SORT_POSITION,
		PR_SORT_PARENTID,
	};

	static std::vector<TagNames> HIERARCHYColumns = {
		{hiertagPR_DISPLAY_NAME, IDS_COLDISPLAYNAME},
		{hiertagPR_INSTANCE_KEY, IDS_COLINSTANCEKEY},
		{hiertagPR_DEPTH, IDS_COLDEPTH},
		{hiertagPR_SORT_POSITION, IDS_COLSORTPOSITION},
		{hiertagPR_SORT_PARENTID, IDS_COLSORTPARENTID},
	};

	// Profile list properties and columns
	enum
	{
		proflisttagPR_INSTANCE_KEY,
		proflisttagPR_DISPLAY_NAME,
		PROFLISTTAGS_NUM_COLS
	};

	// These tags represent the profile information we would like to pick up
	static const SizedSPropTagArray(PROFLISTTAGS_NUM_COLS, sptPROFLISTCols) = {
		PROFLISTTAGS_NUM_COLS,
		PR_INSTANCE_KEY,
		PR_DISPLAY_NAME_A,
	};

	static std::vector<TagNames> PROFLISTColumns = {{proflisttagPR_INSTANCE_KEY, IDS_COLINSTANCEKEY},
													{proflisttagPR_DISPLAY_NAME, IDS_COLDISPLAYNAME}};

	// Service list properties and columns
	enum
	{
		servicetagPR_INSTANCE_KEY,
		servicetagPR_DISPLAY_NAME,
		SERVICETAGS_NUM_COLS
	};

	// These tags represent the service information we would like to pick up
	static const SizedSPropTagArray(SERVICETAGS_NUM_COLS, sptSERVICECols) = {
		SERVICETAGS_NUM_COLS,
		PR_INSTANCE_KEY,
		PR_DISPLAY_NAME_W,
	};

	static std::vector<TagNames> SERVICEColumns = {{servicetagPR_INSTANCE_KEY, IDS_COLINSTANCEKEY},
												   {servicetagPR_DISPLAY_NAME, IDS_COLDISPLAYNAME}};

	// Provider list properties and columns
	enum
	{
		providertagPR_INSTANCE_KEY,
		providertagPR_DISPLAY_NAME,
		PROVIDERTAGS_NUM_COLS
	};

	// These tags represent the provider information we would like to pick up
	static const SizedSPropTagArray(PROVIDERTAGS_NUM_COLS, sptPROVIDERCols) = {
		PROVIDERTAGS_NUM_COLS,
		PR_INSTANCE_KEY,
		PR_DISPLAY_NAME_A,
	};

	static std::vector<TagNames> PROVIDERColumns = {{providertagPR_INSTANCE_KEY, IDS_COLINSTANCEKEY},
													{providertagPR_DISPLAY_NAME, IDS_COLDISPLAYNAME}};

	// Rules properties and columns
	enum
	{
		ruletagPR_INSTANCE_KEY,
		ruletagPR_RULE_NAME,
		RULETAGS_NUM_COLS
	};

	// These tags represent the rules information we would like to pick up
	static const SizedSPropTagArray(RULETAGS_NUM_COLS, sptRULECols) = {RULETAGS_NUM_COLS,
																	   PR_INSTANCE_KEY,
																	   PR_RULE_NAME};

	static std::vector<TagNames> RULEColumns = {{ruletagPR_INSTANCE_KEY, IDS_COLINSTANCEKEY},
												{ruletagPR_RULE_NAME, IDS_COLRULENAME}};

	// ACL properties and columns
	enum
	{
		acltagPR_MEMBER_ID,
		acltagPR_MEMBER_RIGHTS,
		ACLTAGS_NUM_COLS
	};

	// These tags represent the ACL information we would like to pick up
	static const SizedSPropTagArray(ACLTAGS_NUM_COLS, sptACLCols) = {ACLTAGS_NUM_COLS, PR_MEMBER_ID, PR_MEMBER_RIGHTS};

	static std::vector<TagNames> ACLColumns = {{acltagPR_MEMBER_ID, IDS_COLMEMBERID},
											   {acltagPR_MEMBER_RIGHTS, IDS_COLMEMBERRIGHTS}};

	// These structures define the columns used in SingleMAPIPropListCtrl
	enum
	{
		pcPROPBESTGUESS,
		pcPROPOTHERNAMES,
		pcPROPTAG,
		pcPROPTYPE,
		pcPROPVAL,
		pcPROPVALALT,
		pcPROPSMARTVIEW,
		pcPROPNAMEDNAME,
		pcPROPNAMEDIID,
		PROPCOLTAGS_NUM_COLS
	};

	static std::vector<TagNames> PropColumns = {
		{pcPROPBESTGUESS, IDS_COLBESTGUESS},
		{pcPROPOTHERNAMES, IDS_COLOTHER_NAMES},
		{pcPROPTAG, IDS_COLTAG},
		{pcPROPTYPE, IDS_COLTYPE},
		{pcPROPVAL, IDS_COLVALUE},
		{pcPROPVALALT, IDS_COLVALUEALTERNATEVIEW},
		{pcPROPSMARTVIEW, IDS_SMARTVIEW},
		{pcPROPNAMEDNAME, IDS_COLNAMED_PROP_NAME},
		{pcPROPNAMEDIID, IDS_COLNAMED_PROP_GUID},
	};

	static std::vector<TagNames> PropXMLNames = {
		{pcPROPBESTGUESS, IDS_COLBESTGUESS},
		{pcPROPOTHERNAMES, IDS_COLOTHERNAMES},
		{pcPROPTAG, IDS_COLTAG},
		{pcPROPTYPE, IDS_COLTYPE},
		{pcPROPVAL, IDS_COLVALUE},
		{pcPROPVALALT, IDS_COLALTVALUE},
		{pcPROPSMARTVIEW, IDS_COLSMARTVIEW},
		{pcPROPNAMEDNAME, IDS_COLNAMEDPROPNAME},
		{pcPROPNAMEDIID, IDS_COLNAMEDPROPGUID},
	};
} // namespace columns