DEFINE-DEFAULT copies 1
DEFINE-DEFAULT filetype application/postscript
{
	NAME "Print file using Print-Job"

	OPERATION Print-Job

	GROUP operation-attributes-tag
	ATTR charset attributes-charset utf-8
	ATTR language attributes-natural-language en
	ATTR uri printer-uri $uri
	ATTR name requesting-user-name $user
	ATTR mimeMediaType document-format $filetype

	GROUP job-attributes-tag
	ATTR integer copies $copies
	ATTR keyword media iso_a4_210x297mm

	FILE $filename

	STATUS successful-ok
	STATUS successful-ok-ignored-or-substituted-attributes

	EXPECT job-id
	EXPECT job-uri
}
