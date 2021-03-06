% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/plot_season.R
\name{plot_season}
\alias{plot_season}
\title{plot_season}
\usage{
plot_season(
  INPUT,
  brks,
  plotdat,
  ylu,
  IsPlot.OnlyBad = FALSE,
  show.legend = TRUE,
  title = NULL
)
}
\arguments{
\item{INPUT}{A list object with the elements of \code{t}, \code{y}, \code{w},
\code{Tn} (optional) and \code{ylu}, returned by \code{\link[=check_input]{check_input()}}.}

\item{brks}{A list object returned by \code{season} or \code{season_mov}.}

\item{plotdat}{(optional) A list or data.table, with \code{t}, \code{y} and \code{w}.
Only if \code{IsPlot=TRUE}, \code{\link[=plot_input]{plot_input()}} will be used to plot.
Known that y and w in \code{INPUT} have been changed, we suggest using the
original data.table.}

\item{ylu}{\verb{[low, high]} of time-series y (curve fitting values are constrained
in the range of \code{ylu}.}

\item{IsPlot.OnlyBad}{If true, only plot partial figures whose NSE < 0.3.}

\item{show.legend}{Whether to show legend?}

\item{title}{The main title (on top)}
}
\description{
Plot growing season divding result.
}
