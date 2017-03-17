/*!
 * \file      RegionUS915Hybrid-Hybrid.h
 *
 * \brief     Region definition for US915
 *
 * \copyright Revised BSD License, see section \ref LICENSE.
 *
 * \code
 *                ______                              _
 *               / _____)             _              | |
 *              ( (____  _____ ____ _| |_ _____  ____| |__
 *               \____ \| ___ |    (_   _) ___ |/ ___)  _ \
 *               _____) ) ____| | | || |_| ____( (___| | | |
 *              (______/|_____)_|_|_| \__)_____)\____)_| |_|
 *              (C)2013 Semtech
 *
 *               ___ _____ _   ___ _  _____ ___  ___  ___ ___
 *              / __|_   _/_\ / __| |/ / __/ _ \| _ \/ __| __|
 *              \__ \ | |/ _ \ (__| ' <| _| (_) |   / (__| _|
 *              |___/ |_/_/ \_\___|_|\_\_| \___/|_|_\\___|___|
 *              embedded.connectivity.solutions===============
 *
 * \endcode
 *
 * \author    Miguel Luis ( Semtech )
 *
 * \author    Gregory Cristian ( Semtech )
 *
 * \author    Daniel Jaeckle ( STACKFORCE )
 *
 * \defgroup  REGIONUS915HYB Region US915 in hybrid mode
 *            This is a hybrid implementation for US915, supporting 16 uplink channels only.
 * \{
 */
#ifndef __REGION_US915_HYBRID_H__
#define __REGION_US915_HYBRID_H__

/*!
 * LoRaMac maximum number of channels
 */
#define US915_HYBRID_MAX_NB_CHANNELS                72

/*!
 * Minimal datarate that can be used by the node
 */
#define US915_HYBRID_TX_MIN_DATARATE                DR_0

/*!
 * Maximal datarate that can be used by the node
 */
#define US915_HYBRID_TX_MAX_DATARATE                DR_4

/*!
 * Minimal datarate that can be used by the node
 */
#define US915_HYBRID_RX_MIN_DATARATE                DR_8

/*!
 * Maximal datarate that can be used by the node
 */
#define US915_HYBRID_RX_MAX_DATARATE                DR_13

/*!
 * Default datarate used by the node
 */
#define US915_HYBRID_DEFAULT_DATARATE               DR_0

/*!
 * Minimal Rx1 receive datarate offset
 */
#define US915_HYBRID_MIN_RX1_DR_OFFSET              0

/*!
 * Maximal Rx1 receive datarate offset
 */
#define US915_HYBRID_MAX_RX1_DR_OFFSET              3

/*!
 * Default Rx1 receive datarate offset
 */
#define US915_HYBRID_DEFAULT_RX1_DR_OFFSET          0

/*!
 * Minimal Tx output power that can be used by the node
 */
#define US915_HYBRID_MIN_TX_POWER                   TX_POWER_10

/*!
 * Maximal Tx output power that can be used by the node
 */
#define US915_HYBRID_MAX_TX_POWER                   TX_POWER_0

/*!
 * Default Tx output power used by the node
 */
#define US915_HYBRID_DEFAULT_TX_POWER               TX_POWER_5

/*!
 * ADR Ack limit
 */
#define US915_HYBRID_ADR_ACK_LIMIT                  64

/*!
 * ADR Ack delay
 */
#define US915_HYBRID_ADR_ACK_DELAY                  32

/*!
 * Enabled or disabled the duty cycle
 */
#define US915_HYBRID_DUTY_CYCLE_ENABLED             0

/*!
 * Maximum RX window duration
 */
#define US915_HYBRID_MAX_RX_WINDOW                  3000

/*!
 * Receive delay 1
 */
#define US915_HYBRID_RECEIVE_DELAY1                 1000

/*!
 * Receive delay 2
 */
#define US915_HYBRID_RECEIVE_DELAY2                 2000

/*!
 * Join accept delay 1
 */
#define US915_HYBRID_JOIN_ACCEPT_DELAY1             5000

/*!
 * Join accept delay 2
 */
#define US915_HYBRID_JOIN_ACCEPT_DELAY2             6000

/*!
 * Maximum frame counter gap
 */
#define US915_HYBRID_MAX_FCNT_GAP                   16384

/*!
 * Ack timeout
 */
#define US915_HYBRID_ACKTIMEOUT                     2000

/*!
 * Random ack timeout limits
 */
#define US915_HYBRID_ACK_TIMEOUT_RND                1000

/*!
 * Second reception window channel frequency definition.
 */
#define US915_HYBRID_RX_WND_2_FREQ                  923300000

/*!
 * Second reception window channel datarate definition.
 */
#define US915_HYBRID_RX_WND_2_DR                    DR_8

/*!
 * LoRaMac maximum number of bands
 */
#define US915_HYBRID_MAX_NB_BANDS                   1

/*!
 * Band 0 definition
 * { DutyCycle, TxMaxPower, LastTxDoneTime, TimeOff }
 */
#define US915_HYBRID_BAND0                          { 1, US915_HYBRID_DEFAULT_TX_POWER, 0,  0 } //  100.0 %

/*!
 * Defines the first channel for RX window 1 for US band
 */
#define US915_HYBRID_FIRST_RX1_CHANNEL              ( (uint32_t) 923.3e6 )

/*!
 * Defines the last channel for RX window 1 for US band
 */
#define US915_HYBRID_LAST_RX1_CHANNEL               ( (uint32_t) 927.5e6 )

/*!
 * Defines the step width of the channels for RX window 1
 */
#define US915_HYBRID_STEPWIDTH_RX1_CHANNEL          ( (uint32_t) 600e3 )

/*!
 * Data rates table definition
 */
static const uint8_t DataratesUS915_HYBRID[]  = { 10, 9, 8,  7,  8,  0,  0, 0, 12, 11, 10, 9, 8, 7, 0, 0 };

/*!
 * Bandwidths table definition in Hz
 */
static const uint32_t BandwidthsUS915_HYBRID[] = { 125e3, 125e3, 125e3, 125e3, 500e3, 0, 0, 0, 500e3, 500e3, 500e3, 500e3, 500e3, 500e3, 0, 0 };

/*!
 * Up/Down link data rates offset definition
 */
static const int8_t DatarateOffsetsUS915_HYBRID[5][4] =
{
    { DR_10, DR_9 , DR_8 , DR_8  }, // DR_0
    { DR_11, DR_10, DR_9 , DR_8  }, // DR_1
    { DR_12, DR_11, DR_10, DR_9  }, // DR_2
    { DR_13, DR_12, DR_11, DR_10 }, // DR_3
    { DR_13, DR_13, DR_12, DR_11 }, // DR_4
};

/*!
 * Maximum payload with respect to the datarate index. Cannot operate with repeater.
 */
static const uint8_t MaxPayloadOfDatarateUS915_HYBRID[] = { 11, 53, 125, 242, 242, 0, 0, 0, 53, 129, 242, 242, 242, 242, 0, 0 };

/*!
 * Maximum payload with respect to the datarate index. Can operate with repeater.
 */
static const uint8_t MaxPayloadOfDatarateRepeaterUS915_HYBRID[] = { 11, 53, 125, 242, 242, 0, 0, 0, 33, 109, 222, 222, 222, 222, 0, 0 };

/*!
 * Tx output powers table definition
 */
static const int8_t TxPowersUS915_HYBRID[] = { 30, 28, 26, 24, 22, 20, 18, 16, 14, 12, 10 };



/*!
 * \brief The function gets a value of a specific phy attribute.
 *
 * \param [IN] getPhy Pointer to the function parameters.
 */
void RegionUS915HybridGetPhyParam( GetPhyParams_t* getPhy );

/*!
 * \brief Updates the last TX done parameters of the current channel.
 *
 * \param [IN] txDone Pointer to the function parameters.
 */
void RegionUS915HybridSetBandTxDone( SetBandTxDoneParams_t* txDone );

/*!
 * \brief Initializes the channels masks and the channels.
 *
 * \param [IN] type Sets the initialization type.
 */
void RegionUS915HybridInitDefaults( InitType_t type );

/*!
 * \brief Verifies a parameter.
 *
 * \param [IN] verify Pointer to the function parameters.
 *
 * \param [IN] type Sets the initialization type.
 *
 * \retval Returns true, if the parameter is valid.
 */
bool RegionUS915HybridVerify( VerifyParams_t* verify, PhyAttribute_t phyAttribute );

/*!
 * \brief The function parses the input buffer and sets up the channels of the
 *        CF list.
 *
 * \param [IN] applyCFList Pointer to the function parameters.
 */
void RegionUS915HybridApplyCFList( ApplyCFListParams_t* applyCFList );

/*!
 * \brief Sets a channels mask.
 *
 * \param [IN] chanMaskSet Pointer to the function parameters.
 *
 * \retval Returns true, if the channels mask could be set.
 */
bool RegionUS915HybridChanMaskSet( ChanMaskSetParams_t* chanMaskSet );

/*!
 * \brief Calculates the next datarate to set, when ADR is on or off.
 *
 * \param [IN] adrNext Pointer to the function parameters.
 *
 * \param [OUT] drOut The calculated datarate for the next TX.
 *
 * \param [OUT] txPowOut The TX power for the next TX.
 *
 * \param [OUT] adrAckCounter The calculated ADR acknowledgement counter.
 *
 * \retval Returns true, if an ADR request should be performed.
 */
bool RegionUS915HybridAdrNext( AdrNextParams_t* adrNext, int8_t* drOut, int8_t* txPowOut, uint32_t* adrAckCounter );

/*!
 * Computes the Rx window timeout and offset.
 *
 * \param [IN] datarate     Rx window datarate index to be used
 *
 * \param [IN] rxError      System maximum timing error of the receiver. In milliseconds
 *                          The receiver will turn on in a [-rxError : +rxError] ms
 *                          interval around RxOffset
 *
 * \param [OUT]rxConfigParams Returns updated WindowTimeout and WindowOffset fields.
 */
void RegionUS915HybridComputeRxWindowParameters( int8_t datarate, uint32_t rxError, RxConfigParams_t *rxConfigParams );

/*!
 * \brief Configuration of the RX windows.
 *
 * \param [IN] rxConfig Pointer to the function parameters.
 *
 * \param [OUT] datarate The datarate index which was set.
 *
 * \retval Returns true, if the configuration was applied successfully.
 */
bool RegionUS915HybridRxConfig( RxConfigParams_t* rxConfig, int8_t* datarate );

/*!
 * \brief TX configuration.
 *
 * \param [IN] txConfig Pointer to the function parameters.
 *
 * \param [OUT] txPower The tx power index which was set.
 *
 * \param [OUT] txTimeOnAir The time-on-air of the frame.
 *
 * \retval Returns true, if the configuration was applied successfully.
 */
bool RegionUS915HybridTxConfig( TxConfigParams_t* txConfig, int8_t* txPower, TimerTime_t* txTimeOnAir );

/*!
 * \brief The function processes a Link ADR Request.
 *
 * \param [IN] linkAdrReq Pointer to the function parameters.
 *
 * \retval Returns the status of the operation, according to the LoRaMAC specification.
 */
uint8_t RegionUS915HybridLinkAdrReq( LinkAdrReqParams_t* linkAdrReq, int8_t* drOut, int8_t* txPowOut, uint8_t* nbRepOut, uint8_t* nbBytesParsed );

/*!
 * \brief The function processes a RX Parameter Setup Request.
 *
 * \param [IN] rxParamSetupReq Pointer to the function parameters.
 *
 * \retval Returns the status of the operation, according to the LoRaMAC specification.
 */
uint8_t RegionUS915HybridRxParamSetupReq( RxParamSetupReqParams_t* rxParamSetupReq );

/*!
 * \brief The function processes a Channel Request.
 *
 * \param [IN] newChannelReq Pointer to the function parameters.
 *
 * \retval Returns the status of the operation, according to the LoRaMAC specification.
 */
uint8_t RegionUS915HybridNewChannelReq( NewChannelReqParams_t* newChannelReq );

/*!
 * \brief The function processes a TX ParamSetup Request.
 *
 * \param [IN] txParamSetupReq Pointer to the function parameters.
 *
 * \retval Returns the status of the operation, according to the LoRaMAC specification.
 *         Returns -1, if the functionality is not implemented. In this case, the end node
 *         shall not process the command.
 */
int8_t RegionUS915HybridTxParamSetupReq( TxParamSetupReqParams_t* txParamSetupReq );

/*!
 * \brief The function processes a DlChannel Request.
 *
 * \param [IN] dlChannelReq Pointer to the function parameters.
 *
 * \retval Returns the status of the operation, according to the LoRaMAC specification.
 */
uint8_t RegionUS915HybridDlChannelReq( DlChannelReqParams_t* dlChannelReq );

/*
 * \brief Alternates the datarate of the channel for the join request.
 *
 * \param [IN] alternateDr Pointer to the function parameters.
 *
 * \retval Datarate to apply.
 */
int8_t RegionUS915HybridAlternateDr( AlternateDrParams_t* alternateDr );

/*!
 * \brief Calculates the back-off time.
 *
 * \param [IN] calcBackOff Pointer to the function parameters.
 */
void RegionUS915HybridCalcBackOff( CalcBackOffParams_t* calcBackOff );

/*!
 * \brief Searches and set the next random available channel
 *
 * \param [OUT] channel Next channel to use for TX.
 *
 * \param [OUT] time Time to wait for the next transmission according to the duty
 *              cycle.
 *
 * \retval Function status [1: OK, 0: Unable to find a channel on the current datarate]
 */
bool RegionUS915HybridNextChannel( NextChanParams_t* nextChanParams, uint8_t* channel, TimerTime_t* time );

/*!
 * \brief Adds a channel.
 *
 * \param [IN] channelAdd Pointer to the function parameters.
 *
 * \retval Status of the operation.
 */
LoRaMacStatus_t RegionUS915HybridChannelAdd( ChannelAddParams_t* channelAdd );

/*!
 * \brief Removes a channel.
 *
 * \param [IN] channelRemove Pointer to the function parameters.
 *
 * \retval Returns true, if the channel was removed successfully.
 */
bool RegionUS915HybridChannelsRemove( ChannelRemoveParams_t* channelRemove  );

/*!
 * \brief Sets the radio into continuous wave mode.
 *
 * \param [IN] continuousWave Pointer to the function parameters.
 */
void RegionUS915HybridSetContinuousWave( ContinuousWaveParams_t* continuousWave );

/*!
 * \brief Computes new datarate according to the given offset
 *
 * \param [IN] downlinkDwellTime Downlink dwell time configuration. 0: No limit, 1: 400ms
 *
 * \param [IN] dr Current datarate
 *
 * \param [IN] drOffset Offset to be applied
 *
 * \retval newDr Computed datarate.
 */
uint8_t RegionUS915HybridApplyDrOffset( uint8_t downlinkDwellTime, int8_t dr, int8_t drOffset );

/*! \} defgroup REGIONUS915HYB */

#endif // __REGION_US915_HYBRID_H__