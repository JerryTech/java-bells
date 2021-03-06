/*
 * Jitsi, the OpenSource Java VoIP and Instant Messaging client.
 *
 * Distributable under LGPL license.
 * See terms of license at gnu.org.
 */

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_jitsi_impl_neomedia_quicktime_QTCaptureSession */

#ifndef _Included_org_jitsi_impl_neomedia_quicktime_QTCaptureSession
#define _Included_org_jitsi_impl_neomedia_quicktime_QTCaptureSession
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_jitsi_impl_neomedia_quicktime_QTCaptureSession
 * Method:    addInput
 * Signature: (JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_jitsi_impl_neomedia_quicktime_QTCaptureSession_addInput
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_jitsi_impl_neomedia_quicktime_QTCaptureSession
 * Method:    addOutput
 * Signature: (JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_jitsi_impl_neomedia_quicktime_QTCaptureSession_addOutput
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_jitsi_impl_neomedia_quicktime_QTCaptureSession
 * Method:    allocAndInit
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_jitsi_impl_neomedia_quicktime_QTCaptureSession_allocAndInit
  (JNIEnv *, jclass);

/*
 * Class:     org_jitsi_impl_neomedia_quicktime_QTCaptureSession
 * Method:    startRunning
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_jitsi_impl_neomedia_quicktime_QTCaptureSession_startRunning
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_jitsi_impl_neomedia_quicktime_QTCaptureSession
 * Method:    stopRunning
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_jitsi_impl_neomedia_quicktime_QTCaptureSession_stopRunning
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
