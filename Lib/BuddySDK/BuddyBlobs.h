//
//  BuddyBlobs.h
//  BuddySDK
//
//  Created by Ryan Brandenburg on 5/22/13.
//
//

#import <Foundation/Foundation.h>

@class BuddyStringResponse;
@class BuddyNSNumberResponse;
@class BuddyBlobResponse;
@class BuddyArrayResponse;

typedef void (^BuddyBlobAddBlobCallback)(BuddyBlobResponse * response);

typedef void (^BuddyBlobGetBlobCallback) (BuddyArrayResponse * response);

typedef void (^BuddyBlobGetBlobInfoCallback)(BuddyBlobResponse * response);

typedef void (^BuddyBlobBlobListCallback)(BuddyArrayResponse * response);

@interface BuddyBlobs : NSObject

-(void)addBlob:(NSString *)friendlyName
        appTag:(NSString *)appTag
      latitude:(double)latitude
     longtidue:(double)longitude
      mimeType:(NSString *)mimeType
      blobData:(NSData *)blobData
         state:(NSObject *)state
      callback:(BuddyBlobAddBlobCallback)callback;

-(void)getBlob:(NSNumber*)blobID
state:(NSObject *)state
callback:(BuddyBlobGetBlobCallback)callback;

-(void)getBlobInfo:(NSNumber*)blobID
             state:(NSObject *)state
          callback:(BuddyBlobGetBlobInfoCallback)callback;

-(void)searchMyBlobs:(NSString *)friendlyName
                 mimeType:(NSString *)mimeType
                   appTag:(NSString *)appTag
           searchDistance:(int)searchDistance
           searchLatitude:(double)searchLatitude
          searchLongitude:(double)searchLongitude
               timeFilter:(int)timeFilter
              recordLimit:(int)recordLimit
                    state:(NSObject *)state
                 callback:(BuddyBlobBlobListCallback)callback;

-(void)searchBlobs:(NSString *)friendlyName
                 mimeType:(NSString *)mimeType
                   appTag:(NSString *)appTag
           searchDistance:(int)searchDistance
           searchLatitude:(double)searchLatitude
          searchLongitude:(double)searchLongitude
               timeFilter:(int)timeFilter
              recordLimit:(int)recordLimit
                    state:(NSObject *)state
                 callback:(BuddyBlobBlobListCallback)callback;

-(void)getBlobList:(NSNumber*)userID
       recordLimit:(int)recordLimit
             state:(NSObject *)state
          callback:(BuddyBlobBlobListCallback)callback;

-(void)getMyBlobList:(int)recordLimit
               state:(NSObject *)state
            callback:(BuddyBlobBlobListCallback)callback;

@end
