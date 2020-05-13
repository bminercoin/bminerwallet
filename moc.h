

#pragma once

#ifndef GO_MOC_127b18_H
#define GO_MOC_127b18_H

#include <stdint.h>

#ifdef __cplusplus
class QmlBridge127b18;
void QmlBridge127b18_QmlBridge127b18_QRegisterMetaTypes();
extern "C" {
#endif

struct Moc_PackedString { char* data; long long len; void* ptr; };
struct Moc_PackedList { void* data; long long len; };
void QmlBridge127b18_ConnectDisplayTotalBalance(void* ptr, long long t);
void QmlBridge127b18_DisconnectDisplayTotalBalance(void* ptr);
void QmlBridge127b18_DisplayTotalBalance(void* ptr, struct Moc_PackedString balance, struct Moc_PackedString balanceUSD);
void QmlBridge127b18_ConnectDisplayAvailableBalance(void* ptr, long long t);
void QmlBridge127b18_DisconnectDisplayAvailableBalance(void* ptr);
void QmlBridge127b18_DisplayAvailableBalance(void* ptr, struct Moc_PackedString data);
void QmlBridge127b18_ConnectDisplayLockedBalance(void* ptr, long long t);
void QmlBridge127b18_DisconnectDisplayLockedBalance(void* ptr);
void QmlBridge127b18_DisplayLockedBalance(void* ptr, struct Moc_PackedString data);
void QmlBridge127b18_ConnectDisplayAddress(void* ptr, long long t);
void QmlBridge127b18_DisconnectDisplayAddress(void* ptr);
void QmlBridge127b18_DisplayAddress(void* ptr, struct Moc_PackedString address, struct Moc_PackedString wallet, char displayFiatConversion);
void QmlBridge127b18_ConnectAddTransactionToList(void* ptr, long long t);
void QmlBridge127b18_DisconnectAddTransactionToList(void* ptr);
void QmlBridge127b18_AddTransactionToList(void* ptr, struct Moc_PackedString paymentID, struct Moc_PackedString transactionID, struct Moc_PackedString amount, struct Moc_PackedString confirmations, struct Moc_PackedString ti, struct Moc_PackedString number);
void QmlBridge127b18_ConnectAddRemoteNodeToList(void* ptr, long long t);
void QmlBridge127b18_DisconnectAddRemoteNodeToList(void* ptr);
void QmlBridge127b18_AddRemoteNodeToList(void* ptr, struct Moc_PackedString nodeName);
void QmlBridge127b18_ConnectChangeTextRemoteNode(void* ptr, long long t);
void QmlBridge127b18_DisconnectChangeTextRemoteNode(void* ptr);
void QmlBridge127b18_ChangeTextRemoteNode(void* ptr, int index, struct Moc_PackedString newText);
void QmlBridge127b18_ConnectSetSelectedRemoteNode(void* ptr, long long t);
void QmlBridge127b18_DisconnectSetSelectedRemoteNode(void* ptr);
void QmlBridge127b18_SetSelectedRemoteNode(void* ptr, int index);
void QmlBridge127b18_ConnectDisplayPopup(void* ptr, long long t);
void QmlBridge127b18_DisconnectDisplayPopup(void* ptr);
void QmlBridge127b18_DisplayPopup(void* ptr, struct Moc_PackedString text, int ti);
void QmlBridge127b18_ConnectDisplaySyncingInfo(void* ptr, long long t);
void QmlBridge127b18_DisconnectDisplaySyncingInfo(void* ptr);
void QmlBridge127b18_DisplaySyncingInfo(void* ptr, struct Moc_PackedString syncing, struct Moc_PackedString syncingInfo);
void QmlBridge127b18_ConnectDisplayErrorDialog(void* ptr, long long t);
void QmlBridge127b18_DisconnectDisplayErrorDialog(void* ptr);
void QmlBridge127b18_DisplayErrorDialog(void* ptr, struct Moc_PackedString errorText, struct Moc_PackedString errorInformativeText);
void QmlBridge127b18_ConnectDisplayInfoDialog(void* ptr, long long t);
void QmlBridge127b18_DisconnectDisplayInfoDialog(void* ptr);
void QmlBridge127b18_DisplayInfoDialog(void* ptr, struct Moc_PackedString title, struct Moc_PackedString mainText, struct Moc_PackedString informativeText);
void QmlBridge127b18_ConnectClearTransferAmount(void* ptr, long long t);
void QmlBridge127b18_DisconnectClearTransferAmount(void* ptr);
void QmlBridge127b18_ClearTransferAmount(void* ptr);
void QmlBridge127b18_ConnectAskForFusion(void* ptr, long long t);
void QmlBridge127b18_DisconnectAskForFusion(void* ptr);
void QmlBridge127b18_AskForFusion(void* ptr);
void QmlBridge127b18_ConnectClearListTransactions(void* ptr, long long t);
void QmlBridge127b18_DisconnectClearListTransactions(void* ptr);
void QmlBridge127b18_ClearListTransactions(void* ptr);
void QmlBridge127b18_ConnectDisplayPrivateKeys(void* ptr, long long t);
void QmlBridge127b18_DisconnectDisplayPrivateKeys(void* ptr);
void QmlBridge127b18_DisplayPrivateKeys(void* ptr, struct Moc_PackedString filename, struct Moc_PackedString privateViewKey, struct Moc_PackedString privateSpendKey, struct Moc_PackedString walletAddress);
void QmlBridge127b18_ConnectDisplaySeed(void* ptr, long long t);
void QmlBridge127b18_DisconnectDisplaySeed(void* ptr);
void QmlBridge127b18_DisplaySeed(void* ptr, struct Moc_PackedString filename, struct Moc_PackedString mnemonicSeed, struct Moc_PackedString walletAddress);
void QmlBridge127b18_ConnectDisplayOpenWalletScreen(void* ptr, long long t);
void QmlBridge127b18_DisconnectDisplayOpenWalletScreen(void* ptr);
void QmlBridge127b18_DisplayOpenWalletScreen(void* ptr);
void QmlBridge127b18_ConnectDisplayMainWalletScreen(void* ptr, long long t);
void QmlBridge127b18_DisconnectDisplayMainWalletScreen(void* ptr);
void QmlBridge127b18_DisplayMainWalletScreen(void* ptr);
void QmlBridge127b18_ConnectFinishedLoadingWalletd(void* ptr, long long t);
void QmlBridge127b18_DisconnectFinishedLoadingWalletd(void* ptr);
void QmlBridge127b18_FinishedLoadingWalletd(void* ptr);
void QmlBridge127b18_ConnectFinishedCreatingWallet(void* ptr, long long t);
void QmlBridge127b18_DisconnectFinishedCreatingWallet(void* ptr);
void QmlBridge127b18_FinishedCreatingWallet(void* ptr);
void QmlBridge127b18_ConnectFinishedSendingTransaction(void* ptr, long long t);
void QmlBridge127b18_DisconnectFinishedSendingTransaction(void* ptr);
void QmlBridge127b18_FinishedSendingTransaction(void* ptr);
void QmlBridge127b18_ConnectDisplayPathToPreviousWallet(void* ptr, long long t);
void QmlBridge127b18_DisconnectDisplayPathToPreviousWallet(void* ptr);
void QmlBridge127b18_DisplayPathToPreviousWallet(void* ptr, struct Moc_PackedString pathToPreviousWallet);
void QmlBridge127b18_ConnectDisplayWalletCreationLocation(void* ptr, long long t);
void QmlBridge127b18_DisconnectDisplayWalletCreationLocation(void* ptr);
void QmlBridge127b18_DisplayWalletCreationLocation(void* ptr, struct Moc_PackedString walletLocation);
void QmlBridge127b18_ConnectDisplayUseRemoteNode(void* ptr, long long t);
void QmlBridge127b18_DisconnectDisplayUseRemoteNode(void* ptr);
void QmlBridge127b18_DisplayUseRemoteNode(void* ptr, char useRemote);
void QmlBridge127b18_ConnectHideSettingsScreen(void* ptr, long long t);
void QmlBridge127b18_DisconnectHideSettingsScreen(void* ptr);
void QmlBridge127b18_HideSettingsScreen(void* ptr);
void QmlBridge127b18_ConnectDisplaySettingsScreen(void* ptr, long long t);
void QmlBridge127b18_DisconnectDisplaySettingsScreen(void* ptr);
void QmlBridge127b18_DisplaySettingsScreen(void* ptr);
void QmlBridge127b18_ConnectDisplaySettingsValues(void* ptr, long long t);
void QmlBridge127b18_DisconnectDisplaySettingsValues(void* ptr);
void QmlBridge127b18_DisplaySettingsValues(void* ptr, char displayFiat);
void QmlBridge127b18_ConnectDisplaySettingsRemoteDaemonInfo(void* ptr, long long t);
void QmlBridge127b18_DisconnectDisplaySettingsRemoteDaemonInfo(void* ptr);
void QmlBridge127b18_DisplaySettingsRemoteDaemonInfo(void* ptr, struct Moc_PackedString remoteNodeAddress, struct Moc_PackedString remoteNodePort);
void QmlBridge127b18_ConnectDisplayFullBalanceInTransferAmount(void* ptr, long long t);
void QmlBridge127b18_DisconnectDisplayFullBalanceInTransferAmount(void* ptr);
void QmlBridge127b18_DisplayFullBalanceInTransferAmount(void* ptr, struct Moc_PackedString fullBalance);
void QmlBridge127b18_ConnectDisplayDefaultFee(void* ptr, long long t);
void QmlBridge127b18_DisconnectDisplayDefaultFee(void* ptr);
void QmlBridge127b18_DisplayDefaultFee(void* ptr, struct Moc_PackedString fee);
void QmlBridge127b18_ConnectDisplayNodeFee(void* ptr, long long t);
void QmlBridge127b18_DisconnectDisplayNodeFee(void* ptr);
void QmlBridge127b18_DisplayNodeFee(void* ptr, struct Moc_PackedString nodeFee);
void QmlBridge127b18_ConnectUpdateConfirmationsOfTransaction(void* ptr, long long t);
void QmlBridge127b18_DisconnectUpdateConfirmationsOfTransaction(void* ptr);
void QmlBridge127b18_UpdateConfirmationsOfTransaction(void* ptr, int index, struct Moc_PackedString confirmations);
void QmlBridge127b18_ConnectDisplayInfoScreen(void* ptr, long long t);
void QmlBridge127b18_DisconnectDisplayInfoScreen(void* ptr);
void QmlBridge127b18_DisplayInfoScreen(void* ptr);
void QmlBridge127b18_ConnectAddSavedAddressToList(void* ptr, long long t);
void QmlBridge127b18_DisconnectAddSavedAddressToList(void* ptr);
void QmlBridge127b18_AddSavedAddressToList(void* ptr, int dbID, struct Moc_PackedString name, struct Moc_PackedString address, struct Moc_PackedString paymentID);
void QmlBridge127b18_Log(void* ptr, struct Moc_PackedString msg);
void QmlBridge127b18_ClickedButtonExplorer(void* ptr, struct Moc_PackedString transactionID);
void QmlBridge127b18_GoToWebsite(void* ptr, struct Moc_PackedString url);
void QmlBridge127b18_ClickedButtonCopyTx(void* ptr, struct Moc_PackedString transactionID);
void QmlBridge127b18_ClickedButtonCopyAddress(void* ptr);
void QmlBridge127b18_ClickedButtonCopyKeys(void* ptr);
void QmlBridge127b18_ClickedButtonCopy(void* ptr, struct Moc_PackedString stringToCopy);
void QmlBridge127b18_ClickedButtonSend(void* ptr, struct Moc_PackedString transferAddress, struct Moc_PackedString transferAmount, struct Moc_PackedString transferPaymentID, struct Moc_PackedString transferFee);
void QmlBridge127b18_ClickedButtonBackupWallet(void* ptr);
void QmlBridge127b18_ClickedCloseWallet(void* ptr);
void QmlBridge127b18_ClickedButtonOpen(void* ptr, struct Moc_PackedString pathToWallet, struct Moc_PackedString passwordWallet);
void QmlBridge127b18_ClickedButtonCreate(void* ptr, struct Moc_PackedString filenameWallet, struct Moc_PackedString passwordWallet, struct Moc_PackedString confirmPasswordWallet);
void QmlBridge127b18_ClickedButtonImport(void* ptr, struct Moc_PackedString filenameWallet, struct Moc_PackedString passwordWallet, struct Moc_PackedString privateViewKey, struct Moc_PackedString privateSpendKey, struct Moc_PackedString mnemonicSeed, struct Moc_PackedString confirmPasswordWallet, struct Moc_PackedString scanHeight);
void QmlBridge127b18_ChoseRemote(void* ptr, char remote);
void QmlBridge127b18_SelectedRemoteNode(void* ptr, int index);
struct Moc_PackedString QmlBridge127b18_GetTransferAmountUSD(void* ptr, struct Moc_PackedString amountTRTL);
void QmlBridge127b18_ClickedCloseSettings(void* ptr);
void QmlBridge127b18_ClickedSettingsButton(void* ptr);
void QmlBridge127b18_ChoseDisplayFiat(void* ptr, char displayFiat);
void QmlBridge127b18_ChoseCheckpoints(void* ptr, char checkpoints);
void QmlBridge127b18_SaveRemoteDaemonInfo(void* ptr, struct Moc_PackedString daemonAddress, struct Moc_PackedString daemonPort);
void QmlBridge127b18_ResetRemoteDaemonInfo(void* ptr);
void QmlBridge127b18_GetFullBalanceAndDisplayInTransferAmount(void* ptr, struct Moc_PackedString transferFee);
void QmlBridge127b18_GetDefaultFeeAndDisplay(void* ptr);
void QmlBridge127b18_LimitDisplayTransactions(void* ptr, char limit);
struct Moc_PackedString QmlBridge127b18_GetVersion(void* ptr);
struct Moc_PackedString QmlBridge127b18_GetNewVersion(void* ptr);
struct Moc_PackedString QmlBridge127b18_GetNewVersionURL(void* ptr);
void QmlBridge127b18_OptimizeWalletWithFusion(void* ptr);
void QmlBridge127b18_SaveAddress(void* ptr, struct Moc_PackedString name, struct Moc_PackedString address, struct Moc_PackedString paymentID);
void QmlBridge127b18_FillListSavedAddresses(void* ptr);
void QmlBridge127b18_DeleteSavedAddress(void* ptr, int dbID);
void QmlBridge127b18_ExportListTransactions(void* ptr);
void QmlBridge127b18_RegisterToGo(void* ptr, void* object);
void QmlBridge127b18_DeregisterToGo(void* ptr, struct Moc_PackedString objectName);
int QmlBridge127b18_QmlBridge127b18_QRegisterMetaType();
int QmlBridge127b18_QmlBridge127b18_QRegisterMetaType2(char* typeName);
int QmlBridge127b18_QmlBridge127b18_QmlRegisterType();
int QmlBridge127b18_QmlBridge127b18_QmlRegisterType2(char* uri, int versionMajor, int versionMinor, char* qmlName);
void* QmlBridge127b18___children_atList(void* ptr, int i);
void QmlBridge127b18___children_setList(void* ptr, void* i);
void* QmlBridge127b18___children_newList(void* ptr);
void* QmlBridge127b18___dynamicPropertyNames_atList(void* ptr, int i);
void QmlBridge127b18___dynamicPropertyNames_setList(void* ptr, void* i);
void* QmlBridge127b18___dynamicPropertyNames_newList(void* ptr);
void* QmlBridge127b18___findChildren_atList(void* ptr, int i);
void QmlBridge127b18___findChildren_setList(void* ptr, void* i);
void* QmlBridge127b18___findChildren_newList(void* ptr);
void* QmlBridge127b18___findChildren_atList3(void* ptr, int i);
void QmlBridge127b18___findChildren_setList3(void* ptr, void* i);
void* QmlBridge127b18___findChildren_newList3(void* ptr);
void* QmlBridge127b18_NewQmlBridge(void* parent);
void QmlBridge127b18_DestroyQmlBridge(void* ptr);
void QmlBridge127b18_DestroyQmlBridgeDefault(void* ptr);
void QmlBridge127b18_ChildEventDefault(void* ptr, void* event);
void QmlBridge127b18_ConnectNotifyDefault(void* ptr, void* sign);
void QmlBridge127b18_CustomEventDefault(void* ptr, void* event);
void QmlBridge127b18_DeleteLaterDefault(void* ptr);
void QmlBridge127b18_DisconnectNotifyDefault(void* ptr, void* sign);
char QmlBridge127b18_EventDefault(void* ptr, void* e);
char QmlBridge127b18_EventFilterDefault(void* ptr, void* watched, void* event);
;
void QmlBridge127b18_TimerEventDefault(void* ptr, void* event);

#ifdef __cplusplus
}
#endif

#endif