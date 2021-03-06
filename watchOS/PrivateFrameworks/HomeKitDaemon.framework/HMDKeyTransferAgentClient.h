//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDKeyTransferAgent.h>

#import <HomeKitDaemon/HMFNetMonitorDelegate-Protocol.h>
#import <HomeKitDaemon/HMFNetServiceBrowserDelegate-Protocol.h>
#import <HomeKitDaemon/HMFNetServiceDelegate-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMFExponentialBackoffTimer, HMFNetMonitor, HMFNetServiceBrowser, NSMutableDictionary, NSMutableSet, NSString;

@interface HMDKeyTransferAgentClient : HMDKeyTransferAgent <HMFNetServiceDelegate, HMFTimerDelegate, HMFNetMonitorDelegate, HMFNetServiceBrowserDelegate>
{
    _Bool _resolutionInProgress;
    _Bool _haveCulledPlist;
    unsigned int _residentProvisioningStatus;
    HMFNetServiceBrowser *_serviceBrowser;
    NSMutableDictionary *_idsKeys;
    NSMutableDictionary *_bonjourKeys;
    NSMutableSet *_targetsToProcess;
    NSString *_pairingWithUUID;
    HMFExponentialBackoffTimer *_atHomeRetryTimer;
    HMFNetMonitor *_netMonitor;
    int _tfaState;
}

+ (id)logCategory;
+ (void)twoFactorAuthenticationEnabledForAccount:(id)arg1 altDSID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(nonatomic) int tfaState; // @synthesize tfaState=_tfaState;
@property(nonatomic) _Bool haveCulledPlist; // @synthesize haveCulledPlist=_haveCulledPlist;
@property(retain, nonatomic) HMFNetMonitor *netMonitor; // @synthesize netMonitor=_netMonitor;
@property(retain, nonatomic) HMFExponentialBackoffTimer *atHomeRetryTimer; // @synthesize atHomeRetryTimer=_atHomeRetryTimer;
@property(retain, nonatomic) NSString *pairingWithUUID; // @synthesize pairingWithUUID=_pairingWithUUID;
@property(nonatomic) _Bool resolutionInProgress; // @synthesize resolutionInProgress=_resolutionInProgress;
@property(retain, nonatomic) NSMutableSet *targetsToProcess; // @synthesize targetsToProcess=_targetsToProcess;
@property(retain, nonatomic) NSMutableDictionary *bonjourKeys; // @synthesize bonjourKeys=_bonjourKeys;
@property(retain, nonatomic) NSMutableDictionary *idsKeys; // @synthesize idsKeys=_idsKeys;
@property(retain, nonatomic) HMFNetServiceBrowser *serviceBrowser; // @synthesize serviceBrowser=_serviceBrowser;
@property(nonatomic) unsigned int residentProvisioningStatus; // @synthesize residentProvisioningStatus=_residentProvisioningStatus;
- (id)logIdentifier;
- (void)netServiceBrowser:(id)arg1 didAddService:(id)arg2;
- (void)netService:(id)arg1 didUpdateTXTRecord:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didStopBrowsingWithError:(id)arg2;
- (void)receivedBonjourTXTFrom:(id)arg1 withUUIDData:(id)arg2;
- (void)_handleResidentProvisioningStatusChanged:(id)arg1;
- (void)_handleKeyTransferAgentMessage:(id)arg1;
- (void)_restartKeyTransfer:(id)arg1;
- (void)__accountChanged:(id)arg1;
- (void)__accessoryIsReachable:(id)arg1;
- (void)__deviceRemovedFromAccount:(id)arg1;
- (void)_device:(id)arg1 removedFromAccount:(id)arg2;
- (void)__deviceUpdated:(id)arg1;
- (void)__deviceAddedToAccount:(id)arg1;
- (void)_device:(id)arg1 addedToAccount:(id)arg2;
- (_Bool)_newDeviceSeen:(id)arg1;
- (void)_sendATVPrivateKey:(id)arg1 withDevice:(id)arg2 retry:(unsigned int)arg3;
- (void)_sendIOSPublicKey:(id)arg1 withDevice:(id)arg2;
- (void)_havePairVerifiedAccessoryWithKeyUUID:(id)arg1 forDevice:(id)arg2;
- (void)_haveVerifiedTwoFactorAuthenticationWithKeyUUID:(id)arg1 forTarget:(id)arg2;
- (void)_tryPairingWithAccessories:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_tfaVerificationCompleteForKeyUUID:(id)arg1 forTarget:(id)arg2;
- (void)_startPairingWithKeyUUID:(id)arg1 forTarget:(id)arg2;
- (void)_endPairingWithError:(id)arg1 suspendingTimer:(_Bool)arg2;
- (void)_beginBonjourResolution:(_Bool)arg1;
- (void)_reallyBeginBonjourResolution;
- (void)_stopBrowser;
- (void)_startBrowser;
- (void)resetConfig;
- (void)queryPlistDevices;
- (id)_deviceWithUUID:(id)arg1;
- (void)_saveKeyPlist;
- (void)networkMonitorIsReachable:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (void)dealloc;
- (id)initWithHomeManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

