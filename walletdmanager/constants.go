// Copyright (c) 2018, The TurtleCoin Developers
//
// Please see the included LICENSE file for more information.
//

package walletdmanager

const (
	// DefaultTransferFee is the default fee. It is expressed in TRTL
	DefaultTransferFee float64 = 0.1

	logWalletdCurrentSessionFilename     = "bminer-service-session.log"
	logWalletdAllSessionsFilename        = "bminer-service.log"
	logTurtleCoindCurrentSessionFilename = "BminerCoind-session.log"
	logTurtleCoindAllSessionsFilename    = "BminerCoind.log"
	walletdLogLevel                      = "3" // should be at least 3 as I use some logs messages to confirm creation of wallet
	walletdCommandName                   = "bminer-service"
	turtlecoindCommandName               = "BminerCoind"
)
