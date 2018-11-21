#ifndef __QPULOAD__H__
#define __QPULOAD__H__

typedef struct {
    int code;
    char reqid[17];
    char error[64];
    char *body;
} LinkPutret;


int LinkUploadFile(const char *local_path, const char* upHost, const char *upload_token, const char *file_key, const char *mime_type,
                LinkPutret *put_ret);
int LinkUploadBuffer(const char *buffer, int bufferLen, const char* upHost, const char *upload_token, const char *file_key,
	       	const char *customMeta, int nCustomMetaLen, const char *mime_type, LinkPutret *put_ret);
void LinkFreePutret(LinkPutret *put_ret);

#endif