/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLRepairModel : NSObject {
    BLRepairLayerStack * _layerStack;
    NSLock * _lock;
    NSDictionary * _strokesDataDictionary;
}

- (void).cxx_destruct;
- (void)buildLayerStackWithAnalysisImage:(id)arg1 andRepairImage:(id)arg2;
- (bool)hasLayerStack;
- (bool)hasRedeye;
- (bool)hasRepair;
- (bool)hasRepairOrRedeye;
- (id)imagePatchList;
- (id)initWithAdjustmentsDictionary:(id)arg1;
- (id)layerStack;
- (void)setLayerStack:(id)arg1;

@end
