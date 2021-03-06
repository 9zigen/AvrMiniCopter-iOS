#import <Foundation/Foundation.h>
#import "GStreamerBackendDelegate.h"

@interface GStreamerBackend : NSObject

/* Initialization method. Pass the delegate that will take care of the UI.
 * This delegate must implement the GStreamerBackendDelegate protocol.
 * Pass also the UIView object that will hold the video window. */
-(id) init:(id) uiDelegate videoView:(UIView*) video_view;

void config (unsigned char *_my_ip, unsigned int _my_p, unsigned int _width);

/* Set the pipeline to PLAYING */
-(void) play;

/* Set the pipeline to PAUSED */
-(void) pause;

@end